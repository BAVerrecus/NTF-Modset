/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_ied","_tierraCircundante","_azar","_tiempo","_titulo","_tipoDeTierra","_nuevaTierra","_posicion","_dir"];

_ied = _this select 0;

_azar = floor(random 60);

_tiempo = _azar + 25;

_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {
	
	terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
	uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

	("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	
	sleep 1;
};

EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

[_ied,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

player playActionNow "medicStart";

waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	switch (typeOf _ied) do {

   		case "EODS_ied01": {_tipoDeTierra = "EODS_tierra01_ied01";};

   		case "EODS_ied02": {_tipoDeTierra = "EODS_tierra01_ied02";};

   		case "EODS_ied03": {_tipoDeTierra = "EODS_tierra01_ied03";};

   		case "EODS_ied04": {_tipoDeTierra = "EODS_tierra01_ied04";};

   		case "EODS_ied05": {_tipoDeTierra = "EODS_tierra01_ied02";};

   		case "EODS_ied06": {_tipoDeTierra = "EODS_tierra01_ied03";};

   		case "EODS_ied07": {_tipoDeTierra = "EODS_tierra01_ied04";};
	};

	_tierraCircundante = _ied getVariable "EODS_Ieds_PCU_TIERRA_POST_ENTERRAR";

	if (!(isNil "_tierraCircundante")) then {

		detach _ied;

		deleteVehicle _tierraCircundante;

	};

	_posicion = position _ied;

	_nuevaTierra = createVehicle [_tipoDeTierra, _posicion, [], 0, "CAN_COLLIDE"];

	_nuevaTierra disableCollisionWith _ied;

	_dir = getDir _ied;

	_nuevaTierra setDir _dir;

	_nuevaTierra setPos (_posicion);

	_ied attachTo [_nuevaTierra,[0,0,-1]];

	_ied setVariable ["EODS_Ieds_HIDDEN_ENTERRADO", true, true];

	_ied setVariable ["EODS_Ieds_HIDDEN_TIERRA", _nuevaTierra, true];

	_nuevaTierra setVariable ["EODS_Ieds_HIDDEN_TIERRA_IED", _ied, true];

	//[[_ied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

	//[[_ied,_nuevaTierra], "FNC_EODS_PCU_ADD_ACCION_DESENTERRAR", true, false] spawn BIS_fnc_MP;

	player playAction "medicStop";

} else {

	breakOut "main";
};