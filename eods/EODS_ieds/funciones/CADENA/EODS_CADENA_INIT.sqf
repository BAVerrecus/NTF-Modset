/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

sleep 10;

if (isServer) then {

	private ["_module","_syncro","_cadena"];

	_module = _this select 0;

	_syncro = synchronizedObjects _module;

	_cadena = [];

	if (count _syncro > 0) then {

		{
			_cadena = _cadena + [_x];

			sleep 0.1;

		} forEach _syncro;

		{
			_x setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

			_x setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];

			sleep 0.1;

		} forEach _cadena;	

	};
};