/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/
//
//
//
//
// DEPRACATED SEE : EODS_ieds/PCU/EODS_PCU_JAMMING_IED!!!!
//
//
//
//
//
private ["_player","_ied","_distance","_calculoJammeoHecho","_probabilidad","_chance","_iedsJammeados","_distanceAlIed","_jammer"];

	EODS_IEDS_ECM_JAMMER_ACTIVE = true;

	_textDeactivateJammer = "Deactivate ECM Backpack";

	_player = player;

	_accion = _this select 2;

	_player removeAction _accion;

	_jammer = unitBackpack _player;

	if (_jammer isKindOf "EODS_ECMBACKPACK") then {_distance = 75; _chance = 1;};

	_idaccionJammer = _player addAction[_textDeactivateJammer, "EODS_IEDS_ECM_JAMMER_ACTIVE = false;",[], 1, false, true, "", ""];

	_iedsJammeados = [];

	_playereJammeados = [];

while {EODS_IEDS_ECM_JAMMER_ACTIVE} do
{

	//_posiblesJugadores = {isPlayer _x} count playableUnits;

	_posiblesJugadores = playableUnits;

	//_posiblesIEDs = nearestObjects [_player, ["EODS_base_ied_cellphone"], _distance];
	_posiblesIEDs player nearObjects ["EODS_base_ied_cellphone", 75];
	//Debug start
	_textvar = _posiblesIEDs;
	_textvar remoteExec ["hint", 0];
	//Debug end
	if (count _posiblesIEDs > 0) then {

		{
			_calculoJammeoHecho = _x getVariable "EODS_Ied_calculo_jammeo_hecho";

			if (isNil "_calculoJammeoHecho") then {

				_calculoJammeoHecho = false;
			};

			if (!_calculoJammeoHecho) then {


					_x setVariable ["EODS_Ied_jammed", true, true];

					_x setVariable ["EODS_Ied_calculo_jammeo_hecho", true, true];

			};

			sleep 0.5;

		} forEach _posiblesIEDs;
	};

	if (count _iedsJammeados > 0) then {

		{
			_distanceAlIed = _player distance _x;

			if (_distanceAlIed >= _distance) then {

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

				_distanceAlJugador = _player distance _x;

				if ((_distanceAlJugador < _distance) && (!_checkRadioJam)) then {

					//_x setVariable ["tf_globalVolume", 0.1, true];

					//_x setVariable ["tf_voiceVolume", 1, true];

					_x setVariable ["tf_unable_to_use_radio", true, true];

					_x setVariable ["EODS_Ied_Radio_Jam", true, true];

					_playereJammeados = _playereJammeados + [_x];

				};

				if ((_distanceAlJugador >= _distance) && (_checkRadioJam)) then {

					//_x setVariable ["tf_globalVolume", 1, true];

					//_x setVariable ["tf_voiceVolume", 1, true];

					//_x setVariable ["tf_unable_to_use_radio", false, true];

					//_x setVariable ["EODS_Ied_Radio_Jam", false, true];

					_playereJammeados = _playereJammeados - [_x];
				};
			};

		} forEach _posiblesJugadores;

	};
	//Debug

	sleep 0.5;
};

if (count _iedsJammeados > 0) then {

	{
		_iedsJammeados = _iedsJammeados - [_x];

		_x setVariable ["EODS_Ied_jammed", false, true];

		_x setVariable ["EODS_Ied_calculo_jammeo_hecho", false, true];

	} forEach _iedsJammeados;
};

if (count _playereJammeados > 0) then {

	{
		//_x setVariable ["tf_globalVolume", 1, true];

		//_x setVariable ["tf_unable_to_use_radio", false, true];

		//_x setVariable ["EODS_Ied_Radio_Jam", false, true];

		_playereJammeados = _playereJammeados - [_x];

	} forEach _playereJammeados;
};

EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE = false;

_player removeAction _idaccionJammer;
