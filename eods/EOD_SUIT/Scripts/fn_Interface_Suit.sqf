/*
fn_Interface_Suit.sqf
Author(s): MrEwok
Description:This Run EOD_SUIT interface functions
Note(s): If the EODS userconfig is here, SoundRegulation Settings are grabbed inside otherwise they are assigned by the script himself....(Initialized in PostInit)
*/

/*  led's de l'interface a cacher ou reveler en fonction du status ON/OFF

REDBREATHER_LED = ctrlShow [67677, False] ;(tu l'a deja assigné :) )
POWER_LED = ctrlShow [67678, False] ;
SOUND_LED = ctrlShow [67679, False] ; (A reveler Quand le "sound regulation" est actif)
LIGHT_LED = ctrlShow [67680, False] ; (A reveler avec les lumieres du casque sont activées)
ENERGY_LED = ctrlShow [67681, False] ; (en face du logo pile a reveler en meme temps que le power)

////////////////////////////////////////////////////////////////////////////////////LED ROUGES///////////////////////////////////////////////////////////////////////////////////////////
					
REDBREATHER_LED_R = ctrlShow [67684, False] ;
SOUND_LED_R = ctrlShow [67682, False] ;
LIGHT_LED_R = ctrlShow [67683, False] ;
ENERGY_LED_R = ctrlShow [67685, False] ; Possiblement a supprimer mais j'etait lancé :) si tu a besoin de l'utiliser décommente les parties indiquées sur la config.
*/


