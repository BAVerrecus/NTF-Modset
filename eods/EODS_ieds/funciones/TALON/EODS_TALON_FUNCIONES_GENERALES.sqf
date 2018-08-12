/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

FNC_EODS_TALON_fnc_getKey = {

	_keycode = getNumber (_this >> "key");

	_keycode;
};

EODS_Talon_Accion_Carga_terminada = true;

EODS_Keys = (configFile >> "CfgSettings" >> "EODS" >> "EODS_settings" >> "keys");

//-------------------------------------------------------------------------------------------

EODS_TALON_RECIBE_GOLPE = {

private ["_talon","_impacto"];

_talon = _this select 0;

_impacto = _this select 4;

	if (_impacto >= 5) then {

		[[_talon], "EODS_TALON_REMOVER_EVENT_COLLISION", true, false] spawn BIS_fnc_MP;

		[[EODS_TALON_IED_EXPLO_CONTACTO], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;
	};
};

EODS_TALON_ADD_EVENT_COLLISION = {

	_talon = _this select 0;

	_talon addEventHandler ["EpeContact", {_this call EODS_TALON_RECIBE_GOLPE;}];
};

EODS_TALON_REMOVER_EVENT_COLLISION = {

	_talon = _this select 0;

	_talon removeAllEventHandlers "EpeContact";
};
	
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

FNC_EODS_TALON_CAMBIO_CONTROLADORES = {

private ["_talon", "_controladores"];

	_talon = vehicle (_this select 0);

	_controladores = UAVControl _talon;

	if (count _controladores > 0) then {

		if (!(player in _controladores)) then {

			if (!(isNil "IdaccionAgarrarTalon")) then {

				_talon removeAction IdaccionAgarrarTalon;

				IdaccionAgarrarTalon = Nil;
			};
		};

	};
};

FNC_EODS_TALON_ADD_ACTION_AGARRAR_MANO = {

private ["_talon", "_objetosAgarrables", "_controladores", "_textoEstructurado", "_objetoAgarrado"];

	_talon = vehicle (_this select 0);

	_controladores = UAVControl _talon;

	if (player in _controladores) then {

		_objetosAgarrables = _this select 1;

		_objetoAgarrado = _objetosAgarrables select 0;

		_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_AGARRAR_OBJETO";

		IdaccionAgarrarTalon = _talon addAction[_textoEstructurado, "\EODS_ieds\funciones\TALON\EODS_TALON_AGARRAR.sqf",[_talon, _objetoAgarrado], 1, false, true, "", ""];		
	};
};

FNC_EODS_TALON_REMOVE_ACTION_AGARRAR_MANO = {

private ["_talon", "_controladores"];

	_talon = vehicle (_this select 0);

	_controladores = UAVControl _talon;

	if (player in _controladores) then {

		if (!(isNil "IdaccionAgarrarTalon")) then {

			_talon removeAction IdaccionAgarrarTalon;

			IdaccionAgarrarTalon = Nil;
		};
	};
};

FNC_EODS_TALON_ADD_ACTION_TRANSPORTE = {

private ["_talon", "_transporte","_textoEstructurado"];

	_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_CARGAR_EN_VEHICULO";

	_talon = vehicle (_this select 0);

	_transporte = _this select 1;

	IdaccionCargarTalon = _talon addAction[_textoEstructurado, "\EODS_ieds\funciones\TALON\EODS_TALON_CARGAR_VEHICULO.sqf",[_talon,_transporte], 1, false, true, "", ""];

};

FNC_EODS_TALON_REMOVE_ACTION_TRANSPORTE = {

private ["_talon"];

	_talon = vehicle (_this select 0);

	_talon removeAction IdaccionCargarTalon;
};

FNC_EODS_TALON_ADD_VEHICULO_DESCARGAR_TRANSPORTE = {

private ["_transporte", "_pos"];

_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_DESCARGAR_VEHICULO";

	_transporte = _this select 0;

	_pos = getPos _transporte;

	IdaccionDescargarTalon = _transporte addAction[_textoEstructurado, "\EODS_ieds\funciones\TALON\EODS_TALON_DESCARGAR_VEHICULO.sqf",[_transporte], 1, false, true, "", ""];

};

FNC_EODS_TALON_REMOVE_ACTION_DESCARGAR_TRANSPORTE = {

private ["_talon"];

	_talon = vehicle (_this select 0);

	_talon removeAction IdaccionDescargarTalon;
};

FNC_EODS_TALON_DESHABILITAR_IA = {

private ["_talon","_driver","_gunner"];

	_talon = vehicle (_this select 0);

	_gunner = gunner _talon;

	_driver = driver _talon;

	_gunner disableAI "AUTOTARGET"; 

	_gunner disableAI "TARGET"; 

	_gunner disableAI "MOVE"; 

	_gunner disableAI "ANIM"; 

	_gunner disableAI "FSM";

	_driver disableAI "AUTOTARGET"; 

	_driver disableAI "TARGET"; 

	_driver disableAI "MOVE"; 

	_driver disableAI "ANIM"; 

	_driver disableAI "FSM";
};

FNC_EODS_TALON_CONTROL_BRAZO_INIT = {

scopeName "main";

private ["_talon","_controladores","_mochilaFake","_pos","_dist","_offdir","_compassDir","_newX","_newY","_newPos","_titulo","_mensaje"];

	_talon = vehicle (_this select 0);

	while {alive _talon} do

	{
		_controladores = UAVControl _talon;

		if (player in _controladores) then {

			_items = assignedItems player;

			if ("EODS_Talon_Remote" in _items) then {

				_titulo = localize "STR_EODS_Titulo_Hint_Ayuda";

				_mensaje = "<t size='1'>" + localize "STR_EODS_TALON_MENSAJE_SALUDO" + "</t>";

				if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

					terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
					uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

					("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
					sleep 1;
				};

				EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;	

				player setVariable ["EODS_TALON_NAME", _talon, true];

				//EODSidHandlerBrazo = (findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call FNC_EODS_TALON_CONTROL_BRAZO_KEYS"];

				_pos = getPos player;  // position of reference.
				_dist = 1; //Distance from position of reference.
				_offdir = 0; //Relative direction from position of reference 0 - 360. (0 = forward, 180 = backwards).

				//Find compass direction to spawn from position of reference.
				_compassDir = ((getDir player)+_offdir) mod 360;

				//Find absolute coordinates by adding relative to position of reference.
				_newX = (_pos select 0) + (sin _compassDir * _dist);
				_newY = (_pos select 1) + (cos _compassDir * _dist);
				_newPos = [_newX, _newY, 0];  // position found

				_mochilaFake = createVehicle ["GroundWeaponHolder", _newPos, [], 0, "CAN_COLLIDE"];

				_mochilaFake setDir (getDir player);

				_mochilaFake addItemCargoGlobal ["EODS_Talon_Remote",1];

				[_talon, _mochilaFake, player] spawn FNC_EODS_TALON_DISTANCIA_CONSOLA;

				waitUntil {if (!(player in UAVControl _talon)) exitWith {true}; if (not alive _talon) exitWith {true};};

				if (not alive _talon) exitWith {deleteVehicle _mochilaFake; breakOut "main";};

				//(finddisplay 46) displayRemoveEventHandler ["KeyDown", EODSidHandlerBrazo];

				player setVariable ["EODS_TALON_NAME", objNull, true];

			} else {
	
				player connectTerminalToUAV objNull;

				if (!(isNil "_mochilaFake")) then {	

					if (!(isNull _mochilaFake)) then {

						deleteVehicle _mochilaFake;
								
						_mochilaFake = objNull;
					};
				};

				_titulo = localize "STR_EODS_Titulo_Hint_Generico";

				_mensaje = "<br/>" + "<t size='1'>" + localize "STR_EODS_TALON_NO_CONSOLE" + "</t>";

				if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

					terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
					uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

					("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
					sleep 1;
				};

				EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;				
			};

		} else {

			if (!(isNil "_mochilaFake")) then {	

				if (!(isNull _mochilaFake)) then {

					_items = assignedItems player;

					if ("EODS_Talon_Remote" in _items) then {

						player unassignItem "EODS_Talon_Remote";
	
						player removeItem "EODS_Talon_Remote";

					} else {

						deleteVehicle _mochilaFake;
								
						_mochilaFake = objNull;
					};

					_titulo = localize "STR_EODS_Titulo_Hint_Generico";

					_mensaje = "<br/>" + "<t size='1'>" + localize "STR_EODS_TALON_CONSOLE_RECOGIDA" + "</t>";

					if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

						terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
						uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

						("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
						sleep 1;
					};

					EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;						
				};
			};
		
			waitUntil {if (player in UAVControl _talon) exitWith {true}; if (not alive _talon) exitWith {true};};

			if (not alive _talon) exitWith {breakOut "main";};
		};

		sleep 1;
	};
};

FNC_EODS_TALON_DISTANCIA_CONSOLA = {

private ["_talon","_consola","_controlador","_distancia"];

	_talon = _this select 0;

	_consola = _this select 1;

	_controlador = _this select 2;

	while {player in UAVControl _talon} do

	{
		_distancia = _controlador distance _consola;

		if (_distancia > 3) exitWith {

			player connectTerminalToUAV objNull;
		};

		sleep 1;
	};
};

FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_PLUS_KEYS = {

scopeName "main";

private ["_talon"];

_talon = player getVariable "EODS_TALON_NAME";


		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "RotatArm10Deg" == 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {
	
				_talon animate ["RotatArm10Deg", 1];
			};

			if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

				_talon animate ["RotatArm2nd10Deg", 1];
			};
	
			if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

				_talon animate ["RotatArm3em10Deg", 1];
			};
		};
};

