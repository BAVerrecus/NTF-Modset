/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_jugador","_idEncadenar","_mensaje","_textoEncadenar2","_idAccionEncadenar2","_ied","_iedCercano","_cercaIED","_accionDisponible","_textoEncadenar", "_idAccionEncadenar","_iedSeleccionado","_cadena","_enterrado"];

_jugador = player;

_ied = _this select 0;

_azar = floor(random 10);

_tiempo = _azar + 15;

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

_titulo = localize "STR_EODS_Titulo_Hint_Generico";

_mensaje =  "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Encadenar_01" + "</t>";

if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

	terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
	uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

	("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
	sleep 1;
};

EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;

player playAction "medicStop";

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	EODS_PCU_ENCADENANDO = true;

	_cercaIED = false;

	_accionDisponible = false;

	_textoDejarEncadenar = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Dejar_Encadenar";

	_idAccionDejarEncadenar = _jugador addAction[_textoDejarEncadenar, "EODS_PCU_ENCADENANDO = false;",[], 1, false, true, "", ""];
	
	while {EODS_PCU_ENCADENANDO} do
		
	{
		if (!_cercaIED) then {

			_iedCercano = nearestObjects [_jugador, ["EODS_base_ied_cellphone"], 3];

			if (count _iedCercano > 0) then {

				_iedSeleccionado = _iedCercano select 0;

				_enterrado = _iedSeleccionado getVariable "EODS_Ieds_HIDDEN_ENTERRADO";
					
				if (isNil "_enterrado") then {

					_enterrado = false;
	
				};

				if (_iedSeleccionado != _ied) then {
		
					_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

					if (isNil "_cadena") then {

						_cercaIED = true;

					} else {

						if (_iedSeleccionado in _cadena) then {

							_cercaIED = false;

							} else {

							_cercaIED = true;
						};
					};

				} else {

					_cercaIED = false;

				};

				if (_enterrado) then {

					_cercaIED = false;

				};

			} else {

				_cercaIED = false;

				if (not isNil "_idAccionEncadenar") then {

					_jugador removeAction _idAccionEncadenar;

					_idAccionEncadenar = nil;

					_accionDisponible = false;

				};

			};

		} else {

			if (!_accionDisponible) then {

				_textoEncadenar = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Encadenar_a_Este";

				_idAccionEncadenar = _jugador addAction[_textoEncadenar, "\EODS_ieds\funciones\PCU\EODS_PCU_ENCADENADO.sqf",[_ied,_iedSeleccionado], 1, false, true, "", ""];

				_accionDisponible = true;

			};

		};

		sleep 1;

	};

		if (_accionDisponible) then {

			if (not isNil "_idAccionEncadenar") then {

				_jugador removeAction _idAccionEncadenar;

			};

		};

		_jugador removeAction _idAccionDejarEncadenar;

} else {

	breakOut "main";

};