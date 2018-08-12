/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

//VARIABLES GLOBALES

//EODS_Ieds_ia_con_celular
//EODS_Ieds_sincronizados

//FUNCIONES

//FNC_EODS_CA_LOOP_CENTRAL
/*
FNC_EODS_CA_LOOP_CENTRAL = {

scopeName "main";

private ["_ied","_puedeserdetonado","_objetivovalido","_hayobservador","_sujetoactivador","_posiblesTriggerMan","_posiblesaliados","_bando1","_bando2","_observador","_hayobservador","_objetoscercanos","_objetomascercano","_enemigo","_tiempoEspera"];
"IED Loop started" remoteExec ["hint", 0];
_ied = _this select 0;

_puedeserdetonado = false;

_objetivovalido = false;

_hayobservador = false;

_sujetoactivador = objNull;

	while {alive _ied} do

	{

		_posiblesTriggerMan = nearestObjects [position _ied, ["Man"], 1000];

		if (count _posiblesTriggerMan > 0) then {

			{

				if ((_x in EODS_Ieds_ia_con_celular) && (alive _x)) exitWith {

					_sujetoactivador = _x;
"STAGE 1" remoteExec ["hint", 0];
					_puedeserdetonado = true;
				};

				sleep 0.1;

			} forEach _posiblesTriggerMan;

		};

		if (_puedeserdetonado) then {

			_posiblesaliados = nearestObjects [position _ied, ["Man"], 500];

			if (count _posiblesaliados > 0) then {

				{

					_bando1 = (side _sujetoactivador);

					_bando2 = (side _x);

					if ((_bando1 == _bando2) && (_x != _sujetoactivador) && (!isPlayer _x) && (alive _x)) exitWith {
"STAGE 2" remoteExec ["hint", 0];
						_observador = _x;

						_hayobservador = true;

					};

					sleep 0.1;

				} forEach _posiblesaliados;

			};

			_objetoscercanos = nearestObjects [position _ied, ["Man","Car","Tank","LandVehicle"], 25];

			if (count _objetoscercanos > 0) then {
"STAGE 3" remoteExec ["hint", 0];
				_objetomascercano = _objetoscercanos select 0;

				_enemigo = (side _sujetoactivador) getFriend (side _objetomascercano);

				if (_enemigo < 0.6) then {

					_objetivovalido = true;

				};

				if (_hayobservador) then {

					if ((_objetivovalido) && (_sujetoactivador knowsAbout _objetomascercano == 0) && (_observador knowsAbout _objetomascercano > 0)) then {

						_sujetoactivador reveal [_objetomascercano, 4];

					};

				};

				_iedJammed = _ied getVariable "EODS_Ied_jammed";

				if (isNil "_iedJammed") then {

					_iedJammed = false;
				};

				if ((!_iedJammed) && (_objetivovalido) && (_sujetoactivador knowsAbout _objetomascercano > 0)) then {

					if (alive _sujetoactivador) exitWith {

						if (_ied isKindOf "EODS_base_ied_cellphone") then {

							EODS_PCU_Reproducir_Efectos_Celular = true;

						};

						[[_ied], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;

						breakOut "main";
					};

				};

			};

			_puedeserdetonado = false;

		};

		_tiempoEspera = floor(random 5);

		sleep _tiempoEspera;
	};

};
*/
//Crude workaround
FNC_EODS_CA_LOOP_CENTRAL = {



_ied = _this select 0;
_bomber = _this select 1;

//Adding small patrol movement to triggerman.
[_bomber, getPos _bomber, 25, 5, "MOVE", "CARELESS", "GREEN", "LIMITED", "COLUMN", "", [5,10,15]] call CBA_fnc_taskPatrol;

_pfhHandler = [{
  _ied = _this select 0 select 0;
  _bomber = _this select 0 select 1;

 //Check for THORIII Jamming
 _iedJammed = _ied getVariable "EODS_Ied_jammed";

 if (isNil "_iedJammed") then {

   _iedJammed = false;
 };
  //RCIED Phone check (ring ring of death)
  if (_ied isKindOf "EODS_base_ied_cellphone") then {

    EODS_PCU_Reproducir_Efectos_Celular = true;

  };

    //Checks for x statements before blowing up
   if ({_x distance _ied < 25} count allPlayers > 0 && (alive _bomber) && (!captive _bomber) && (!_iedJammed)) then {

          [[_ied], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;
          [_pfhHandler] call CBA_fnc_removePerFrameHandler;
      };
    //Add check for dead bomberman remove eh
    if ((!alive _bomber) ) then {
        [_pfhHandler] call CBA_fnc_removePerFrameHandler;
    };
    //Check if cellphone has been removed
    if (!("EODS_cellphone_02" in (items _bomber + assignedItems _bomber))) then {
      [_pfhHandler] call CBA_fnc_removePerFrameHandler;
    };
  } , 0.2, [_ied,_bomber]] call CBA_fnc_addPerFrameHandler;
};
