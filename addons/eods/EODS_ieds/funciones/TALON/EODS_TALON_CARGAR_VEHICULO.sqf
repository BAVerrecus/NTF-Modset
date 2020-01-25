/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_talon","_transporte"];

_talon = (_this select 3) select 0;

_transporte = (_this select 3) select 1;

deleteVehicle _talon;

[[_talon], "FNC_EODS_TALON_REMOVE_ACTION_TRANSPORTE", true, false] spawn BIS_fnc_MP;

[[_transporte], "FNC_EODS_TALON_ADD_VEHICULO_DESCARGAR_TRANSPORTE", true, false] spawn BIS_fnc_MP;