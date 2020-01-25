/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_jugador","_objeto","_azar","_tiempo","_titulo","_bbr","_p1","_p2","_maxLength","_pos","_dist","_offdir","_compassDir","_newX","_newY","_newPos"];

_jugador = _this select 0;

_objeto = (_this select 3) select 0;

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

[_objeto,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

_jugador playActionNow "medicStart";

waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	_ied = _objeto getVariable "EODS_Ieds_HIDDEN_ESCONDIDO_IED";	

	detach _ied;

	_jugador playAction "medicStop";

//-------------------------------------------------------------------------------------------

_bbr = boundingBoxReal _objeto;
_p1 = _bbr select 0;
_p2 = _bbr select 1;
_maxLength = abs ((_p2 select 1) - (_p1 select 1));

_pos = getPos _objeto;  // position of reference.
_dist = _maxLength; //Distance from position of reference.
_offdir = 0; //Relative direction from position of reference 0 - 360. (0 = forward, 180 = backwards).

//Find compass direction to spawn from position of reference.
_compassDir = ((getDir _objeto)+_offdir) mod 360;

//Find absolute coordinates by adding relative to position of reference.
_newX = (_pos select 0) + (sin _compassDir * _dist);
_newY = (_pos select 1) + (cos _compassDir * _dist);
_newPos = [_newX, _newY, 0];  // position found

_ied setPos _newPos;

//-------------------------------------------------------------------------------------------

	[[_ied,false], "FNC_EODS_HIDE", true, false] spawn BIS_fnc_MP;

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", false, true];

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_OBJETO", objNull, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", false, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_IED", objNull, true];

	[[_objeto], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

	//[[_objeto], "FNC_EODS_PCU_ADD_ACTION_OBJ_INSPEC", true, false] spawn BIS_fnc_MP;

	//[[_ied], "FNC_EODS_PCU_CHECK_ACTION_POST_CREADO", true, false] spawn BIS_fnc_MP;

} else {

	[[_objeto], "FNC_EODS_PCU_ADD_ACCION_REVELAR", true, false] spawn BIS_fnc_MP;

	breakOut "main";
};