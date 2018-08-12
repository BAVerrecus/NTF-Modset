/*
fn_AddEH.sqf
Author(s): MrEwok
Description:This Add EH's to player
Note(s): None
*/		

#include "\a3\editor_f\Data\Scripts\dikCodes.h"	
	
Script_EOD_SUIT_Init_EH =
{
	EOD_SUIT_EH_Take = player AddEventHandler ["Take",{[_this] spawn Script_EOD_SUIT_EH_Take;}];
	EOD_SUIT_EH_Put = player AddEventHandler ["Put",{[_this] spawn Script_EOD_SUIT_EH_Put;}];
	EOD_SUIT_EH_Respawn = player AddEventHandler ["Respawn", {[] spawn Script_EOD_SUIT_EH_Respawn;}];
	EOD_SUIT_EH_Killed = player AddEventHandler ["Killed",{[] spawn Script_EOD_SUIT_EH_Killed;}];
};
	
	
Script_EOD_SUIT_EH_Take =
{
	_liste_Take = _this select 0;
	
	if (_liste_Take select 2 isEqualTo "EOD9_HELMET") then 
	{
		
		[_liste_Take select 2,"Take"] spawn EOD_SUIT_fnc_CameraCHECK;
		[] spawn Script_EOD_SUIT_Ouverture_Interface;		
	};
};

Script_EOD_SUIT_EH_Put =
{
	_liste_Put = _this select 0;
	
};

Script_EOD_SUIT_EH_Killed =
{
	[] spawn EOD_Suit_fnc_RMV_UI;
};

Script_EOD_SUIT_EH_HandleDamage =
{	
	_degats = [_this select 0] call EOD_Suit_fnc_EX_Protection; _degats
};

Script_EOD_SUIT_EH_Respawn =
{
	[_this,"Respawn"] spawn EOD_SUIT_fnc_CameraCHECK;
	[] spawn EOD_SUIT_fnc_REDBREATHER_SND;
};

Script_EOD_SUIT_CBA =
{	
	if (!isNil "cba_keybinding") then 
	{
		["EODS Suite","EOD9 interface Key",localize "STR_Show_Close_Interface", {[_this] spawn EOD_SUIT_fnc_interface}, {}, [DIK_NUMPAD1, [false, false, false]]] call CBA_fnc_addKeybind;
	} else 
	{
		[localize "STR_EODS_Suite_Wrong_Version_CBA"] call cba_fnc_systemChat;
	};
};