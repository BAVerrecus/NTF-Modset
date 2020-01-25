/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_carga","_talon","_idaccion","_model","_blast","_pos"];

_carga = (_this select 3) select 0;

_talon = _this select 0;

_idaccion = _this select 2;

_talon removeAction _idaccion;

_model = "R_PG32V_F";

_pos = position _carga;

_blast = _model createVehicle _pos;

_blast attachTo [_carga, [0,0,0]];

deleteVehicle _carga;