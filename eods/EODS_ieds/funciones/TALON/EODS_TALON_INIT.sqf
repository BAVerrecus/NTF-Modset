/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

//-----------------------------------------------------------------------------------------------------------------
FNC_EODS_TALON_LOOP = {

private ["_talon", "_posibleTransporte", "_transporte", "_accionTrasporteDisponible", "_objetosAgarrables", "_objetosAgarrados","_controladores","_talonPuntoFalso"];

_talon = vehicle (_this select 0);

_posibleTransporte = [];

_accionTrasporteDisponible = false;

_accionAgarrarDisponible = false;

_talonPuntoFalso = "EODS_Fake_01" createVehicle position _talon;

_talonPuntoFalso attachTo [_talon,[0,0.16,-0.07], "attachpoint"];

EODS_IEDS_PCU_OBJETOS_POSIBLES_PARA_RECOGER = EODS_IEDS_PCU_OBJETOS_ESCONDER + ["ThingX","Thing"];

	while {alive _talon} do

	{

	_controladores = UAVControl _talon;

	_posibleTransporte = nearestObjects [_talon, ["Car","Tank","Plane","Helicopter","Ship"], 4];

		{
			if (_x isKindOf "Talon_Base") then {

				_posibleTransporte = _posibleTransporte - [_x];

			};

			sleep 0.001;

		} forEach _posibleTransporte;

		if (count _posibleTransporte > 0) then {

			_transporte = _posibleTransporte select 0;

			if (!_accionTrasporteDisponible) then {

				[[_talon, _transporte], "FNC_EODS_TALON_ADD_ACTION_TRANSPORTE", true, false] spawn BIS_fnc_MP;

				_accionTrasporteDisponible = true;

			};

		} else {

			if (_accionTrasporteDisponible) then {

				[[_talon], "FNC_EODS_TALON_REMOVE_ACTION_TRANSPORTE", true, false] spawn BIS_fnc_MP;

				_accionTrasporteDisponible = false;
			};
		};

		if (count _controladores > 0) then {

			_objetosAgarrables = nearestObjects [_talonPuntoFalso, EODS_IEDS_PCU_OBJETOS_POSIBLES_PARA_RECOGER, 0.3];

			_objetosAgarrados = attachedObjects _talon;

			if (count _objetosAgarrados > 0) then {

				{
					_objetosAgarrables = _objetosAgarrables - [_x];

					if (_x isKindOf "TALON_MARKII_Base") then {

						objetosAgarrables = objetosAgarrables - [_x];
					};

					sleep 0.001;

				} forEach _objetosAgarrados;
			};

			if (count _objetosAgarrables > 0) then {

				if (!_accionAgarrarDisponible) then {

					[[_talon, _objetosAgarrables], "FNC_EODS_TALON_ADD_ACTION_AGARRAR_MANO", true, false] spawn BIS_fnc_MP;

					_accionAgarrarDisponible = true;
				};

			} else {

				if (_accionAgarrarDisponible) then {

					[[_talon], "FNC_EODS_TALON_REMOVE_ACTION_AGARRAR_MANO", true, false] spawn BIS_fnc_MP;

					_accionAgarrarDisponible = false;
				};
			};
		};

		[[_talon], "FNC_EODS_TALON_CAMBIO_CONTROLADORES", true, false] spawn BIS_fnc_MP;

		sleep 1;
	};

deleteVehicle _talonPuntoFalso;

};

if ((!isServer) && (player != player)) then
{
  waitUntil {player == player};
};

if (!isServer) then {waitUntil {!isNull player};};

sleep 5;

private ["_talon"];

if (IsServer) then {

	_talon = _this select 0;

	if (isEngineOn _talon) then {_talon engineOn false};

	[_talon] spawn FNC_EODS_TALON_LOOP;

	[[_talon], "FNC_EODS_TALON_DESHABILITAR_IA", true, false] spawn BIS_fnc_MP;

	[[_talon], "FNC_EODS_TALON_CONTROL_BRAZO_INIT", true, true] spawn BIS_fnc_MP;
};
