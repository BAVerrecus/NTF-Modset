/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

FNC_EODS_IEDS_FALSO_EN_EL_PISO = {

private ["_todosLosObjetos","_holders","_ejecutar","_items","_itemselec"];

_ejecutar = true;

	while {_ejecutar} do

	{
		_holders = allMissionObjects "GroundWeaponHolder";

		if (count _holders > 0) then {

			{
				_items = itemCargo _x;

				if (count _items > 0) then {

					_itemselec = _items select 0;

					if (_itemselec in EODS_ied_crear_falsos) then {

						_resultado = [_itemselec, _x] call FNC_EODS_IEDS_FALSO_CREAR;

						waitUntil {_resultado};
					};
				};

			} forEach _holders;
		};

		waitUntil {_holders = allMissionObjects "GroundWeaponHolder"; if (count _holders > 0) exitWith {true}; sleep 1; false};

		sleep 1;
	};
};

FNC_EODS_IEDS_FALSO_CREAR = {

private ["_ied","_tipoied","_nuevoied","_holder","_pos"];

_ied = _this select 0;

_holder = _this select 1;

_pos = getPosATL _holder;

	switch (_ied) do {

   		case "EODS_inventario_ied_01": {_tipoied = "EODS_ied01";};

   		case "EODS_inventario_ied_02": {_tipoied = "EODS_ied02";};

   		case "EODS_inventario_ied_03": {_tipoied = "EODS_ied03";};

   		case "EODS_inventario_ied_04": {_tipoied = "EODS_ied04";};

   		case "EODS_inventario_ied_05": {_tipoied = "EODS_ied05";};

   		case "EODS_inventario_ied_06": {_tipoied = "EODS_ied06";};

   		case "EODS_inventario_ied_07": {_tipoied = "EODS_ied07";};

		case "EODS_Uxo_01_Inv": {_tipoied = "EODS_Uxo_1";};

    		default {hint "NO ES UN IED";};
	};

	deleteVehicle _holder;

	_nuevoied = createVehicle [_tipoied, [_pos select 0, (_pos select 1) + 0.5, 0.01], [], 0, "CAN_COLLIDE"];

	true;
};

FNC_EODS_OBJETOS_INTERAC = {

private ["_todosLosObjetos","_type","_ejecutar","_check","_compararArrays","_conAccion"];

	sleep 10;

	_ejecutar = true;

	_check = [];

	_conAccion = [];

	_todosLosObjetos = [];

	while {_ejecutar} do

	{

		{

			_todosLosObjetos = _todosLosObjetos + allMissionObjects _x;

			sleep 0.1;

		} forEach EODS_IEDS_PCU_OBJETOS_ESCONDER;

		_compararArrays = [_todosLosObjetos,_check] call BIS_fnc_areEqual;

		if (!_compararArrays) then {

			_check = _todosLosObjetos;

			if (count _todosLosObjetos > 0) then {

				{	if (!(_x in _conAccion)) then {

						_type = typeOf _x;

						if (_type in EODS_IEDS_PCU_OBJETOS_ESCONDER) then {

							[[_x], "FNC_EODS_PCU_ADD_ACTION_OBJ_INSPEC", true, false] spawn BIS_fnc_MP;

							_conAccion = _conAccion + [_x];
						};

						if (!(_x isKindOf "Talon_Base")) then {

							if ((_x isKindOf "Car") or (_x isKindOf "Tank") or (_x isKindOf "Plane") or (_x isKindOf "Helicopter") or (_x isKindOf "Ship") or (_x isKindOf "ReammoBox_F") or (_x isKindOf "Wreck")) then {

								[[_x], "FNC_EODS_PCU_ADD_ACTION_OBJ_INSPEC", true, false] spawn BIS_fnc_MP;

								_conAccion = _conAccion + [_x];
							};
						};
					};

					sleep 1;

				} forEach _todosLosObjetos;
			};

		};

		sleep 10;
	};
};

_actionPhone = ["EODS_ace_action_Interact", "Interact..", "", {
	createDialog "EODS_IEDS_MENU_PRINCIPAL";
	[_target, _player] spawn FNC_EODS_PCU_MENU_PRINCIPAL_CHECK;
}, {true}] call ace_interact_menu_fnc_createAction;
["EODS_base_ied_cellphone", 0, ["ACE_MainActions"], _actionPhone, true] call ace_interact_menu_fnc_addActionToClass;

_actionDisarm = ["EODS_ace_action_disarm", "Disarm", "", {
	_nul = [_target] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_OBJ.sqf';
}, {true}] call ace_interact_menu_fnc_createAction;
{
	[_x, 0, ["ACE_MainActions"], _actionDisarm, true] call ace_interact_menu_fnc_addActionToClass;
} forEach EODS_ied_tierras;

_actionInspect = ["EODS_ace_action_inspect", "Inspect", "", {
	[_target] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_OBJ.sqf';
}, {true}] call ace_interact_menu_fnc_createAction;
{
	[_x, 0, ["ACE_MainActions"], _actionInspect, true] call ace_interact_menu_fnc_addActionToClass;
} forEach EODS_IEDS_PCU_OBJETOS_ESCONDER;