FNC_EODS_TALON_CONTROL_BRAZO_INCLINAR_LESS_KEYS = {

scopeName "main";

private ["_talon"];

_talon = player getVariable "EODS_TALON_NAME";
	
		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

				_talon animate ["RotatArm10Deg", 0];
			};

			if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

				_talon animate ["RotatArm2nd10Deg", 0];
			};

			if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" > 0)) then {

				_talon animate ["RotatArm3em10Deg", 0];
			};
		};
};

FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_PLUS_KEYS = {

scopeName "main";

private ["_talon","_posBrazo"];

_talon = player getVariable "EODS_TALON_NAME";
	
		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "ExtendARM_1" >= -1) && (_talon animationPhase "ExtendARM_1" < 10)) then {

				_posBrazo = _talon animationPhase "ExtendARM_1";

				_posBrazo = _posBrazo + 1;

				_talon animate ["ExtendARM_1", _posBrazo];
			};
		};
};

FNC_EODS_TALON_CONTROL_BRAZO_EXTENDER_LESS_KEYS = {

scopeName "main";

private ["_talon","_posBrazo"];

_talon = player getVariable "EODS_TALON_NAME";
	
		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "ExtendARM_1" > 0) && (_talon animationPhase "ExtendARM_1" <= 11)) then {

				_posBrazo = _talon animationPhase "ExtendARM_1";
	
				_posBrazo = _posBrazo - 1;

				_talon animate ["ExtendARM_1", _posBrazo];
			};
		};
};

