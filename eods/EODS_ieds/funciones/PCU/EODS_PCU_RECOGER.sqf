/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_jugador","_ied","_tipoied","_puedeUniforme","_puedeChaleco","_puedeMochila"];

	_jugador = player;

	_ied = _this select 0;

	_tipoied = "";

	sleep 0.25;

	switch (typeOf _ied) do {

   		case "EODS_ied01": {_tipoied = "EODS_inventario_ied_01";};

   		case "EODS_ied02": {_tipoied = "EODS_inventario_ied_02";};

   		case "EODS_ied03": {_tipoied = "EODS_inventario_ied_03";};

   		case "EODS_ied04": {_tipoied = "EODS_inventario_ied_04";};

   		case "EODS_ied05": {_tipoied = "EODS_inventario_ied_05";};

   		case "EODS_ied06": {_tipoied = "EODS_inventario_ied_06";};

   		case "EODS_ied07": {_tipoied = "EODS_inventario_ied_07";};
		
		case "EODS_Uxo_1": {_tipoied = "EODS_Uxo_01_Inv";};

    		default {hint "NO ES UN IED";};
	};

	_puedeUniforme = _jugador canAddItemToUniform _tipoied;

	_puedeChaleco = _jugador canAddItemToVest _tipoied;

	_puedeMochila = _jugador canAddItemToBackpack _tipoied;

	if ((_puedeUniforme) or (_puedeChaleco) or (_puedeMochila)) then {

		_jugador additem _tipoied;

		deleteVehicle _ied;
	};