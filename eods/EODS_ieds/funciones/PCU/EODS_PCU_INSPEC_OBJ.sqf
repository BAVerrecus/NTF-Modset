/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_objeto","_azar","_tiempo","_titulo","_mensaje"];

_objeto = _this select 0;

_azar = floor(random 15);

_tiempo = _azar + 10;

_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {
	
	terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
	uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

	("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	
	sleep 1;
};

EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

[_objeto,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

player playActionNow "medicStart";

waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	_contieneIed = _objeto getVariable "EODS_Ieds_HIDDEN_ESCONDIDO";

	if (isNil "_contieneIed") then {

		_contieneIed = false;
	};
	
	_titulo = localize "STR_EODS_Titulo_Hint_Generico";

	if (_contieneIed) then {

		_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_PCU_CONTIENE_IED" + "</t>";

		//[[_objeto], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

		[[_objeto], "FNC_EODS_PCU_ADD_ACCION_REVELAR", true, false] spawn BIS_fnc_MP;

	} else {

		_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_PCU_OBJETO_NORMAL" + "</t>";	

	};

	if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

		terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;
	
		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
		sleep 1;
	};

	EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;

	player playAction "medicStop";

} else {

	//[[_objeto], "FNC_EODS_PCU_ADD_ACTION_OBJ_INSPEC", true, false] spawn BIS_fnc_MP;

	breakOut "main";
};