FNC_EODS_TALON_CONTROL_BRAZO_ABRIR_MANO_KEYS = {

scopeName "main";

private ["_talon","_posMano"];

_talon = player getVariable "EODS_TALON_NAME";
	
		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "OpenLeftP_Hand" >= -1) && (_talon animationPhase "OpenLeftP_Hand" < 1)) then {
	
				_posMano = _talon animationPhase "OpenLeftP_Hand";

				_posMano = _posMano + 0.1;

				_talon animate ["OpenLeftP_Hand", _posMano];

				_talon animate ["OpenRightP_Hand", _posMano];
			};
		};
};

FNC_EODS_TALON_CONTROL_BRAZO_CERRAR_MANO_KEYS = {

scopeName "main";

private ["_talon","_posMano"];

_talon = player getVariable "EODS_TALON_NAME";
	
		if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

			if ((_talon animationPhase "OpenLeftP_Hand" > 0) && (_talon animationPhase "OpenLeftP_Hand" <= 2)) then {

				_posMano = _talon animationPhase "OpenLeftP_Hand";

				_posMano = _posMano - 0.1;

				_talon animate ["OpenLeftP_Hand", _posMano];

				_talon animate ["OpenRightP_Hand", _posMano];
			};
		};
};
//------------------------------------------------------------------------------------------------------

