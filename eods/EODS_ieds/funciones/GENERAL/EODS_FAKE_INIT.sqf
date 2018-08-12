/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

if (!isServer) then {waitUntil {!isNull player};};

private ["_fake"];

_fake = _this select 0;

_fake hideObject true; 