// Parsing variables from userconfig.
if (isNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_MINIMUM_VOLUME_SOUND")) then 
{
	EODS_SoundRegulation_minVolumeSound = (getNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_MINIMUM_VOLUME_SOUND"))
} else {EODS_SoundRegulation_minVolumeSound = 0.2;};

if (isNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_MINIMUM_VOLUME_MUSIC")) then 
{
	EODS_SoundRegulation_minVolumeMusic = (getNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_MINIMUM_VOLUME_MUSIC"))
} else {EODS_SoundRegulation_minVolumeMusic = 0.1;};

if (isNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_SUPPRESS_DURATION")) then 
{
	EODS_SoundRegulation_suppressDuration = (getNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_SUPPRESS_DURATION"))
} else {EODS_SoundRegulation_suppressDuration = 0.5;};

if (isNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_RESTORE_DURATION")) then 
{
	EODS_SoundRegulation_restoreDuration = (getNumber (configFile >> "EODS_SoundRegulation_settings" >> "EODS_SoundRegulation_RESTORE_DURATION"))
} else {EODS_SoundRegulation_restoreDuration = 1;};
	
Alimentation_Activer = false;
Respirateur_Activer = false;
Boucle_Respirateur_Lancer = false;
Nombre_Instance_Respirateur = 0;
Systeme_Sonore_Activer = false;
Systeme_Sonore_Actif = false;
EODS_SoundRegulation_normalVolumeSound = soundVolume;
EODS_SoundRegulation_normalVolumeMusic = musicVolume;
Respirateur_Externe_Activer = false;
Lumiere_Allumer = false;
Ventilation_Activer = false;
	
EOD_SUIT_fnc_interface = 
{
	if (!isnull finddisplay 160791) exitwith 
	{
		closedialog 160791;
	};
	
	if (isnull finddisplay 160791) then 
	{
		if (uniform player isEqualTo "EOD_Uniform" and {headgear player isEqualTo "EOD9_HELMET"}) then
		{
			createdialog "EOD_Suit_HandControl_Dialog";
			[] spawn Script_EOD_SUIT_Ouverture_Interface;			
		};		
	};
};

Script_EOD_SUIT_Ouverture_Interface =
{
	if (Alimentation_Activer) then 
	{
		ctrlShow [67678, True]; ctrlShow [67681, True];
		
		if (Respirateur_Activer) then {ctrlShow [67677, True]; ctrlShow [67684, False]; [] spawn EOD_SUIT_fnc_REDBREATHER_SND;} else 
		{ctrlShow [67684, True]; ctrlShow [67677, False];};			
		if (Systeme_Sonore_Activer) then {ctrlShow [67679, True]; ctrlShow [67682, False]; ["Activer"] spawn EODS_SoundRegulation_fnc_toggleSounds;} else 
		{ctrlShow [67682, True]; ctrlShow [67679, False]; ["Désactiver"] spawn EODS_SoundRegulation_fnc_toggleSounds;};
		if (Lumiere_Allumer) then {ctrlShow [67680, True]; ctrlShow [67683, False]; ["Allumer"] spawn Script_EOD_SUIT_Lumieres;} else 
		{ctrlShow [67680, False]; ctrlShow [67683, True]; ["Eteindre"] spawn Script_EOD_SUIT_Lumieres;};
	} else 
	{
		ctrlShow [67678, False]; ctrlShow [67677, False]; ctrlShow [67679, False]; ctrlShow [67680, False]; 
		ctrlShow [67681, False]; ctrlShow [67682, False]; ctrlShow [67683, False]; ctrlShow [67684, False]; 
	};
};

Script_EOD_SUIT_Action_Bouton =
{
	_bouton = _this select 0;	
	
	if (_bouton isEqualTo "Alimentation") exitwith 
	{
		if (Alimentation_Activer) exitwith 
		{ 
			Alimentation_Activer = false; ["Eteindre"] spawn Script_EOD_SUIT_Lumieres; ["Désactiver"] spawn EODS_SoundRegulation_fnc_toggleSounds; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
		
		if (!Alimentation_Activer) then 
		{ 
			Alimentation_Activer = true; [] spawn Script_EOD_SUIT_Ouverture_Interface;
		};
	};
	
	if (!Alimentation_Activer) exitwith {};
	
	if (_bouton isEqualTo "Respirateur") exitwith 
	{		
		if (Respirateur_Activer) exitwith 
		{
			Respirateur_Activer = false; Boucle_Respirateur_Lancer = false; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
		
		if (!Respirateur_Activer) then 
		{
			Respirateur_Activer = true; ctrlShow [67677, true]; ctrlShow [67684, False]; if (!Boucle_Respirateur_Lancer) then {[] spawn EOD_SUIT_fnc_REDBREATHER_SND;};
		};
	};
	
	if (_bouton isEqualTo "Système sonore") exitwith 
	{		
		if (Systeme_Sonore_Activer) exitwith 
		{
			Systeme_Sonore_Activer = false; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
		
		if (!Systeme_Sonore_Activer) then 
		{
			Systeme_Sonore_Activer = true; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
	};
	
	if (_bouton isEqualTo "Lumières") then 
	{		
		if (Lumiere_Allumer) exitwith 
		{
			Lumiere_Allumer = false; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
		
		if (!Lumiere_Allumer) then 
		{
			Lumiere_Allumer = true; [] spawn Script_EOD_SUIT_Ouverture_Interface; 
		};
	};
};

EOD_SUIT_fnc_REDBREATHER_SND = 
{		
	if (Nombre_Instance_Respirateur >= 1) exitwith {};
	
	Nombre_Instance_Respirateur = Nombre_Instance_Respirateur + 1;
	
	waituntil
	{		
		Boucle_Respirateur_Lancer = true;		
		if (!alive player or {!Respirateur_Activer} or {headgear player != "EOD9_HELMET"} or {!Alimentation_Activer} or {!Boucle_Respirateur_Lancer}) exitwith {Nombre_Instance_Respirateur = Nombre_Instance_Respirateur - 1; Boucle_Respirateur_Lancer = false; true};								
		playsound "Redbreather2_resp_Low";
		sleep 3;
		false
	};	
};player say ["Redbreather2_resp_Low",5];

EODS_SoundRegulation_fnc_toggleSounds =
{	
	_action = _this select 0;
	
	if (_action isEqualTo "Activer" or {Systeme_Sonore_Activer}) exitwith 
	{		
		[] spawn EODS_SoundRegulation_fnc_suppressSounds;
	};
	
	if (_action isEqualTo "Désactiver" or {!Systeme_Sonore_Activer}) then 
	{
		[] spawn EODS_SoundRegulation_fnc_restoreSounds;
	};
};

EODS_SoundRegulation_fnc_suppressSounds =
{	
	if(EODS_SoundRegulation_normalVolumeSound > EODS_SoundRegulation_minVolumeSound) then 
	{
		missionNameSpace setVariable ["AGM_Hearing_disableVolumeUpdate", true]; 
		EODS_SoundRegulation_suppressDuration fadeSound EODS_SoundRegulation_minVolumeSound;
	};
	
	if(EODS_SoundRegulation_normalVolumeMusic > EODS_SoundRegulation_minVolumeMusic) then 
	{
		missionNameSpace setVariable ["AGM_Hearing_disableVolumeUpdate", true]; 
		EODS_SoundRegulation_suppressDuration fadeMusic EODS_SoundRegulation_minVolumeMusic;
	};	
	
	Systeme_Sonore_Actif = true;
};

EODS_SoundRegulation_fnc_restoreSounds =
{	
	EODS_SoundRegulation_restoreDuration fadeSound EODS_SoundRegulation_normalVolumeSound;
	EODS_SoundRegulation_restoreDuration fadeMusic EODS_SoundRegulation_normalVolumeMusic;

	missionNameSpace setVariable ["AGM_Hearing_disableVolumeUpdate", false];	
};

Script_EOD_SUIT_Lumieres = 
{
	_action = _this select 0;
	
	
	if (_action isEqualTo "Allumer" and {isnil {HelmetLight} or {isnull HelmetLight}}) exitwith 
	{
		HelmetLight = "EOD9_HELMET_Lights_VEH" createVehicle getPos player;
		createVehicleCrew HelmetLight;
		(crew HelmetLight select 0) setBehaviour "CARELESS";
		driver HelmetLight action ["lightOn", HelmetLight] ;
		HelmetLight attachTo [Player, [-0.1,0,0.12], "Head"]; 
		HelmetLight setVehicleLock "LOCKED";
	};
	
	if (_action isEqualTo "Eteindre" and {!isnil {HelmetLight}}) then {deletevehicle (crew HelmetLight select 0); deletevehicle HelmetLight;};
};