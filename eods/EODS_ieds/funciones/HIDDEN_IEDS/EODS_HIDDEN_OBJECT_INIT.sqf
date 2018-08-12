/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

#include "\EODS_ieds\funciones\PCU\EODS_VARS.sqf"

scopeName "main";

sleep 10;

if (isServer) then {

	private ["_module","_syncro","_objeto","_ied"];

	_module = _this select 0;

	_syncro = synchronizedObjects _module;

	if (count _syncro > 2) then {

		breakOut "main";
	};

	if (count _syncro > 0) then {

		{	
			_type = typeOf _x;

			if (_type in EODS_IEDS_PCU_OBJETOS_ESCONDER) then {

				_objeto = _x;
			};

			if (!(_x isKindOf "Talon_Base")) then {
	
				if ((_x isKindOf "Car") or (_x isKindOf "Tank") or (_x isKindOf "Plane") or (_x isKindOf "Helicopter") or (_x isKindOf "Ship") or (_x isKindOf "ReammoBox_F") or (_x isKindOf "Wreck")) then {

					_objeto = _x;
				};
			};
	
			if (_x isKindOf "EODS_base_ied_cellphone") then {

				_ied = _x;
			};

		} forEach _syncro;
	};

	if (isNil "_objeto") then {

		breakOut "main";
	};

	if (isNil "_ied") then {

		breakOut "main";
	};

	_ied attachTo [_objeto,[0,0,-1]];

	[[_ied,true], "FNC_EODS_HIDE", true, false] spawn BIS_fnc_MP;

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

	_ied setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_OBJETO", _objeto, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO", true, true];

	_objeto setVariable ["EODS_Ieds_HIDDEN_ESCONDIDO_IED", _ied, true];

	[[_ied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;
};