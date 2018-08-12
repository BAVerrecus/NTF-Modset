/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_jugador","_numeroAsignado","_azar","_tiempo","_n1","_n2","_n3","_n4","_n5","_n6","_n7","_n8","_n9","_n10","_numeroCelular","_ied","_textoEstructurado","_idaccionDetonar","_idAccionRecoger","_idAccionMover","_idAccionArmar","_classname","_mensaje","_titulo"];

	_jugador = player;

	_ied = _this select 0;

	_classname = typeOf _ied;	

	if (_ied isKindOf "EODS_base_ied_cellphone") then {

		_azar = floor(random 25);

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

			_numeroAsignado = _ied getVariable "EODS_Ieds_NUMERO_CELULAR";

			if (isNil "_numeroAsignado") then {	

				_n1 = str (floor(random 9));

				_n2 = str (floor(random 9));

				_n3 = str (floor(random 9));

				_n4 = str (floor(random 9));

				_n5 = str (floor(random 9));

				_n6 = str (floor(random 9));

				_n7 = str (floor(random 9));
	
				_n8 = str (floor(random 9));

				_n9 = str (floor(random 9));

				_n10 = str (floor(random 9));

				_numeroCelular = _n1 + _n2 + _n3 + _n4 + _n5 + _n6 + _n7 + _n8 + _n9 + _n10;

			} else {

				_numeroCelular = _numeroAsignado;

			};

			_ied setVariable ["EODS_Ieds_STATUS_ARMADO", true, true];
			
			_ied animate ["Detonator_hide", 1];
			_ied animate ["Battery_hide", 1];

			_ied setVariable ["EODS_Ieds_NUMERO_CELULAR", _numeroCelular, true];

			_titulo = localize "STR_EODS_Titulo_Hint_Generico";

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_ieds_Celular_Numero_Display" + "<br/><br/>" + _numeroCelular + "</t>";

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
				sleep 1;
			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),60,false] spawn FNC_EODS_DISPLAY_HINT;

			player playAction "medicStop";

		} else {

			breakOut "main";
		};
	};