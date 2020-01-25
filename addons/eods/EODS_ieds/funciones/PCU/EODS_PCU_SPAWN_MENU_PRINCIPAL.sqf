/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_ied","_operador"];

	createDialog "EODS_IEDS_MENU_PRINCIPAL";

	_ied = (_this select 3) select 0;

	_operador = _this select 1;

	[_ied,_operador] spawn FNC_EODS_PCU_MENU_PRINCIPAL_CHECK;