FNC_EODS_TALON_CONTROL_BRAZO_KEYS = {

private ["_talon","_tecla","_posBrazo","_posMano"];

_tecla = _this;

_talon = player getVariable "EODS_TALON_NAME";

EODS_Talon_1 = (EODS_Keys >> "key1") call FNC_EODS_TALON_fnc_getKey;

EODS_Talon_2 = (EODS_Keys >> "key2") call FNC_EODS_TALON_fnc_getKey;

EODS_Talon_3 = (EODS_Keys >> "key3") call FNC_EODS_TALON_fnc_getKey;

EODS_Talon_4 = (EODS_Keys >> "key4") call FNC_EODS_TALON_fnc_getKey;

EODS_Talon_5 = (EODS_Keys >> "key5") call FNC_EODS_TALON_fnc_getKey;

EODS_Talon_6 = (EODS_Keys >> "key6") call FNC_EODS_TALON_fnc_getKey;

if (((UAVControl _talon) select 1 == "DRIVER") or ((UAVControl _talon) select 1 == "GUNNER")) then {

	if (_tecla == EODS_Talon_1) then {

		if ((_talon animationPhase "RotatArm10Deg" == 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

			_talon animate ["RotatArm10Deg", 1];
		};

		if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

			_talon animate ["RotatArm2nd10Deg", 1];
		};

		if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

			_talon animate ["RotatArm3em10Deg", 1];
		};
	};

	if (_tecla == EODS_Talon_2) then {

		if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" == 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

			_talon animate ["RotatArm10Deg", 0];
		};

		if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" == 0)) then {

			_talon animate ["RotatArm2nd10Deg", 0];
		};

		if ((_talon animationPhase "RotatArm10Deg" > 0) && (_talon animationPhase "RotatArm2nd10Deg" > 0) && (_talon animationPhase "RotatArm3em10Deg" > 0)) then {

			_talon animate ["RotatArm3em10Deg", 0];
		};
	};

	if (_tecla == EODS_Talon_3) then {

		if ((_talon animationPhase "ExtendARM_1" >= -1) && (_talon animationPhase "ExtendARM_1" < 10)) then {

			_posBrazo = _talon animationPhase "ExtendARM_1";

			_posBrazo = _posBrazo + 1;

			_talon animate ["ExtendARM_1", _posBrazo];
		};
	};

	if (_tecla == EODS_Talon_4) then {

		if ((_talon animationPhase "ExtendARM_1" > 0) && (_talon animationPhase "ExtendARM_1" <= 11)) then {

			_posBrazo = _talon animationPhase "ExtendARM_1";

			_posBrazo = _posBrazo - 1;

			_talon animate ["ExtendARM_1", _posBrazo];
		};
	};

	if (_tecla == EODS_Talon_5) then {

		if ((_talon animationPhase "OpenLeftP_Hand" >= -1) && (_talon animationPhase "OpenLeftP_Hand" < 1)) then {

			_posMano = _talon animationPhase "OpenLeftP_Hand";

			_posMano = _posMano + 0.1;

			_talon animate ["OpenLeftP_Hand", _posMano];

			_talon animate ["OpenRightP_Hand", _posMano];
		};
	};

	if (_tecla == EODS_Talon_6) then {

		if ((_talon animationPhase "OpenLeftP_Hand" > 0) && (_talon animationPhase "OpenLeftP_Hand" <= 2)) then {

			_posMano = _talon animationPhase "OpenLeftP_Hand";

			_posMano = _posMano - 0.1;

			_talon animate ["OpenLeftP_Hand", _posMano];

			_talon animate ["OpenRightP_Hand", _posMano];
		};
	};
};

};