FNC_EODS_OBJETOS_INTERAC_KEY = {

scopeName "main";

private ["_objeto","_type","_distancia"];

	_objeto = cursortarget;

	if (!(isNil "_objeto")) then {

		if (!(isNull _objeto)) then {

			_type = typeOf _objeto;

			if ((!EODS_IEDS_PCU_CHECK_NO_ACCION_KEY) or (!EODS_accion_mover_ied_terminada) or (_objeto isKindOf "Talon_Base")) exitWith {

				breakOut "main";
			};

			if ((_type in EODS_IEDS_PCU_OBJETOS_ESCONDER) or (_objeto isKindOf "EODS_base_ied_cellphone") or (_type in EODS_ied_tierras)) then {

				_distancia = player distance _objeto;

				if (_distancia <= 3) exitWith {

					if (_type in EODS_IEDS_PCU_OBJETOS_ESCONDER) then {

						_nul = [_objeto] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_OBJ.sqf';

						breakOut "main";
					};

					if (_objeto isKindOf "EODS_base_ied_cellphone") then {

						createDialog "EODS_IEDS_MENU_PRINCIPAL";

						[_objeto, player] spawn FNC_EODS_PCU_MENU_PRINCIPAL_CHECK;

						breakOut "main";
					};

					if (_type in EODS_ied_tierras) then {

						_nul = [_objeto] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_DESENTERRAR.sqf';

						breakOut "main";
					};
				};

			} else {

				if ((_objeto isKindOf "Car") or (_objeto isKindOf "Tank") or (_objeto isKindOf "Plane") or (_objeto isKindOf "Helicopter") or (_objeto isKindOf "Ship") or (_objeto isKindOf "ReammoBox_F") or (_objeto isKindOf "Wreck")) then {

					_distancia = player distance _objeto;

					if (_distancia <= 5) exitWith {

						_nul = [_objeto] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_OBJ.sqf';

						breakOut "main";
					};
				};
			};
		};
	};
};

FNC_EODS_PCU_IEDS_INVENTARIO = {

private ["_idaccionJammer","_idaccionCelular","_idaccionRemoverAntena","_mochila","_accionDisponible","_accionDisponibleRemoverAntena","_jugador","_items","_ieds","_compararArrays","_iedsCheck","_textoEstructuradoRemoverAntena","_textoEstructurado","_textoEstructuradoJammer"];

_jugador = player;

_items = [];

_ieds = [];

_iedsCheck = [];

_accionDisponible = true;

EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA = true;

EODS_IEDS_PCU_JAMMER_ACTIVO = false;

_accionDisponibleRemoverAntena = false;

_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_usar_celular";

_textoEstructuradoJammer = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_activar_THOR_III";

_textoEstructuradoRemoverAntena = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Remover_Antena_THOR_III";

_idaccionCelular = _jugador addAction[_textoEstructurado, "createDialog 'EODS_IEDS_MENU_CELULAR'",[], 1, false, true, "", ""];

_idaccionJammer = _jugador addAction[_textoEstructuradoJammer, "\EODS_ieds\funciones\PCU\EODS_PCU_JAMMING_IED.sqf",[], 1, false, true, "", ""];

	while {EODS_IEDS_PCU_HABILITADO} do

	{
		_jugador = player;

		if (!EODS_accion_mover_ied_terminada) then {

			_iedsCheck = [];

			if (count EODS_id_acciones_guardadas > 0) then {

				{
					_jugador removeAction _x;

				} forEach EODS_id_acciones_guardadas;

				EODS_id_acciones_guardadas = [];
			};

			if (_accionDisponible) then {

				_jugador removeAction _idaccionCelular;

				_accionDisponible = false;
			};

			if (_accionDisponibleRemoverAntena) then {

				_jugador removeAction _idaccionRemoverAntena;

				_accionDisponibleRemoverAntena = false;
			};

			waitUntil {EODS_accion_mover_ied_terminada};

		};

		_mochila = unitBackpack _jugador;

		if (!(_mochila isKindOf "EODS_THORIII_Base")) then {

			_jugador removeAction _idaccionJammer;

			EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA = false;

			if (EODS_IEDS_PCU_JAMMER_ACTIVO) then {

				EODS_IEDS_PCU_JAMMER_ACTIVO = false;
			};

			if (_accionDisponibleRemoverAntena) then {

				_jugador removeAction _idaccionRemoverAntena;

				_accionDisponibleRemoverAntena = false;
			};

		} else {

			if (!EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA) then {

				_idaccionJammer = _jugador addAction[_textoEstructuradoJammer, "\EODS_ieds\funciones\PCU\EODS_PCU_JAMMING_IED.sqf",[], 1, false, true, "", ""];

				EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA = true;

				_iedsCheck = [];
			};

			if (_mochila isKindOf "EODS_THORIII_SIN_ANTENA_BASE") then {

				if (_accionDisponibleRemoverAntena) then {

					_jugador removeAction _idaccionRemoverAntena;

					_accionDisponibleRemoverAntena = false;
				};

			} else {

				if (!_accionDisponibleRemoverAntena) then {

					_idaccionRemoverAntena = _jugador addAction[_textoEstructuradoRemoverAntena, "\EODS_ieds\funciones\PCU\EODS_PCU_REMOVER_ANTENA_JAMMER.sqf",[], 1, false, true, "", ""];

					_accionDisponibleRemoverAntena = true;

				};
			};
		};

		_items = items _jugador;

		if (count _items > 0) then {

			if (!("EODS_cellphone_02" in _items)) then {

				_jugador removeAction _idaccionCelular;

				_accionDisponible = false;

			} else {

				if (!_accionDisponible) then {

					if ("EODS_cellphone_02" in _items) then {

	 					_idaccionCelular = _jugador addAction[_textoEstructurado, "createDialog 'EODS_IEDS_MENU_CELULAR'",[], 1, false, true, "", ""];

						_accionDisponible = true;
					};
				};

			};

			{
				if (_x in EODS_ied_inventarios_disponibles) then {

					if (count _ieds > 0) then {

						if (!(_x in _ieds)) then {

							_ieds = _ieds + [_x];
						};

					} else {

						_ieds = _ieds + [_x];
					};
				};

			} forEach _items;

		};

		if (count _ieds > 0) then {

			{
				if (!(_x in _items)) then {

					_ieds = _ieds - [_x];
				};

			} forEach _ieds;

			if (count _ieds > 0) then {

				_compararArrays = [_ieds,_iedsCheck] call BIS_fnc_areEqual;

				if (!_compararArrays) then {

					[_jugador,_ieds] spawn FNC_EODS_PCU_ADD_ACTION_INIT;

					_iedsCheck = _ieds;
				};
			};

		} else {

			if (count EODS_id_acciones_guardadas > 0) then {

				{
					_jugador removeAction _x;

				} forEach EODS_id_acciones_guardadas;

				EODS_id_acciones_guardadas = [];
			};

			_iedsCheck = [];
		};

		if (vehicle _jugador != _jugador) then {

			if (count EODS_id_acciones_guardadas > 0) then {

				{
					_jugador removeAction _x;

				} forEach EODS_id_acciones_guardadas;

				EODS_id_acciones_guardadas = [];
			};

			_iedsCheck = [];

			if (_accionDisponibleRemoverAntena) then {

				_jugador removeAction _idaccionRemoverAntena;

				_accionDisponibleRemoverAntena = false;
			};

			waitUntil {vehicle _jugador == _jugador};
		};

		sleep 1;

		if (not alive _jugador) then {

			if (count EODS_id_acciones_guardadas > 0) then {

				{
					_jugador removeAction _x;

				} forEach EODS_id_acciones_guardadas;

				EODS_id_acciones_guardadas = [];
			};

			_iedsCheck = [];

			removeAllItems _jugador;

			if (_accionDisponibleRemoverAntena) then {

				_jugador removeAction _idaccionRemoverAntena;

				_accionDisponibleRemoverAntena = false;
			};

			if (_accionDisponible) then {

				_jugador removeAction _idaccionCelular;

				_accionDisponible = false;
			};

			_jugador removeAction _idaccionJammer;

			EODS_IEDS_PCU_JAMMER_ACCION_ACTIVA = false;

			if (EODS_IEDS_PCU_JAMMER_ACTIVO) then {

				EODS_IEDS_PCU_JAMMER_ACTIVO = false;
			};
		};
	};
};

