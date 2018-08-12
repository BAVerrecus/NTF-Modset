/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_jugador","_ied","_distancia","_calculoJammeoHecho","_probabilidad","_posibilidades","_iedsJammeados","_distanciaAlIed","_jammer"];

	EODS_IEDS_PCU_JAMMER_ACTIVO = true;

	_textoEstructuradoJammer = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_desactivar_THOR_III";

	_jugador = player;

	_accion = _this select 2;

	_jugador removeAction _accion;

	_jammer = unitBackpack _jugador;

	if (_jammer isKindOf "EODS_THORIII_SIN_ANTENA_BASE") then {_distancia = 0; _posibilidades = -1;};

	if (_jammer isKindOf "EODS_THORIII_LOW_BASE") then {_distancia = 800; _posibilidades = 1;};

	if (_jammer isKindOf "EODS_THORIII_MID_BASE") then {_distancia = 600; _posibilidades = 3;};

	if (_jammer isKindOf "EODS_THORIII_HIGH_BASE") then {_distancia = 200; _posibilidades = 5;};

	_idaccionJammer = _jugador addAction[_textoEstructuradoJammer, "EODS_IEDS_PCU_JAMMER_ACTIVO = false;",[], 1, false, true, "", ""];

	_iedsJammeados = [];

	_jugadoreJammeados = [];

while {EODS_IEDS_PCU_JAMMER_ACTIVO} do {

	//_posiblesJugadores = {isPlayer _x} count playableUnits;

	_posiblesJugadores = playableUnits;

	//_posiblesIEDs = nearestObjects [_jugador, ["EODS_base_ied_cellphone"], _distancia];
	_posiblesIEDs = _jugador nearObjects ["EODS_base_ied_cellphone", _distancia];
	//Debug start
	_textvar = str _posiblesIEDs;
	_textvar remoteExec ["hint", 0];
	//Debug end
	if (count _posiblesIEDs > 0) then {

		{
			_calculoJammeoHecho = _x getVariable "EODS_Ied_calculo_jammeo_hecho";

			if (isNil "_calculoJammeoHecho") then {

				_calculoJammeoHecho = false;
			};

			if (!_calculoJammeoHecho) then {

				_probabilidad = floor(random 9);

				if (_probabilidad <= _posibilidades) then {

					_iedsJammeados = _iedsJammeados + [_x];

					_x setVariable ["EODS_Ied_jammed", true, true];

					_x setVariable ["EODS_Ied_calculo_jammeo_hecho", true, true];

				} else {

					_x setVariable ["EODS_Ied_calculo_jammeo_hecho", true, true];
				};
			};

			sleep 0.5;

		} forEach _posiblesIEDs;
	};

	if (count _iedsJammeados > 0) then {

		{
			_distanciaAlIed = _jugador distance _x;

			if (_distanciaAlIed >= _distancia) then {

				_iedsJammeados = _iedsJammeados - [_x];

				_x setVariable ["EODS_Ied_jammed", false, true];

				_x setVariable ["EODS_Ied_calculo_jammeo_hecho", false, true];

				sleep 0.1;
			};

		} forEach _iedsJammeados;
	};

	if (count _posiblesJugadores > 0) then {

		{
			if (isPlayer _x) then {

				_checkRadioJam = _x getVariable "EODS_Ied_Radio_Jam";

				if (isNil "_checkRadioJam") then {

					_checkRadioJam = false;
				};

				_distanciaAlJugador = _jugador distance _x;

				if ((_distanciaAlJugador < _distancia) && (!_checkRadioJam)) then {

					//_x setVariable ["tf_globalVolume", 0.1, true];

					//_x setVariable ["tf_voiceVolume", 1, true];

					//_x setVariable ["tf_unable_to_use_radio", true, true];

					//_x setVariable ["EODS_Ied_Radio_Jam", true, true];

					_jugadoreJammeados = _jugadoreJammeados + [_x];

				};

				if ((_distanciaAlJugador >= _distancia) && (_checkRadioJam)) then {

					//_x setVariable ["tf_globalVolume", 1, true];

					//_x setVariable ["tf_voiceVolume", 1, true];

					//_x setVariable ["tf_unable_to_use_radio", false, true];

					//_x setVariable ["EODS_Ied_Radio_Jam", false, true];

					_jugadoreJammeados = _jugadoreJammeados - [_x];
				};
			};

		} forEach _posiblesJugadores;

	};

	sleep 0.5;
};

if (count _iedsJammeados > 0) then {

	{
		_iedsJammeados = _iedsJammeados - [_x];

		_x setVariable ["EODS_Ied_jammed", false, true];

		_x setVariable ["EODS_Ied_calculo_jammeo_hecho", false, true];

	} forEach _iedsJammeados;
};

if (count _jugadoreJammeados > 0) then {

	{
		//_x setVariable ["tf_globalVolume", 1, true];

		//_x setVariable ["tf_unable_to_use_radio", false, true];

		//_x setVariable ["EODS_Ied_Radio_Jam", false, true];

		_jugadoreJammeados = _jugadoreJammeados - [_x];

	} forEach _jugadoreJammeados;
};

EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA = false;

_jugador removeAction _idaccionJammer;
