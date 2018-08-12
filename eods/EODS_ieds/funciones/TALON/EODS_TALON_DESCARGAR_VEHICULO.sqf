/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_talon","_transporte","_pos","_dist","_offdir","_compassDir","_newX","_newY","_newPos"];

_transporte = _this select 0;

[[_transporte], "FNC_EODS_TALON_REMOVE_ACTION_DESCARGAR_TRANSPORTE", true, false] spawn BIS_fnc_MP;

//-------------------------------------------------------------------------------------------

_bbr = boundingBoxReal _transporte;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxLength = abs ((_p2 select 1) - (_p1 select 1));

_pos = getPos _transporte;  // position of reference.
_dist = _maxLength; //Distance from position of reference.
_offdir = 180; //Relative direction from position of reference 0 - 360. (0 = forward, 180 = backwards).

//Find compass direction to spawn from position of reference.
_compassDir = ((getDir _transporte)+_offdir) mod 360;

//Find absolute coordinates by adding relative to position of reference.
_newX = (_pos select 0) + (sin _compassDir * _dist);
_newY = (_pos select 1) + (cos _compassDir * _dist);
_newPos = [_newX, _newY, 0];  // position found

_talon = createVehicle ["TALON_MARKII", _newPos, [], 0, "CAN_COLLIDE"];

_talon setDir (getDir _transporte);

//-------------------------------------------------------------------------------------------

createVehicleCrew _talon;