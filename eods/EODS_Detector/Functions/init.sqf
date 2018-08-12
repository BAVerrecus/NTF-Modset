/*
init.sqf
Author(s): MrEwok , NorX Aengell
Description: Initialize Minedetector functions.
*/

waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };

EODS_MDET_var_active = false;
EODS_MDET_Uxo_var_active = false;

/// COMMON VARIABLES
if (isNil "EODS_MDET_var_radius") then { EODS_MDET_var_radius = 5 }; // Maximum distance from player to mine
if (isNil "EODS_MDET_var_angle") then { EODS_MDET_var_angle = 60 }; // Player to mine direction angle threshold

/// RANDOMIZE DISTANCE VALUE
if (isNil "EODS_MDET_var_rnd_radius") then { EODS_MDET_var_rnd_radius = true }; // Enable/Disable randomizer
if (isNil "EODS_MDET_var_rnd_radius_value") then { EODS_MDET_var_rnd_radius_value = 7 }; // +/- %

/// LOAD FUNCTIONS
call compile preprocessFileLineNumbers "EODS_Detector\Functions\functions.sqf";

player addEventHandler ["Respawn", {
	player execVM 'EODS_Detector\Functions\init.sqf';
}];

//_EODS_mdet_action_1 = player addAction [localize "STR_EODS_MDET_TOGGLE_ON", { call EODS_MDET_fnc_switchState }, [], -100, false, true, "", "call EODS_MDET_fnc_canDetect && !EODS_MDET_var_active"];
//_EODS_mdet_action_2 = player addAction [localize "STR_EODS_MDET_TOGGLE_OFF", { call EODS_MDET_fnc_switchState }, [], -100, false, true, "", "call EODS_MDET_fnc_canDetect && EODS_MDET_var_active"];

/*
_textoEstructurado_mdet_action_1 = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_MDET_TOGGLE_ON";
_textoEstructurado_mdet_action_2 = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_MDET_TOGGLE_OFF";
*/

_EODS_mdet_action_1 = player addAction ["turn on mine detector", { call EODS_MDET_fnc_switchState }, [], -100, false, true, "", 'alive _target && {currentWeapon _target in ["EODS_Detector_Weapon", "EODS_VMH3CS_Weapon"]} && !EODS_MDET_var_active'];
_EODS_mdet_action_2 = player addAction ["turn off mine detector", { call EODS_MDET_fnc_switchState }, [], -100, false, true, "", 'alive _target && {currentWeapon _target in ["EODS_Detector_Weapon", "EODS_VMH3CS_Weapon"]} && EODS_MDET_var_active'];

_EODS_mdet_action_3 = player addAction ["turn on mine detector", { call EODS_MDET_fnc_switchState_Uxo }, [], -100, false, true, "", 'alive _target && {currentWeapon _target in ["EODS_VMH3CS_UXO_head_Weapon"]} && !EODS_MDET_Uxo_var_active'];
_EODS_mdet_action_4 = player addAction ["turn off mine detector", { call EODS_MDET_fnc_switchState_Uxo }, [], -100, false, true, "", 'alive _target && {currentWeapon _target in ["EODS_VMH3CS_UXO_head_Weapon"]} && EODS_MDET_Uxo_var_active'];

while { alive player } do {
	//if (call EODS_MDET_fnc_canDetect) then {
	if (EODS_MDET_var_active) then {
			_nearestMine = call EODS_MDET_fnc_getNearestMine;
		//	_nearestIED = call EODS_MDET_fnc_getNearestIED;
			if (count _nearestMine > 0) then {
				_nearestMine call EODS_MDET_fnc_mineInRange;
			};
		/*	if (count _nearestIED > 0) then {
				_nearestIED call EODS_MDET_fnc_mineInRange;
			};*/
		//} else {
			// sleep 2.381;
		//};
	} else {
		if (EODS_MDET_var_active) then {
			[] call EODS_MDET_fnc_switchState
		};
	};
	sleep .503;
};

while { alive player } do {
	//if (call EODS_MDET_fnc_canDetect) then {
		if (EODS_MDET_Uxo_var_active) then {
			_nearestUxo = call EODS_MDET_fnc_getNearestUxo;
		//	_nearestIED = call EODS_MDET_fnc_getNearestIED;
			if (count _nearestUxo > 0) then {
				_nearestUxo call EODS_MDET_fnc_UxoInRange;
			};
		/*	if (count _nearestIED > 0) then {
				_nearestIED call EODS_MDET_fnc_mineInRange;
			};*/
		//} else {
			// sleep 2.381;
		//};
	} else {
		if (EODS_MDET_Uxo_var_active) then {
			[] call EODS_MDET_fnc_switchState_Uxo
		};
	};
	sleep .503;
};


player removeAction _EODS_mdet_action_1;
player removeAction _EODS_mdet_action_2;

player removeAction _EODS_mdet_action_3;
player removeAction _EODS_mdet_action_4;

/*
MineDetectorMakeSound = true;
MineDetector_fnc_init = 
{
	player addAction ["Switch MineDetector On/Off",
	"MineDetectorMakeSound=not MineDetectorMakeSound;hint ('Enable MineDetector Beep: '+str(MineDetectorMakeSound))",
	[],
	-100,
	false,
	true,
	"",
	"'MineDetector' in items player"];
};

call MineDetector_fnc_init;
while {true} do
{
	if(alive player && {"MineDetector" in items player} && {MineDetectorMakeSound}) then
	{
		[player] call Mine_detector_fnc_playSound;
	}
	else
	{
//		systemChat ("Has Mine Detector: "+str("MineDetector" in items player));
	};
	sleep .5;
};
*/