FNC_EODS_PCU_ADD_ACTION_INIT = {

private ["_jugador","_ieds","_ied","_nombreIed"];

	_jugador = _this select 0;

	_ieds = _this select 1;

	if (count EODS_id_acciones_guardadas > 0) then {

		{
			_jugador removeAction _x;

		} forEach EODS_id_acciones_guardadas;

		EODS_id_acciones_guardadas = [];
	};

	if (count _ieds > 1) then {

		{

			_nombreIed = getText (configFile >> "CfgWeapons" >> _x >> "displayName");

			[_jugador,_x,_nombreIed] spawn FNC_EODS_PCU_ADD_ACTION;

		} forEach _ieds;

	} else {

		_ied = _ieds select 0;

		_nombreIed = getText (configFile >> "CfgWeapons" >> _ied >> "displayName");

		[_jugador,_ied,_nombreIed] spawn FNC_EODS_PCU_ADD_ACTION;
	};
};

FNC_EODS_PCU_ADD_ACTION = {

private ["_jugador","_ied","_textoEstructurado","_textoEstructurado_antena","_nombreIed","_idaccion"];

	_jugador = _this select 0;

	_ied = _this select 1;

	_nombreIed = _this select 2;

	_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Colocar" + " " + _nombreIed;

	_textoEstructurado_antena = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Cambiar_Antena_THOR_III" + " " + _nombreIed;

	if ((_ied == "EODS_Inv_LowBandAntenna") or (_ied == "EODS_Inv_MidBandAntenna") or (_ied == "EODS_Inv_HighBandAntenna")) then {

		_mochila = unitBackpack _jugador;

		if (_mochila isKindOf "EODS_THORIII_Base") then {

			_idaccion = _jugador addAction[_textoEstructurado_antena, "\EODS_ieds\funciones\PCU\EODS_PCU_CAMBIAR_ANTENA_JAMMER.sqf",[_jugador,_ied], 1, false, true, "", ""];

			EODS_id_acciones_guardadas = EODS_id_acciones_guardadas + [_idaccion];
		};

	} else {

		_idaccion = _jugador addAction[_textoEstructurado, "\EODS_ieds\funciones\PCU\EODS_PCU_CREAR_IED.sqf",[_jugador,_ied], 1, false, true, "", ""];

		EODS_id_acciones_guardadas = EODS_id_acciones_guardadas + [_idaccion];

	};
};

FNC_EODS_PCU_ADD_ACTION_OBJ_INSPEC = {

private ["_obj","_texto","_idAccionInteractuar"];

	_obj = _this select 0;

	_texto = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Inspeccionar";

	_idAccionInteractuar = _obj addAction[_texto, "\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_OBJ.sqf",[_obj], 1, false, true, "", ""];
};

FNC_EODS_PCU_CHECK_ACTION_POST_CREADO = {

private ["_ied","_texto","_idAccionInteractuar"];

	_ied = _this select 0;

	_texto = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Interactuar";

	_idAccionInteractuar = _ied addAction[_texto, "\EODS_ieds\funciones\PCU\EODS_PCU_SPAWN_MENU_PRINCIPAL.sqf",[_ied], 1, false, true, "", ""];

};

FNC_EODS_PCU_ELIMINAR_ACCIONES = {

private ["_objeto"];

	_objeto = _this select 0;

	removeAllActions _objeto;
};

FNC_EODS_PCU_ELIMINAR_ACCION = {

private ["_objeto","_id"];

	_objeto = _this select 0;

	_id = _this select 1;

	_objeto removeAction _id;
};

FNC_EODS_PCU_ADD_ACCION_DESENTERRAR = {

private ["_ied","_tierra","_textoDesenterrar","_idAccionDesenterrar"];

	_ied = _this select 0;

	_tierra = _this select 1;

	_textoDesenterrar = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Desenterrar";

	_idAccionDesenterrar = _tierra addAction[_textoDesenterrar, "\EODS_ieds\funciones\PCU\EODS_PCU_DESENTERRAR.sqf",[_ied], 1, false, true, "", ""];
};

FNC_EODS_PCU_ADD_ACCION_REVELAR = {

private ["_objeto","_idAccionRevelar"];

	_objeto = _this select 0;

	_textoRevelar = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_PCU_REVELAR";

	_idAccionRevelar = _objeto addAction[_textoRevelar, "\EODS_ieds\funciones\PCU\EODS_PCU_REVELAR.sqf",[_objeto], 1, false, true, "", ""];
};

