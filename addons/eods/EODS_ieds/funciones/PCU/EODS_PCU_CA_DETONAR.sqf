/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_ied"];

	_jugador = _this select 0;

	_ied = (_this select 3) select 0;

	[_ied] spawn FNC_EODS_EXPLOSION;