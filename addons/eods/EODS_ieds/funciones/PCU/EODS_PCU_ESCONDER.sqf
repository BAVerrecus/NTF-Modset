/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_ied","_objeto","_azar","_tiempo","_titulo"];

_ied = _this select 0;

_objeto = _this select 1;

_azar = floor(random 10);

_tiempo = _azar + 10;

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

	_ied attachTo [_objeto,[0,0,-1]];

	[[_ied,true], "FNC_EODS_HIDE", true, false] spawn BIS_fnc_MP;

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_OBJETO", _objeto, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_IED", _ied, true];

	//[[_ied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

	//[[_ied,_nuevaTierra], "FNC_EODS_PCU_ADD_ACCION_DESENTERRAR", true, false] spawn BIS_fnc_MP;

	player playAction "medicStop";

} else {

	breakOut "main";
};