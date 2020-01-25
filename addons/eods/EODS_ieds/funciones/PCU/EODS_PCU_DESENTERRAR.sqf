/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_ied","_azar","_tiempo","_titulo","_id","_tipoDeTierra","_tierra","_nuevaTierra","_posicion","_dir"];

_tierra = _this select 0;

_ied = _tierra getVariable "EODS_Ieds_HIDDEN_TIERRA_IED";

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

	//_id = _this select 2;

	_tipoied = "";

	switch (typeOf _ied) do {

   		case "EODS_ied01": {_tipoDeTierra = "EODS_tierra02_ied01";};

   		case "EODS_ied02": {_tipoDeTierra = "EODS_tierra02_ied02";};

   		case "EODS_ied03": {_tipoDeTierra = "EODS_tierra02_ied03";};

   		case "EODS_ied04": {_tipoDeTierra = "EODS_tierra02_ied04";};

   		case "EODS_ied05": {_tipoDeTierra = "EODS_tierra02_ied02";};

   		case "EODS_ied06": {_tipoDeTierra = "EODS_tierra02_ied03";};

   		case "EODS_ied07": {_tipoDeTierra = "EODS_tierra02_ied04";};
	};

	//_tierra = _ied getVariable "EODS_Ieds_HIDDEN_TIERRA";

	_posicion = getPos _tierra;

	_dir = getDir _tierra;

	detach _ied;

	//[[_tierra, _id], "FNC_EODS_PCU_ELIMINAR_ACCION", true, false] spawn BIS_fnc_MP;

	deleteVehicle _tierra;

	_nuevaTierra = createVehicle [_tipoDeTierra, _posicion, [], 0, "CAN_COLLIDE"];

	_nuevaTierra disableCollisionWith _ied;

	_nuevaTierra setDir _dir;

	_nuevaTierra setPos (_posicion);

	_ied setDir _dir;

	_ied setPos (_posicion);

	_ied attachTo [_nuevaTierra,[0,0,-0.001]];

	_ied setVariable ["EODS_Ieds_HIDDEN_ENTERRADO", false, true];

	_ied setVariable ["EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE", true, true];

	_ied setVariable ["EODS_Ieds_HIDDEN_TIERRA", nil, true];

	_ied setVariable ["EODS_Ieds_PCU_TIERRA_POST_ENTERRAR", _nuevaTierra, true];

	_ied setVariable ["EODS_Ieds_PCU_AccionDesenterrar_Activa", false, true];

	//[[_ied], "FNC_EODS_PCU_CHECK_ACTION_POST_CREADO", true, false] spawn BIS_fnc_MP;

	player playAction "medicStop";

} else {

	breakOut "main";
};