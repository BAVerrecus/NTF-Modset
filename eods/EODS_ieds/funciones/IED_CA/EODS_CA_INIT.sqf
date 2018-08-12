/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

//VARIABLES GLOBALES

//EODS_Ieds_ia_con_celular
//EODS_Ieds_sincronizados

//FUNCIONES

//FNC_EODS_CA_LOOP_CENTRAL

//-------------------------------------------------------------------------------------------
if (IsServer) then {

	call compile preprocessFileLineNumbers "\EODS_ieds\funciones\IED_CA\EODS_CA_FNC_PRIMARIAS.sqf";

	private ["_module","_syncro","_syncro2"];

	_module = _this select 0;

	_syncro = synchronizedObjects _module;

	if (count _syncro > 0) then {

		EODS_Ieds_ia_con_celular = [];

		EODS_Ieds_sincronizados = [];

		{

			if ((_x isKindOf "Man") && (!isPlayer _x)) then {

				_x addItem "EODS_cellphone_02";

				_x allowFleeing 0;

				EODS_Ieds_ia_con_celular = EODS_Ieds_ia_con_celular + [_x];

			};

			if (_x isKindOf "EODS_base_ied_cellphone") then {

				EODS_Ieds_sincronizados = EODS_Ieds_sincronizados + [_x];

				[_x] spawn FNC_EODS_CA_LOOP_CENTRAL;

				_x setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];
			};

		sleep 0.1;

		} forEach _syncro;

		publicVariable "EODS_Ieds_ia_con_celular";
		publicVariable "EODS_Ieds_sincronizados";
	};
};