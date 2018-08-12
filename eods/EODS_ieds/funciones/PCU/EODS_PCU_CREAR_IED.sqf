/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_jugador","_ied","_posicion","_tipoied","_nuevoied","_idaccion","_textoEstructurado","_idaccion"];

	_jugador = _this select 0;

	_ied = (_this select 3) select 1;

	_posicion = position _jugador;

	_tipoied = "EODS_ied01";

	sleep 0.25;

	switch (_ied) do {

   		case "EODS_inventario_ied_01": {_tipoied = "EODS_ied01";};

   		case "EODS_inventario_ied_02": {_tipoied = "EODS_ied02";};

   		case "EODS_inventario_ied_03": {_tipoied = "EODS_ied03";};

   		case "EODS_inventario_ied_04": {_tipoied = "EODS_ied04";};

   		case "EODS_inventario_ied_05": {_tipoied = "EODS_ied05";};

   		case "EODS_inventario_ied_06": {_tipoied = "EODS_ied06";};

   		case "EODS_inventario_ied_07": {_tipoied = "EODS_ied07";};
		
		case "EODS_Uxo_01_Inv": {_tipoied = "EODS_Uxo_1";};

    		default {hint "NO ES UN IED"; _tipoied = "EODS_ied01";};
	};

	EODS_accion_mover_ied_terminada = false;

	_nuevoied = createVehicle [_tipoied, _posicion, [], 0, 'NONE'];

	_jugador unassignItem _ied;

	_jugador removeItem _ied;

	_nuevoied attachTo [_jugador,[0,0.7,0.3]]; 

	_nuevoied setVectorDirAndUp [[1,0,0],[0,1,2]];

	_jugador playMove "AcinPknlMstpSrasWrflDnon";

	if (count EODS_id_acciones_guardadas > 0) then {

		{
			_jugador removeAction _x;
	
		} forEach EODS_id_acciones_guardadas;

		EODS_id_acciones_guardadas = [];
	};

	_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Soltar";

	_idaccion = _jugador addAction[_textoEstructurado, "EODS_accion_mover_ied_terminada = true;"];

	//[[_nuevoied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

	waitUntil {EODS_accion_mover_ied_terminada};

	_jugador removeAction _idaccion;

	detach _nuevoied;

	_nuevoied setVectorDirAndUp [[0,0,0],[0,0,0]];

	_nuevoied setVelocity [0, 0.1, 0];

	_jugador playMove "AidlPknlMstpSrasWrflDnon_AI";