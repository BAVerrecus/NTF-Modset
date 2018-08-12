/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

#include "\EODS_ieds\funciones\PCU\EODS_VARS.sqf"

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

call compile preprocessFileLineNumbers "\EODS_ieds\funciones\TALON\EODS_TALON_FUNCIONES_GENERALES.sqf";

call compile preprocessFileLineNumbers "\EODS_ieds\funciones\PCU\EODS_PCU_FUNCIONES_GENERALES.sqf";

call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\KRON_Strings.sqf";



//-----------------------------------------------------------------------------------------------------------

if (IsServer) then {

	[] spawn FNC_EODS_IEDS_FALSO_EN_EL_PISO;

	//[] spawn FNC_EODS_OBJETOS_INTERAC;
};

if (hasInterface) then {

	EODS_IEDS_PCU_HABILITADO = true;

	[player] spawn FNC_EODS_PCU_IEDS_INVENTARIO;

	// Check if CBA Keybinding system is available.

	if (!isNil "cba_keybinding") then {

		// Register CBA keybinds (defaults are read from config file).

		_textInclineFwArm = localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_FORW_ARM"; //Talon: Arm Forward Inclination

		_textInclineBackArm = localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_BACK_ARM"; //Talon: Arm Backward Inclination

		_textExtendArm = localize "STR_EODS_TALON_KEY_CONFIG_EXTEND_ARM"; //Talon: Extend Arm

		_textRetractdArm = localize "STR_EODS_TALON_KEY_CONFIG_RETRACT_ARM"; //Talon: Retract Arm

		_textOpenHand = localize "STR_EODS_TALON_KEY_CONFIG_OPEN_HAND"; //Talon: Open Pincers

		_textCloseHand = localize "STR_EODS_TALON_KEY_CONFIG_CLOSE_HAND"; // Talon: Close Pincers

		_textOBjInteracHand = localize "STR_EODS_PCU_OBJETO_KEY"; //Interact with IEDs and Objects

		
		["EODS Suite", "Talon: Arm Forward Inclination", [localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_FORW_ARM", localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_FORW_ARM"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_PLUS_KEYS}, {}, [DIK_DELETE, [false, false, false]]] call CBA_fnc_addKeybind;

	//	["EODS Suite", _textInclineFwArm, {_this call FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_PLUS_KEYS}, [DIK_DELETE,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Talon: Arm Backward Inclination", [localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_BACK_ARM", localize "STR_EODS_TALON_KEY_CONFIG_INCLINE_BACK_ARM"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_LESS_KEYS}, {}, [DIK_PGDN,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textInclineBackArm, {_this call FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_LESS_KEYS}, [DIK_PGDN,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Talon: Extend Arm", [localize "STR_EODS_TALON_KEY_CONFIG_EXTEND_ARM", localize "STR_EODS_TALON_KEY_CONFIG_EXTEND_ARM"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_PLUS_KEYS}, {}, [DIK_PRIOR,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textExtendArm, {_this call FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_PLUS_KEYS}, [DIK_PRIOR,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Talon: Retract Arm", [localize "STR_EODS_TALON_KEY_CONFIG_RETRACT_ARM", localize "STR_EODS_TALON_KEY_CONFIG_RETRACT_ARM"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_LESS_KEYS}, {}, [DIK_END,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textRetractdArm, {_this call FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_LESS_KEYS}, [DIK_END,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Talon: Open Pincers", [localize "STR_EODS_TALON_KEY_CONFIG_OPEN_HAND", localize "STR_EODS_TALON_KEY_CONFIG_OPEN_HAND"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_ABRIR_MANO_KEYS}, {}, [DIK_HOME,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textOpenHand, {_this call FNC_EODS_TALON_CONTROL_BRAZO_ABRIR_MANO_KEYS}, [DIK_HOME,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Talon: Close Pincers", [localize "STR_EODS_TALON_KEY_CONFIG_CLOSE_HAND", localize "STR_EODS_TALON_KEY_CONFIG_CLOSE_HAND"],{_this call FNC_EODS_TALON_CONTROL_BRAZO_CERRAR_MANO_KEYS}, {}, [DIK_INSERT,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textCloseHand, {_this call FNC_EODS_TALON_CONTROL_BRAZO_CERRAR_MANO_KEYS}, [DIK_INSERT,false,false,false]] call cba_fnc_registerKeybind;
	
		["EODS Suite", "Interact with IEDs and Objects", [localize "STR_EODS_PCU_OBJETO_KEY", localize "STR_EODS_PCU_OBJETO_KEY"],{_this call FNC_EODS_OBJETOS_INTERAC_KEY}, {}, [DIK_MINUS,false,false,false]] call cba_fnc_addKeybind;

	//	["EODS Suite", _textOBjInteracHand, {_this call FNC_EODS_OBJETOS_INTERAC_KEY}, [DIK_MINUS,false,false,false]] call cba_fnc_registerKeybind;

	} else {
		["EODS Suite: Your version of CBA is too old for this version of EODS. Please upgrade CBA."] call cba_fnc_systemChat;
	};
};