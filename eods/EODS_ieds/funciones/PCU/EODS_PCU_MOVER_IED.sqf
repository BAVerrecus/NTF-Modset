/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_jugador","_ied","_textoEstructurado","_idaccion","_desenterradoReciente"];

	_ied = _this select 0;

	_jugador = vehicle (_this select 1);

	_desenterradoReciente = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";
	
	if (isNil "_desenterradoReciente") then {

		_desenterradoReciente = false;

	};

	if (_desenterradoReciente) then {

		detach _ied;	

	};	

	_ied attachTo [_jugador,[0,0.7,0.3]]; 

	_ied setVectorDirAndUp [[1,0,0],[0,1,2]];

	_jugador playMove "AcinPknlMstpSrasWrflDnon";

	if (count EODS_id_acciones_guardadas > 0) then {

		{
			_jugador removeAction _x;
	
		} forEach EODS_id_acciones_guardadas;

		EODS_id_acciones_guardadas = [];
	};

	_ied setVariable ["EODS_Ieds_PCU_moviendoIED", true, true];

	EODS_accion_mover_ied_terminada = false;

	_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Soltar";

	_idaccion = _jugador addAction[_textoEstructurado, "EODS_accion_mover_ied_terminada = true;"];

	waitUntil {EODS_accion_mover_ied_terminada};

	_jugador removeAction _idaccion;

	detach _ied;

	_ied setVectorDirAndUp [[0,0,0],[0,0,0]];

	_ied setVelocity [0, 0.1, 0];

	_jugador playMove "AidlPknlMstpSrasWrflDnon_AI";

	_ied setVariable ["EODS_Ieds_PCU_moviendoIED", false, true];