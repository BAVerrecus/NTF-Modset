/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_talon","_tipodecarga","_carga","_tipodecarga","_talonMagazinesAmmo","_talonMagazine","_talonMagazineCantidad","_resultadoBusqueda"];

_talon = vehicle (_this select 0);

_tipodecarga = _this select 1;

_talonTipoMagazine = _this select 2;

_carga = _tipodecarga createVehicle position _talon;

	switch (_tipodecarga) do {

		case "DemoCharge_Remote_Ammo": { 

			_carga attachTo [_talon,[0,0.16,-0.07], "attachpoint"];

			_carga setVectorDirAndUp [[1,0,0],[0,1,2]];

			_talon animate ["OpenLeftP_Hand", 0.7];

			_talon animate ["OpenRightP_Hand", 0.7];

		};

		case "SatchelCharge_Remote_Ammo": { 

			_carga attachTo [_talon,[0,0.2,-0.07], "attachpoint"];

			_carga setVectorDirAndUp [[1,0,0],[0,1,2]];

			_talon animate ["OpenLeftP_Hand", 1];

			_talon animate ["OpenRightP_Hand", 1];
		};
	};

EODS_Talon_Accion_Carga_terminada = false;

//------------------------------------------------

_talonMagazinesAmmo = magazinesAmmoCargo _talon;

clearMagazineCargoGlobal _talon;

for "_i" from 0 to (count _talonMagazinesAmmo) - 1 do {

	_talonMagazine = (_talonMagazinesAmmo select _i) select 0;

	_talonMagazineCantidad = (_talonMagazinesAmmo select _i) select 1;

	if (_talonMagazine == _talonTipoMagazine) exitWith {

		_talonMagazinesAmmo = _talonMagazinesAmmo - [_i];

		_talonMagazineCantidad = _talonMagazineCantidad - 1;

		if (_talonMagazineCantidad > 0) then {

			_talon addMagazineCargoGlobal [_talonTipoMagazine, _talonMagazineCantidad];
		};	
	}:

	sleep 0.01;
};

if (count _talonMagazinesAmmo > 0) then {

	for "_i" from 0 to (count _talonMagazinesAmmo) - 1 do {

		_talonMagazine = (_talonMagazinesAmmo select _i) select 0;

		_talonMagazineCantidad = (_talonMagazinesAmmo select _i) select 1;

		if (_talonMagazine != _talonTipoMagazine) then {

			_talon addMagazineCargoGlobal [_talonMagazine, _talonMagazineCantidad];
		};

		sleep 0.01;
	};
};

//------------------------------------------------

_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_SOLTAR_CARGA";

_idaccion = _talon addAction[_textoEstructurado, "EODS_Talon_Accion_Carga_terminada = true;"];

waitUntil {EODS_Talon_Accion_Carga_terminada};

//(finddisplay 46) displayRemoveEventHandler ["KeyDown", EODSidHandlerBrazo];

_talon removeAction _idaccion;

_talon animate ["RotatArm10Deg", 1];

waitUntil {_talon animationPhase "RotatArm10Deg" >= 1};

_talon animate ["RotatArm2nd10Deg", 1];

waitUntil {_talon animationPhase "RotatArm2nd10Deg" >= 1};

_talon animate ["RotatArm3em10Deg", 1];

waitUntil {_talon animationPhase "RotatArm3em10Deg" >= 1};

_talon animate ["ExtendARM_1", 10];

waitUntil {_talon animationPhase "ExtendARM_1" >= 10};

_talon animate ["OpenLeftP_Hand", 1];

_talon animate ["OpenRightP_Hand", 1];

waitUntil {_talon animationPhase "OpenLeftP_Hand" >= 0.6};

detach _carga;

_carga setPos [(getPos _carga) select 0, (getPos _carga) select 1, 0];

_carga setVectorDirAndUp [[0,0,0],[0,0,0]];

_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_DETONAR_CARGA";

_idaccion = _talon addAction[_textoEstructurado, "\EODS_ieds\funciones\TALON\EODS_TALON_DETONAR_CARGA_EXPLOSIVA.sqf",[_carga], 1, false, true, "", ""];

_talon animate ["ExtendARM_1", 0];

waitUntil {_talon animationPhase "ExtendARM_1" == 0};

_talon animate ["OpenLeftP_Hand", 0];

_talon animate ["OpenRightP_Hand", 0];

waitUntil {_talon animationPhase "OpenLeftP_Hand" == 0};

_talon animate ["RotatArm3em10Deg", 0];

waitUntil {_talon animationPhase "RotatArm3em10Deg" == 0};

_talon animate ["RotatArm2nd10Deg", 0];

waitUntil {_talon animationPhase "RotatArm2nd10Deg" == 0};

_talon animate ["RotatArm10Deg", 0];

waitUntil {_talon animationPhase "RotatArm10Deg" == 0};

//EODSidHandlerBrazo = (findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call FNC_EODS_TALON_CONTROL_BRAZO_KEYS"];