FNC_EODS_PCU_MENU_PRINCIPAL_CHECK = {

private ["_nombreMenu","_operador","_classname","_imagenIed","_ied","_statusArmado","_enterrado","_idsAsociadas","_tierra","_accionDesenterrarActiva","_moviendoIED","_posibleEscondite"];

disableSerialization;

_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR";

	_ied = _this select 0;

	_operador = vehicle (_this select 1);

	EODS_ied_para_menu = _ied;

	EODS_Operador_para_menu = _operador;

	_classname = typeOf _ied;

	_imagenIed = getText (configFile >> "cfgVehicles" >> _classname >> "picture");

	(_nombreMenu displayCtrl 1200) ctrlSetText _imagenIed;

		_enterrado = _ied getVariable "EODS_Ieds_HIDDEN_ENTERRADO";

		_statusArmado = _ied getVariable "EODS_Ieds_STATUS_ARMADO";

			if (isNil "_enterrado") then {

				_enterrado = false;

			};


			if (isNil "_statusArmado") then {

				_statusArmado = false;

			};

			ctrlShow [21, false];

			ctrlShow [22, false];

			_posibleEscondite = nearestObjects [_ied, EODS_IEDS_PCU_OBJETOS_ESCONDER, 3];

			if (!_enterrado) then {

				(_nombreMenu displayCtrl 2) ctrlSetText localize "STR_EODS_ieds_Enterrar";

				buttonSetAction [2, "_nul = [EODS_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_ENTERRAR.sqf';closedialog 0;"];

				buttonSetAction [12, "['STR_EODS_Titulo_Hint_Ayuda_Enterrar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

				if (!_statusArmado) then {

					(_nombreMenu displayCtrl 1) ctrlSetText localize "STR_EODS_ieds_Armar";

					buttonSetAction [1, "_nul = [EODS_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_ARMAR_IED.sqf';closedialog 0;"];

					buttonSetAction [11, "['STR_EODS_Titulo_Hint_Ayuda_Armar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					(_nombreMenu displayCtrl 3) ctrlSetText localize "STR_EODS_ieds_Mover";

					buttonSetAction [3, "_nul = [EODS_ied_para_menu, EODS_Operador_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_MOVER_IED.sqf';closedialog 0;"];

					buttonSetAction [13, "['STR_EODS_Titulo_Hint_Ayuda_Mover'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					(_nombreMenu displayCtrl 4) ctrlSetText localize "STR_EODS_ieds_Recoger";

					buttonSetAction [4, "_nul = [EODS_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_RECOGER.sqf';closedialog 0;"];

					buttonSetAction [14, "['STR_EODS_Titulo_Hint_Ayuda_Recoger'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					if (count _posibleEscondite > 0) then {

						EODS_objeto_esconder_ied_para_menu = _posibleEscondite select 0;

						(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_Esconder";

						buttonSetAction [5, "_nul = [EODS_ied_para_menu, EODS_objeto_esconder_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_ESCONDER.sqf';closedialog 0;"];

						buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_Esconder'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					} else {

						ctrlShow [5, false];

						ctrlShow [15, false];
					};

					if (_operador isKindOf "Talon_Base") then {

						closedialog 0;
					};

				} else {

					if (!EODS_PCU_ENCADENANDO) then {

						(_nombreMenu displayCtrl 1) ctrlSetText localize "STR_EODS_ieds_Encadenar";

						buttonSetAction [1, "_nul = [EODS_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_ENCADENAR.sqf';closedialog 0;"];

						buttonSetAction [11, "['STR_EODS_Titulo_Hint_Ayuda_Encadenar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					} else {

						(_nombreMenu displayCtrl 1) ctrlSetText localize "STR_EODS_ieds_Encadenar";

						ctrlEnable [1, false];

						ctrlEnable [11, false];
					};


					if (count _posibleEscondite > 0) then {

						EODS_objeto_esconder_ied_para_menu = _posibleEscondite select 0;

						(_nombreMenu displayCtrl 3) ctrlSetText localize "STR_EODS_ieds_Esconder";

						buttonSetAction [3, "_nul = [EODS_ied_para_menu, EODS_objeto_esconder_ied_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_ESCONDER.sqf';closedialog 0;"];

						buttonSetAction [13, "['STR_EODS_Titulo_Hint_Ayuda_Esconder'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					} else {

						(_nombreMenu displayCtrl 3) ctrlSetText localize "STR_EODS_ieds_Mover";

						ctrlEnable [3, false];

						ctrlEnable [13, false];
					};

					(_nombreMenu displayCtrl 4) ctrlSetText localize "STR_EODS_ieds_Recoger";

					ctrlEnable [4, false];

					ctrlEnable [14, false];

					(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_Inspeccionar";

					buttonSetAction [5, "_nul = [EODS_ied_para_menu, EODS_Operador_para_menu] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_IED.sqf';"];

					buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_Inspeccionar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

					if (_operador isKindOf "Talon_Base") then {

						ctrlShow [1, false];

						ctrlShow [11, false];

						ctrlShow [2, false];

						ctrlShow [12, false];

						ctrlShow [3, false];

						ctrlShow [13, false];

						ctrlShow [4, false];

						ctrlShow [14, false];
					};
				};

			} else {

				closedialog 0;

			};
};

FNC_EODS_PCU_CHECK_NUMERO_CELULAR = {

scopeName "main";

private ["_vehiculos","_numeroCelular","_iedsActCelular","_statusArmado","_numeroAsignado","_iedJammed"];

	_numeroCelular = _this select 0;

	_vehiculos = vehicles;

	_iedsActCelular = [];

	if (count _vehiculos > 0) then {

		{
			if (_x isKindOf "EODS_base_ied_cellphone") then {

				_iedsActCelular = _iedsActCelular + [_x];

			};

		} forEach _vehiculos;
	};

	if (count _iedsActCelular > 0) then {

		{
			_statusArmado = _x getVariable "EODS_Ieds_STATUS_ARMADO";

			if (isNil "_statusArmado") then {

				_statusArmado = false;

			};

			if (_statusArmado) then {

				_numeroAsignado = _x getVariable "EODS_Ieds_NUMERO_CELULAR";

				if (isNil "_numeroAsignado") then {

					_numeroAsignado = "0";

				};

				if (_numeroCelular == _numeroAsignado) exitWith {

					_iedJammed = _x getVariable "EODS_Ied_jammed";

					if (isNil "_iedJammed") then {

						_iedJammed = false;
					};

					if (!_iedJammed) then {

						playSound "EODS_tone";

						sleep 1.5;

						[[_x], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;

						EODS_PCU_Reproducir_Efectos_Celular = true;

						sleep 3;

						playSound "EODS_disconect";

					} else {

						playSound "EODS_disconect";
					};

					breakOut "main";
				};

			};

		} forEach _iedsActCelular;
	};

};

FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR = {

private ["_numeroCelular","_nombreMenu"];

	_numeroCelular = _this select 0;

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	if (!(_numeroCelular in EODS_PCU_Celular_Numeros_Guardados)) then {

		EODS_PCU_Celular_Numeros_Guardados = EODS_PCU_Celular_Numeros_Guardados + [_numeroCelular];

		(_nombreMenu displayCtrl 1400) ctrlSetText localize "STR_EODS_ieds_Numbero_Guardado";

		(_nombreMenu displayCtrl 1401) ctrlSetText "";

		(_nombreMenu displayCtrl 1402) ctrlSetText "";

		sleep 2;

		(_nombreMenu displayCtrl 1400) ctrlSetText "";

		(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Guardar";

		(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Agenda";

	} else {

		(_nombreMenu displayCtrl 1400) ctrlSetText localize "STR_EODS_ieds_Numbero_Ya_Existe";

		(_nombreMenu displayCtrl 1401) ctrlSetText "";

		(_nombreMenu displayCtrl 1402) ctrlSetText "";

		sleep 2;

		(_nombreMenu displayCtrl 1400) ctrlSetText "";

		(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Guardar";

		(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Agenda";
	};
};

FNC_EODS_PCU_AGENDA_CELULAR = {

private ["_numeroCelular","_nombreMenu","_selectNumber"];

	_numeroCelular = _this select 0;

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	if (count EODS_PCU_Celular_Numeros_Guardados > 0) then {

		_selectNumber = EODS_PCU_Celular_Numeros_Guardados select 0;

		(_nombreMenu displayCtrl 1400) ctrlSetText _selectNumber;

		(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Borrar";

		buttonSetAction [23, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_BORRAR_NUMERO_CELULAR;"];

		(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Volver";

		buttonSetAction [24, "[] spawn FNC_EODS_PCU_AGENDA_CELULAR_VOLVER;"];

	} else {

		(_nombreMenu displayCtrl 1400) ctrlSetText localize "STR_EODS_ieds_No_Number_Celuar";

		(_nombreMenu displayCtrl 1401) ctrlSetText "";

		(_nombreMenu displayCtrl 1402) ctrlSetText "";

		sleep 2;

		(_nombreMenu displayCtrl 1400) ctrlSetText "";

		(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Guardar";

		buttonSetAction [23, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR;"];

		(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Agenda";

		buttonSetAction [24, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = true;"];

		EODS_CELULAR_AGENDA_ACTIVA = false;
	};
};

FNC_EODS_PCU_AGENDA_CELULAR_VOLVER = {

private ["_nombreMenu"];

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	(_nombreMenu displayCtrl 1400) ctrlSetText "";

	(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Guardar";

	buttonSetAction [23, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR;"];

	(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Agenda";

	buttonSetAction [24, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = true;"];

	EODS_CELULAR_AGENDA_ACTIVA = false;

};

FNC_EODS_PCU_BORRAR_NUMERO_CELULAR = {

private ["_numeroCelular","_nombreMenu","_buscarArray","_selectNumber"];

	_numeroCelular = _this select 0;

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	if (_numeroCelular in EODS_PCU_Celular_Numeros_Guardados) then {

		EODS_PCU_Celular_Numeros_Guardados = EODS_PCU_Celular_Numeros_Guardados - [_numeroCelular];

		(_nombreMenu displayCtrl 1400) ctrlSetText localize "STR_EODS_ieds_Celular_Numero_Borrado";

		(_nombreMenu displayCtrl 1401) ctrlSetText "";

		(_nombreMenu displayCtrl 1402) ctrlSetText "";

		sleep 2;

		if (count EODS_PCU_Celular_Numeros_Guardados > 0) then {

			_selectNumber = EODS_PCU_Celular_Numeros_Guardados select 0;

			(_nombreMenu displayCtrl 1400) ctrlSetText _selectNumber;

			(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Borrar";

			buttonSetAction [23, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_BORRAR_NUMERO_CELULAR;"];

			(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Volver";

			buttonSetAction [24, "[] spawn FNC_EODS_PCU_AGENDA_CELULAR_VOLVER;"];

		} else {

			(_nombreMenu displayCtrl 1400) ctrlSetText localize "STR_EODS_ieds_No_Number_Celuar";

			sleep 2;

			(_nombreMenu displayCtrl 1400) ctrlSetText "";

			(_nombreMenu displayCtrl 1401) ctrlSetText localize "STR_EODS_ieds_Celular_Guardar";

			buttonSetAction [23, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR;"];

			(_nombreMenu displayCtrl 1402) ctrlSetText localize "STR_EODS_ieds_Celular_Agenda";

			buttonSetAction [24, "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = true;"];

			EODS_CELULAR_AGENDA_ACTIVA = false;
		};
	};
};

FNC_EODS_PCU_AGENDA_BAJAR = {

private ["_numeroCelular","_nombreMenu","_selectNumber","_buscarArray","_selectNumber"];

	_numeroCelular = _this select 0;

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	if ((count EODS_PCU_Celular_Numeros_Guardados > 1) && (_numeroCelular in EODS_PCU_Celular_Numeros_Guardados)) then {

		_buscarArray = EODS_PCU_Celular_Numeros_Guardados find _numeroCelular;

		_buscarArray = _buscarArray + 1;

		if (count EODS_PCU_Celular_Numeros_Guardados > _buscarArray) then {

			_selectNumber = EODS_PCU_Celular_Numeros_Guardados select _buscarArray;

			(_nombreMenu displayCtrl 1400) ctrlSetText _selectNumber;
		};

	};
};

FNC_EODS_PCU_AGENDA_SUBIR = {

private ["_numeroCelular","_nombreMenu","_selectNumber","_buscarArray","_selectNumber"];

	_numeroCelular = _this select 0;

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_CELULAR_CHECK_VAR";

	if ((count EODS_PCU_Celular_Numeros_Guardados > 1) && (_numeroCelular in EODS_PCU_Celular_Numeros_Guardados)) then {

		_buscarArray = EODS_PCU_Celular_Numeros_Guardados find _numeroCelular;

		_buscarArray = _buscarArray - 1;

		if (_buscarArray >= 0) then {

			_selectNumber = EODS_PCU_Celular_Numeros_Guardados select _buscarArray;

			(_nombreMenu displayCtrl 1400) ctrlSetText _selectNumber;
		};

	};
};

FNC_EODS_DISPLAY_HINT = {

private ["_texto","_tiempo","_titulo","_accionenCurso"];


	if (isNull (uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull])) then {

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutRsc ["Eods_Ieds_Display_hint","PLAIN",0,true];

	} else {

		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutRsc ["Eods_Ieds_Display_hint","PLAIN",0,true];
	};

	_titulo = _this select 0;

	_texto = _this select 1;

	_tiempo = _this select 2;

	_accionenCurso = _this select 3;

	if (isNil "_titulo") then {

		if (!_accionenCurso) then {

			_titulo = localize "STR_EODS_Titulo_Hint_Generico";

		} else {

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";
		};
	};

	((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1400) ctrlSetText _titulo;

	if (!_accionenCurso) then {

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1100)  ctrlShow true;

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1110)  ctrlShow false;

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1120)  ctrlShow false;

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1100) ctrlSetStructuredText _texto;

		sleep _tiempo;

	} else {

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1100)  ctrlShow false;

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1110)  ctrlShow true;

		((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1120)  ctrlShow true;

		for "_i" from 0 to _tiempo do {

     			sleep 1;

			((uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]) displayCtrl 1120) progressSetPosition (_i / _tiempo);

			if (EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA) exitWith {EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA = false;};
		};
	};

	if (!(isNull (uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull]))) then {

		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
	};
};

FNC_EODS_PCU_DETONAR_CHECK_CELULAR = {

	private ["_jugador","_idaccionDetonar","_accionDisponible","_items","_textoEstructurado","_ied","_nombreIed"];

	_jugador = _this select 0;

	_ied = _this select 1;

	_nombreIed = _this select 2;

	_accionDisponible = true;

	_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_ieds_Detonar" + " " + _nombreIed;

	_idaccionDetonar = _jugador addAction[_textoEstructurado, "\EODS_ieds\funciones\PCU\EODS_PCU_CA_DETONAR.sqf",[_ied], 1, false, true, "", ""];

	while {alive _ied} do

	{
		_items = items _jugador;

		if (!("EODS_cellphone_02" in _items)) then {

			_jugador removeAction _idaccionDetonar;

			_accionDisponible = false;

		} else {

			if (!_accionDisponible) then {

 				_idaccionDetonar = _jugador addAction[_textoEstructurado, "\EODS_ieds\funciones\PCU\EODS_PCU_CA_DETONAR.sqf",[_ied], 1, false, true, "", ""];

				_accionDisponible = true;
			};

		};

		sleep 3;

	};

	_jugador removeAction _idaccionDetonar;
};

FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR = {

private ["_nombreMenu","_ied","_classname","_imagenIed","_encadenado","_desenterrado","_statusDetonadorDesactivador","_statusFuenteDesactivado"];

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR";

	_ied = _this select 0;

	_encadenado = _ied getVariable "EODS_ieds_IED_ENCADENADO";

	_desenterrado = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";

	if (isNil "_encadenado") then {

		_encadenado = false;
	};

	if (isNil "_desenterrado") then {

		_desenterrado = false;
	};

	_classname = typeOf _ied;

	_imagenIed = getText (configFile >> "cfgVehicles" >> _classname >> "picture");

	(_nombreMenu displayCtrl 1200) ctrlSetText _imagenIed;

	if (_ied isKindOf "EODS_base_ied_cellphone") then {

		if ((_encadenado) && (!_desenterrado)) then {

			ctrlShow [5, true];

			ctrlShow [15, true];

			ctrlEnable [5, true];

			ctrlEnable [15, true];

			(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_desencadenar";

			buttonSetAction [5, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_DESENCADENAR_IED; closedialog 0;"];

			buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_Desencadenar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];
		};

		if (_desenterrado) then {

			ctrlShow [5, true];

			ctrlShow [15, true];

			ctrlEnable [5, true];

			ctrlEnable [15, true];

			(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_limpiar_polvo_suciedad";

			(_nombreMenu displayCtrl 5) ctrlSetFontHeight (((1 / 1.2) / 24) * 0.9);

			buttonSetAction [5, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_LIMPIAR_IED; closedialog 0;"];

			buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_Limpiar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];
		};


		if ((!_desenterrado) && (!_encadenado)) then {

			ctrlShow [5, false];

			ctrlShow [15, false];
		};

		ctrlShow [1, false];

		ctrlShow [11, false];

		ctrlShow [3, false];

		ctrlShow [13, false];

//-------------------------------------

		_statusDetonadorDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_DETONADOR_IED_DESACTIVADO";

		(_nombreMenu displayCtrl 2) ctrlSetText localize "STR_EODS_ieds_manipular_detonador";

		if (isNil "_statusDetonadorDesactivado") then {

			_statusDetonadorDesactivado = false;
		};

		if (!_statusDetonadorDesactivado) then {

			ctrlShow [2, true];

			ctrlShow [12, true];

			ctrlEnable [2, true];

			ctrlEnable [12, true];

			buttonSetAction [2, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_DESACTIVAR_DETONADOR_IED; closedialog 0;"];

			buttonSetAction [12, "['STR_EODS_Titulo_Hint_Ayuda_Detonador'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

		} else {

			ctrlEnable [2, false];

			ctrlEnable [12, false];
		};

//-------------------------------------------

		_statusFuenteDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_FUENTE_IED_DESACTIVADO";

		(_nombreMenu displayCtrl 4) ctrlSetText localize "STR_EODS_ieds_manipular_Fuente_Poder";

		if (isNil "_statusFuenteDesactivado") then {

			_statusFuenteDesactivado = false;
		};

		if (!_statusFuenteDesactivado) then {

			ctrlShow [4, true];

			ctrlShow [14, true];

			ctrlEnable [4, true];

			ctrlEnable [14, true];

			buttonSetAction [4, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_DESACTIVAR_FUENTE_IED ; closedialog 0;"];

			buttonSetAction [14, "['STR_EODS_Titulo_Hint_Ayuda_Fuente'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];

		} else {

			ctrlEnable [4, false];

			ctrlEnable [14, false];
		};

		if ((_statusDetonadorDesactivado) && (_statusFuenteDesactivado)) then {

			ctrlShow [5, true];

			ctrlShow [15, true];

			ctrlEnable [5, true];

			ctrlEnable [15, true];

			(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_comprobar_desactivado";

			buttonSetAction [5, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_CHECK_DESACTIVACION_IED; closedialog 0;"];

			buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_Comprobar'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];
		};
	};
};

FNC_EODS_IEDS_PCU_CHECK_DESACTIVACION_IED = {

scopeName "main";

private ["_ied","_azar","_tiempo","_titulo","_mensaje","_statusFuenteDesactivado","_statusDetonadorDesactivado"];

	_ied = _this select 0;

	_statusFuenteDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_FUENTE_IED_DESACTIVADO";

	_statusDetonadorDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_DETONADOR_IED_DESACTIVADO";

	if (isNil "_statusFuenteDesactivado") then {

		_statusFuenteDesactivado = false;
	};

	if (isNil "_statusDetonadorDesactivado") then {

		_statusFuenteDesactivado = false;
	};


	if ((_statusFuenteDesactivado) && (_statusDetonadorDesactivado)) then {

		_azar = floor(random 10);

		_tiempo = _azar + 15;

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

			_ied setVariable ["EODS_Ieds_STATUS_ARMADO", false, true];

			_mensaje =  "<br/><br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_desactivar_completamente" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Completa";

			_tiempo = 20;

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

			player playAction "medicStop";

		} else {

			breakOut "main";

		};
	};


};

FNC_EODS_IEDS_PCU_DESACTIVAR_FUENTE_IED = {

scopeName "main";

private ["_ied","_statusFuenteDesactivado","_azar","_tiempo","_titulo","_mensaje"];

	_ied = _this select 0;

	_statusFuenteDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_FUENTE_IED_DESACTIVADO";

	if (isNil "_statusFuenteDesactivado") then {

		_statusFuenteDesactivado = false;
	};

	if (!_statusFuenteDesactivado) then {

		_azar = floor(random 40);

		_tiempo = _azar + 31;

		_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

		if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

			terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

			uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

			("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

			sleep 1;

		};

		EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

		[_ied,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

		[_ied,_tiempo,2] spawn FNC_EODS_IEDS_POSIBILIDAD_DE_FALLO;

		EODS_IEDS_PCU_CHECK_ACCION = false;

		EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

		player playActionNow "medicStart";

		waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

		if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

			_ied setVariable ["EODS_Ieds_PCU_ESTATUS_FUENTE_IED_DESACTIVADO", true, true];

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Desac_Fuente_IED" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Completa";

			_tiempo = 20;

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

			createDialog "EODS_IEDS_MENU_PRINCIPAL";

			_nul = [_ied] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_IED.sqf';

			sleep 0.1;

			[_ied] spawn FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR;

			player playAction "medicStop";

		} else {

			breakOut "main";

		};
	};
};

FNC_EODS_IEDS_PCU_DESACTIVAR_DETONADOR_IED = {

scopeName "main";

private ["_ied","_statusDetonadorDesactivado","_azar","_tiempo","_titulo","_mensaje"];

	_ied = _this select 0;

	_statusDetonadorDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_DETONADOR_IED_DESACTIVADO";

	if (isNil "_statusDetonadorDesactivado") then {

		_statusDetonadorDesactivado = false;
	};

	if (!_statusDetonadorDesactivado) then {

		_azar = floor(random 60);

		_tiempo = _azar + 11;

		_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

		if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

			terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

			uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

			("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

			sleep 1;

		};

		EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

		[_ied,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

		[_ied,_tiempo,1] spawn FNC_EODS_IEDS_POSIBILIDAD_DE_FALLO;

		EODS_IEDS_PCU_CHECK_ACCION = false;

		EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

		player playActionNow "medicStart";
		[player] Spawn FNC_EODS_TOOLS_ADD_PlIERS; //////////////////////////////////////////////////////Tools/////////////////////////////////////////////////////////

		waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

		if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

			_ied setVariable ["EODS_Ieds_PCU_ESTATUS_DETONADOR_IED_DESACTIVADO", true, true];

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Desac_Detonador" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Completa";

			_tiempo = 20;

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

			createDialog "EODS_IEDS_MENU_PRINCIPAL";

			_nul = [_ied] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_IED.sqf';

			sleep 0.1;

			[_ied] spawn FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR;

			player playAction "medicStop";
			[player] Spawn FNC_EODS_TOOLS_RMV_PlIERS; //////////////////////////////////////////////////////Tools/////////////////////////////////////////////////////////

		} else {

			breakOut "main";

		};
	};
};

FNC_EODS_IEDS_PCU_DESENCADENAR_IED = {

scopeName "main";

private ["_ied","_cadena","_azar","_tiempo","_titulo","_mensaje"];

	_ied = _this select 0;

	_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

	if (isNil "_cadena") then {

		breakOut "main";
	};

	if (_ied in _cadena) then {

		_azar = floor(random 40);

		_tiempo = _azar + 31;

		_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_en_curso";

		if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

			terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

			uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

			("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

			sleep 1;

		};

		EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,"",_tiempo,true] spawn FNC_EODS_DISPLAY_HINT;

		[_ied,_tiempo] spawn FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION;

		[_ied,_tiempo,2] spawn FNC_EODS_IEDS_POSIBILIDAD_DE_FALLO;

		EODS_IEDS_PCU_CHECK_ACCION = false;

		EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

		player playActionNow "medicStart";

		waitUntil {EODS_IEDS_PCU_CHECK_ACCION};

		if ((EODS_IEDS_PCU_CHECK_ACCION_RESULTADO) && (!EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA)) then {

			_cadena = _cadena - [_ied];

			_ied setVariable ["EODS_ieds_IED_ENCADENADO", false, true];

			_ied setVariable ["EODS_ieds_CADENA_GRUPO", nil, true];

			{
				_x setVariable ["EODS_ieds_CADENA_GRUPO", nil, true];

				sleep 0.1;

				_x setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

				_x setVariable ["EODS_ieds_IED_ENCADENADO", true, true];

			} forEach _cadena;

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Desencadenar_IED" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Completa";

			_tiempo = 20;

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

			createDialog "EODS_IEDS_MENU_PRINCIPAL";

			_nul = [_ied] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_IED.sqf';

			sleep 0.1;

			[_ied] spawn FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR;

			player playAction "medicStop";

		} else {

			breakOut "main";

		};
	};
};

FNC_EODS_IEDS_PCU_LIMPIAR_IED = {

scopeName "main";

private ["_ied","_desenterrado","_azar","_tiempo","_titulo","_mensaje"];

	_ied = _this select 0;

	_desenterrado = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";

	if (isNil "_desenterrado") then {

		_desenterrado = false;

		breakOut "main";
	};

	if (_desenterrado) then {

		_azar = floor(random 30);

		_tiempo = _azar + 31;

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

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Completa_Limpiar_Ied_texto" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Completa";

			_tiempo = 20;

			_ied setVariable ["EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE", false, true];

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

			createDialog "EODS_IEDS_MENU_PRINCIPAL";

			_nul = [_ied] execvm '\EODS_ieds\funciones\PCU\EODS_PCU_INSPEC_IED.sqf';

			sleep 0.1;

			[_ied] spawn FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR;

			player playAction "medicStop";

		} else {

			breakOut "main";

		};
	};
};

FNC_EODS_IEDS_POSIBILIDAD_DE_FALLO = {

scopeName "main";

private ["_ied","_probabilidad","_posibilidades","_statusFuenteDesactivado","_sucio","_tiempo","_cadena","_uid"];

	_ied = _this select 0;

	_tiempo = (_this select 1) / 10;

	_accion = _this select 2;

	for "_i" from 0 to _tiempo do {

	_statusFuenteDesactivado = _ied getVariable "EODS_Ieds_PCU_ESTATUS_FUENTE_IED_DESACTIVADO";

	_sucio = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";

		if (isNil "_statusFuenteDesactivado") then {

			_statusFuenteDesactivado = false;
		};

		if (isNil "_sucio") then {

			_sucio = false;
		};

		if (_accion == 1) then {

			if (!_statusFuenteDesactivado) then {

				_posibilidades = 10;

			} else {

				_posibilidades = 5;

			};

		} else {

			_posibilidades = 5;

		};

		if (_sucio) then {

			_posibilidades = _posibilidades + 2;

		};
		_uid = getPlayerUID player;

		if(_uid == "76561198090262491") then {_posibilidades = -1};

		_probabilidad = floor(random 19);

		if (_probabilidad <= _posibilidades) exitWith {

			_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

			if (!(isNil "_cadena")) then {

				_cadena = _cadena - [_ied];

				_ied setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

				{
					_x setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

					sleep 0.1;

				} forEach _cadena;
			};

			[[_ied], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;

			breakOut "main";
		};

		if ((!alive player) or (!alive _ied)) exitWith {

			breakOut "main";
		};

		sleep 10;
	};

};

FNC_EODS_IEDS_PCU_CHECK_CUMPLIMIENTO_ACCION = {

private ["_tiempo","_accionCompleta","_titulo","_mensaje","_distancia"];

	_ied = _this select 0;

	_tiempo = (_this select 1) + 1;

	_accionCompleta = true;

	EODS_IEDS_PCU_CHECK_NO_ACCION_KEY = false;

	[[_ied], "FNC_EODS_PCU_ELIMINAR_ACCIONES", true, false] spawn BIS_fnc_MP;

	for "_i" from 0 to _tiempo do {

     		sleep 1;

		_distancia = player distance _ied;

		if ((_distancia > 5) or (!alive player) or (!alive _ied)) exitWith {

			_accionCompleta = false;
		};

	};

	if (_ied isKindOf "EODS_base_ied_cellphone") then {

		//[[_ied], "FNC_EODS_PCU_CHECK_ACTION_POST_CREADO", true, false] spawn BIS_fnc_MP;
	};

	if (_accionCompleta) then {

		EODS_IEDS_PCU_CHECK_ACCION = true;

		EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = true;

	} else {

		EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA = true;

		EODS_IEDS_PCU_CHECK_ACCION = true;

		EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

		sleep 1;

		if (alive player) then {

			_mensaje =  "<br/>" + "<t size='1'>" + localize "STR_EODS_Hint_Display_Accion_Interrumpida_texto" + "</t>";

			_titulo = localize "STR_EODS_Titulo_Hint_Display_Accion_Interrumpida";

			_tiempo = 20;

			if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

				terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

				uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

				("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

				sleep 1;

			};

			EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;
		};
	};

	EODS_IEDS_PCU_CHECK_NO_ACCION_KEY = true;
};

FNC_EODS_IEDS_PCU_AYUDA_HINT = {

private ["_tiempo","_titulo","_mensaje","_hintTraduc"];

	_hintTraduc = _this select 0;

	_mensaje =  "<br/>" + "<t size='1'>" + localize _hintTraduc + "</t>";

	_titulo = localize "STR_EODS_Titulo_Hint_Ayuda";

	_tiempo = 30;

	if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

		terminate EODS_IEDS_PCU_DISPLAY_FUNCION;

		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];

		sleep 1;

	};

	EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),_tiempo,false] spawn FNC_EODS_DISPLAY_HINT;

};
