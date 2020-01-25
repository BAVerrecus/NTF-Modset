/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

sleep 10;

if (isServer) then {

	call compile preprocessFileLineNumbers "\EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_FNC.sqf";

	private ["_module","_syncro","_ied"];

	_module = _this select 0;

	_syncro = synchronizedObjects _module;

	if (count _syncro > 0) then {

		{			
			[_x] spawn FNC_EODS_HIDDEN_OCULTAR;

			sleep 1;

		} forEach _syncro;

	};
};