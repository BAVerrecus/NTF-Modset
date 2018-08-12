/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_ied","_iedSeleccionado","_cadena","_azar","_tiempo","_titulo"];

_ied = (_this select 3) select 0;

_iedSeleccionado = (_this select 3) select 1;

_azar = floor(random 30);

_tiempo = _azar + 15;

_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {
	
	terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
	uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

	("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	
	sleep 1;
};

EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

[_iedSeleccionado,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

player playActionNow "medicStart";

waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

	if (isNil "_cadena") then {

		_cadena = [_ied,_iedSeleccionado];

		_iedSeleccionado setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];

	} else {	


		if (!(_iedSeleccionado in _cadena)) then {

			_cadena = _cadena + [_iedSeleccionado];

			_iedSeleccionado setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];

		};

	};


	{
		_x setVariable ["EODS_ieds_CADENA_GRUPO", nil, true];

		sleep 0.1;

		_x setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

		_x setVariable ["EODS_ieds_IED_ENCADENADO", true, true];

	} forEach _cadena;

	EODS_PCU_ENCADENANDO = false;

	_titulo = localize "STR_EODS_Titulo_Hint_Generico";

	_mensaje =  "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Encadenar_02" + "</t>";

	if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

		terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
		sleep 1;
	};

	EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;

	player playAction "medicStop";

} else {

	breakOut "main";

};