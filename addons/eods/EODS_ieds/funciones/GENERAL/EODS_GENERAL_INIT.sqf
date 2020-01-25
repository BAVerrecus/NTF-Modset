/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

if (!isServer) then {waitUntil {!isNull player};};

call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\EODS_GENERAL_FUCTIONS.sqf";
call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\EODS_GENERAL_FUCTIONS_CLIENTSIDE.sqf";


sleep 5;

private ["_ied"];

_ied = _this select 0;

[_ied] spawn EODS_ANADIR_EVENT_HANDLER;

//[_ied] spawn FNC_EODS_PCU_CHECK_ACTION_POST_CREADO;
