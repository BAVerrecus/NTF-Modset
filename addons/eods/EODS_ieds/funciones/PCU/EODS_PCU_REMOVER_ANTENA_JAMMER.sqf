/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_jugador","_mochila","_encontroCadena","_mochilaV2","_buscarMochila","_azar","_tiempo","_titulo","_mochilaFake","_pos","_dist","_offdir","_compassDir","_newX","_newY","_newPos"];

_jugador = _this select 0;

if (count EODS_id_acciones_guardadas > 0) then {

	{
		_jugador removeAction _x;
	
	} forEach EODS_id_acciones_guardadas;

	EODS_id_acciones_guardadas = [];
};

_azar = floor(random 5);

_tiempo = _azar + 10;

_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {
	
	terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
	uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

	("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	
	sleep 1;
};

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

player playActionNow "medicStart";

_mochila = unitBackpack _jugador;

_buscarMochila = typeOf _mochila;

removeBackpackGlobal _jugador;

//-------------------------------------------------------------------------------------------

_pos = getPos _jugador;  // position of reference.
_dist = 1; //Distance from position of reference.
_offdir = 0; //Relative direction from position of reference 0 - 360. (0 = forward, 180 = backwards).

//Find compass direction to spawn from position of reference.
_compassDir = ((getDir _jugador)+_offdir) mod 360;

//Find absolute coordinates by adding relative to position of reference.
_newX = (_pos select 0) + (sin _compassDir * _dist);
_newY = (_pos select 1) + (cos _compassDir * _dist);
_newPos = [_newX, _newY, 0];  // position found

_mochilaFake = createVehicle ["GroundWeaponHolder", _newPos, [], 0, "CAN_COLLIDE"];

_mochilaFake setDir (getDir _jugador);

//-------------------------------------------------------------------------------------------

_mochilaFake addBackpackCargoGlobal [_buscarMochila,1];

sleep 1;

EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

[_mochilaFake,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

	_encontroCadena = false;

	_encontroCadena = [_buscarMochila,"UCP"] call KRON_StrInStr;

	if (_encontroCadena) then {

		switch (_buscarMochila) do {

	   		_mochilaV2 = "EODS_THORIII_UCP";
		};

	} else {

		switch (_buscarMochila) do {

	   		_mochilaV2 = "EODS_THORIII_OCP";
		};
	};
	
	deleteVehicle _mochilaFake;

	_jugador addBackpackGlobal _mochilaV2;

	if ((_buscarMochila == "EODS_THORIII_LOW_UCP") or (_buscarMochila == "EODS_THORIII_LOW_OCP")) then {_jugador addItem "EODS_Inv_LowBandAntenna";};

	if ((_buscarMochila == "EODS_THORIII_MID_UCP") or (_buscarMochila == "EODS_THORIII_MID_OCP")) then {_jugador addItem "EODS_Inv_MidBandAntenna";};

	if ((_buscarMochila == "EODS_THORIII_HIGH_UCP") or (_buscarMochila == "EODS_THORIII_HIGH_OCP")) then {_jugador addItem "EODS_Inv_HighBandAntenna";};

	player playAction "medicStop";

} else {

	deleteVehicle _mochilaFake;

	_jugador addBackpackGlobal _buscarMochila;

	breakOut "main";
};