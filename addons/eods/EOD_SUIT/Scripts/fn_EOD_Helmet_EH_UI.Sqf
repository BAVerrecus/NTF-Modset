/*
fn_EOD_Helmet_EH_UI.sqf
Author(s): MrEwok
Description:This run the EOD_Helmet UI Functions
Note(s): This check player helmet , camera (external/Internal), explosion , put/take and respawn. (Initialized in PostInit)
*/

/* 
[] spawn {
player addheadgear "EOD9_HELMET";
player addvest "EOD_SUIT_vest";
player adduniform "EOD_Uniform";
};
 */

///////////////////////////////////////////////////////////////////////////////////Removing UI/////////////////////////////////////////////////////////////////////////////////
EOD_Suit_fnc_RMV_UI = 
{
	("EODS_Helmet_Layer" call BIS_fnc_rscLayer) cutRsc["default", "PLAIN",0,true];
};

///////////////////////////////////////////////////////////////////////////////////Checking Camera/////////////////////////////////////////////////////////////////////////////////
EOD_SUIT_fnc_CameraCHECK = 
{	
	_type_EH = _this select 1; 
	_casque = "";
	_interface_Casque_Afficher = false; 
	Boucle_Casque_Lancer = "Init"; 	
	
	if (_type_EH isEqualTo "Take") then 
	{
		_casque = _this select 0;
	};
	
	if (_type_EH isEqualTo "Respawn" or {_type_EH isEqualTo "Spawn"}) then 
	{
		_casque = headgear player;
	};	
	
	if (Boucle_Casque_Lancer isEqualTo "True") exitwith {};
	
	if (_casque isEqualTo "EOD9_HELMET") then
	{
		waituntil 
		{			
			if (Boucle_Casque_Lancer isEqualTo "Init") then {Boucle_Casque_Lancer = "True";};
			
			[] call
			{
				if (cameraView isEqualTo "INTERNAL" and {!_interface_Casque_Afficher}) exitwith 
				{				
					("EODS_Helmet_Layer" call BIS_fnc_rscLayer) cutRsc ["RscEOD_Helmet","PLAIN",0,true];
					[] spawn EWK_rain_fnc_check;
					_interface_Casque_Afficher = true;
				};
				
				if (cameraView isEqualTo "EXTERNAL" and {_interface_Casque_Afficher}) then 
				{
					("EODS_Helmet_Layer" call BIS_fnc_rscLayer) cutRsc["default", "PLAIN",0,true];
					_interface_Casque_Afficher = false;
				};	
			};
			
			if (!alive player or {headgear player != "EOD9_HELMET"}) exitwith 
			{
				Boucle_Casque_Lancer = "False"; 
				("EODS_Helmet_Layer" call BIS_fnc_rscLayer) cutRsc["default", "PLAIN",0,true];
				["Eteindre"] spawn Script_EOD_SUIT_Lumieres;
				true
			};
			false
		};
	};
};	