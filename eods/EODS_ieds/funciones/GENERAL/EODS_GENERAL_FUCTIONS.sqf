/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

//VARIABLES GLOBALES

//EODS_Ieds_ia_con_celular
//EODS_Ieds_sincronizados

//VARIABLES GLOBALES MULTIPLAYER

//EODS_ied_creados_usuario

//FUNCIONES

EODS_caida_at = ["AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon"]; // launcher fall animations
EODS_caida_at_up = [""]; // launcher get up animations
EODS_caida_rifle = ["AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright","AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft"]; // rifle fall animations
EODS_caida_rifle_up = ["AadjPpneMstpSrasWrflDright_AmovPercMstpSrasWrflDnon","AadjPpneMstpSrasWrflDleft_AmovPercMstpSrasWrflDnon"]; // rifle get up animations
EODS_caida_pistol = ["AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft","AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright"]; // pistol fall animation
EODS_caida_pistol_up = ["AadjPpneMstpSrasWpstDleft_AmovPercMstpSrasWpstDnon","AadjPpneMstpSrasWpstDright_AmovPercMstpSrasWpstDnon"]; // pistol get up animations
EODS_caida_sinarma = ["aparpercmstpsnonwnondnon_amovppnemstpsnonwnondnon"]; // unarmed fall animations
EODS_caida_sinarma_up = ["AmovPpneMstpSrasWnonDnon_AmovPercMstpSnonWnonDnon"]; //unarmed get up animations
EODS_caida_en_suelo = ["aadjppnemstpsraswrfldup","amovpercmstpsraswrfldnon_aadjppnemstpsraswrfldleft","amovpercmstpsraswrfldnon_aadjppnemstpsraswrfldright","aadjppnemstpsraswrflddown","amovppnemstpsraswrfldnon_amovppnemevaslowwrfldr","aadjppnemstpsraswrfldright_amovppnemstpsraswrfldnon","aadjppnemwlksraswrfldright_l","aadjppnemwlksraswrfldright_r","amovppnemsprslowwrfldb","aadjppnemwlksraswrfldleft_r","aadjppnemwlksraswrfldleft_l","aadjppnemstpsraswrfldleft","amovppnemstpsraswrfldnon_aadjppnemstpsraswrfldleft","amovpercmstpsraswrfldnon_amovppnemstpsraswrfldnon","amovppnemstpsnonwnondnon","aadjppnemstpsraswpstdright","aadjppnemstpsraswpstdleft","amovppnemstpsraswpstdnon","aadjppnemstpsraswpstddown","amovppnemstpsraswrfldnon","aadjppnemstpsraswrfldright","aadjppnemstpsraswrfldleft","aadjppnemstpsraswrflddown"];

EODS_ehExplosiveSuperClasses = ["RocketCore", "MissileCore", "SubmunitionCore", "GrenadeHand", "GrenadeCore", "ShellCore", "TimeBombCore", "BombCore", "Grenade"];
publicVariable "EODS_ehExplosiveSuperClasses";

EODS_projectilesToIgnore = ["SmokeShell", "FlareCore", "IRStrobeBase", "GrenadeHand_stone", "Smoke_120mm_AMOS_White", "TMR_R_DG32V_F"];
publicVariable "EODS_projectilesToIgnore";

call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\EODS_GENERAL_FUCTIONS_CLIENTSIDE.sqf";

EODS_PCU_Reproducir_Efectos_Celular = false;

FNC_EODS_SWITCHMOVE = {

	_objecto = _this select 0;

	_animacion = _this select 1;

	if(alive _objecto) then {

		_objecto switchMove _animacion;
	};
};

FNC_EODS_SAY3D = {

	_objecto = _this select 0;

	_sonido = _this select 1;

	if(alive _objecto) then {

		_objecto say3D _sonido;
	};
};

FNC_EODS_HIDE = {

	_objecto = _this select 0;

	_bol = _this select 1;

	if(_bol) then {

		_objecto hideObject true;

	} else {

		_objecto hideObject false;
	};
};

FNC_SELEC_RINGTONE = {

private ["_enterrado","_tipoRingtone","_ied"];

	_ied = _this select 0;

	_enterrado = _this select 1;

	_tipoRingtone = floor(random 4);

	if (!_enterrado) then {

		switch (_tipoRingtone) do {

			case 0:

			{

			[[_ied,"EODS_ringtone_01"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 1:

			{

			[[_ied,"EODS_ringtone_02"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 2:

			{

			[[_ied,"EODS_ringtone_03"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 3:

			{

			[[_ied,"EODS_ringtone_04"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 4:

			{

			[[_ied,"EODS_ringtone_05"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};
		};

	} else {

		switch (_tipoRingtone) do {

			case 0:

			{

			[[_ied,"EODS_ringtone_01_enterrado"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 1:

			{

			[[_ied,"EODS_ringtone_02_enterrado"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 2:

			{

			[[_ied,"EODS_ringtone_03_enterrado"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 3:

			{

			[[_ied,"EODS_ringtone_04_enterrado"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};

			case 4:

			{

			[[_ied,"EODS_ringtone_05_enterrado"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

			};
		};

	};
};

FNC_EODS_EXPLOSION = {

private ["_cadena","_autRingtone","_probabilidad","_restos","_espera","_syncro","_tierra","_enterrado","_ied","_tipoMetralla","_explosion","_posicion","_tipodebomba","_numeroexplisiones","_numerofragmentos","_maxAfecDistancia","_hombres","_radioCaida","_escondido","_objetoContenedor"];

	_ied = _this select 0;
	//Debug

	if (alive _ied) then {

		_posicion = getpos _ied;

		_tipodebomba = "";

		_numeroexplisiones = 1;

		_numerofragmentos = 400;

		_maxAfecDistancia = 200;

		_radioCaida = 75;

		_tipoMetralla = "B_408_Ball";

		_espera	 = 1;

		switch (typeOf _ied) do {

   			case "EODS_ied01": {

				_tipodebomba = "Bo_GBU12_LGB_MI10";

				_numeroexplisiones = 1;

				_numerofragmentos = 120;

				_maxAfecDistancia = 200;

				_radioCaida = 75;

				_tipoMetralla = "B_408_Ball";
			};

   			case "EODS_ied02": {

				_tipodebomba = "Bo_GBU12_LGB_MI10";

				_numeroexplisiones = 1;

				_numerofragmentos = 200;

				_maxAfecDistancia = 300;

				_radioCaida = 90;

				_tipoMetralla = "B_127x99_Ball";
			};

   			case "EODS_ied03": {

				_tipodebomba = "Bo_GBU12_LGB_MI10";

				_numeroexplisiones = 2;

				_numerofragmentos = 100;

				_maxAfecDistancia = 350;

				_radioCaida = 100;

				_tipoMetralla = "B_408_Ball";
			};

   			case "EODS_ied04": {

				_tipodebomba = "R_80mm_HE";

				_numeroexplisiones = 1;

				_numerofragmentos = 100;

				_maxAfecDistancia = 105;

				_radioCaida = 25;

				_tipoMetralla = "B_408_Ball";
			};

   			case "EODS_ied05": {

				_tipodebomba = "Bo_GBU12_LGB_MI10";

				_numeroexplisiones = 1;

				_numerofragmentos = 80;

				_maxAfecDistancia = 150;

				_radioCaida = 75;

				_tipoMetralla = "B_408_Ball";
			};

   			case "EODS_ied06": {

				_tipodebomba = "Bo_GBU12_LGB_MI10";

				_numeroexplisiones = 1;

				_numerofragmentos = 150;

				_maxAfecDistancia = 180;

				_radioCaida = 80;

				_tipoMetralla = "B_408_Ball";
			};

   			case "EODS_ied07": {

				_tipodebomba = "R_80mm_HE";

				_numeroexplisiones = 1;

				_numerofragmentos = 130;

				_maxAfecDistancia = 120;

				_radioCaida = 35;

				_tipoMetralla = "B_408_Ball";
			};
/*
				case "EODS_122mm_USSR_IED_PP": {
					_tipodebomba = "Bo_GBU12_LGB_MI10";

					_numeroexplisiones = 1;

					_numerofragmentos = 150;

					_maxAfecDistancia = 180;

					_radioCaida = 80;

					_tipoMetralla = "B_408_Ball";
				};
				case "EODS_ied_B_PressurePlate": {
					_tipodebomba = "Bo_GBU12_LGB_MI10";

					_numeroexplisiones = 1;

					_numerofragmentos = 150;

					_maxAfecDistancia = 180;

					_radioCaida = 80;

					_tipoMetralla = "B_408_Ball";
				};
*/
    			default {

				_tipodebomba = "R_80mm_HE";

				_numeroexplisiones = 1;

				_numerofragmentos = 30;

				_maxAfecDistancia = 105;

				_radioCaida = 25;

				_tipoMetralla = "B_408_Ball";

			};
		};

		_enterrado = _ied getVariable "EODS_Ieds_HIDDEN_ENTERRADO";

		_escondido = _ied getVariable "EODS_Ieds_HIDDEN_ESCONDIDO";

		_desenterradoRecientemente = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";

		if (isNil "_enterrado") then {

			_enterrado = false;
		};

		if (isNil "_escondido") then {

			_escondido = false;
		};


		if (isNil "_desenterradoRecientemente") then {

			_desenterradoRecientemente = false;
		};

		if ((_ied isKindOf "EODS_base_ied_cellphone") && (EODS_PCU_Reproducir_Efectos_Celular)) then {

			[_ied,_enterrado] spawn FNC_SELEC_RINGTONE;

			_espera = floor(random 3);

			_espera = _espera + 1;

			sleep _espera;

			EODS_PCU_Reproducir_Efectos_Celular = false;
		};

		if (_enterrado) then {

			detach _ied;

			_tierra = _ied getVariable "EODS_Ieds_HIDDEN_TIERRA";

			deleteVehicle _tierra;

			_ied setPos [getPos _ied select 0, getPos _ied select 1, 0];

			sleep 0.1;
		};

		if (_escondido) then {

			detach _ied;

			_objetoContenedor = _ied getVariable "EODS_Ieds_HIDDEN_ESCONDIDO_OBJETO";

			if ((_objetoContenedor isKindOf "Car") or (_objetoContenedor isKindOf "Tank") or (_objetoContenedor isKindOf "Plane") or (_objetoContenedor isKindOf "Helicopter") or (_objetoContenedor isKindOf "Ship")) then {

				_posicion = getpos _objetoContenedor;

			} else {

				deleteVehicle _objetoContenedor;
			};
		};

		if (_desenterradoRecientemente) then {

			detach _ied;

			_tierra = _ied getVariable "EODS_Ieds_PCU_TIERRA_POST_ENTERRAR";

			deleteVehicle _tierra;

			_ied setPos [ getPos _ied select 0, getPos _ied select 1, 0];

			sleep 0.1;
		};

		_hombres = nearestObjects [_posicion, ["Man"], _radioCaida];

		{
			[_x] spawn FNC_EODS_CAIDA;

		} forEach _hombres;

		[[_posicion,_maxAfecDistancia] , "EODS_EFECTOS_JUGADOR", true, false] spawn BIS_fnc_MP;

		//[[_posicion,_ied] , "EODS_EFECTOS_GENERAL", true, false] spawn BIS_fnc_MP;

		for "_i" from 1 to _numeroexplisiones do{

			_explosion = createVehicle [_tipodebomba, _posicion, [], 0, "CAN_COLLIDE"];

			_ied setpos [0,0,0];

			[_posicion,_numerofragmentos,_tipoMetralla] spawn FNC_EODS_METRALLA;

			[[_posicion] , "EODS_EFECTOS_ROCKS", true, false] spawn BIS_fnc_MP;
		};

		_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

		if (isNil "_cadena") then {

			_syncro = false;

		} else {

			if (_ied in _cadena) then {

				_cadena = _cadena - [_ied];

				_syncro = true;

			} else {

				_syncro = false;

			};
		};

		if (_syncro) then {

			{
				if (_x isKindOf "EODS_base_ied_cellphone") then {

					_cadena = _cadena - [_x];

					_x setVariable ["EODS_ieds_CADENA_GRUPO", nil, true];

					_espera = floor(random 2);

					_espera = _espera + 0.8;

					sleep _espera;

					[_x] spawn FNC_EODS_EXPLOSION;
				};

			} forEach _cadena;
		};

		deleteVehicle _ied;

		_probabilidad = floor(random 9);

		if (_probabilidad <= 1) then {

			_restos = "Land_HelipadEmpty_F" createVehicle _posicion;

			_espera = floor(random 10);

			sleep _espera;

			[_restos] spawn FNC_EODS_SEC_EXPLOSION;
		};
	};
};

FNC_EODS_SEC_EXPLOSION = {

private ["_probabilidad","_ied","_tipoMetralla","_explosion","_posicion","_tipodebomba","_numeroexplisiones","_numerofragmentos","_maxAfecDistancia","_hombres","_radioCaida"];

		_ied = _this select 0;

		_posicion = getpos _ied;

		_tipoMetralla = "B_408_Ball";

		_espera	 = 1;

		_tipodebomba = "R_80mm_HE";

		_numeroexplisiones = 1;

		_numerofragmentos = 25;

		_maxAfecDistancia = 105;

		_radioCaida = 25;

		_hombres = nearestObjects [_posicion, ["Man"], _radioCaida];

		{
			[_x] spawn FNC_EODS_CAIDA;

		} forEach _hombres;

		[[_posicion,_maxAfecDistancia] , "EODS_EFECTOS_JUGADOR", true, false] spawn BIS_fnc_MP;

		//[[_posicion,_ied] , "EODS_EFECTOS_GENERAL", true, false] spawn BIS_fnc_MP;

		_explosion = createVehicle [_tipodebomba, position _ied, [], 0, "CAN_COLLIDE"];

		_ied setpos [0,0,0];

		[_posicion,_numerofragmentos,_tipoMetralla] spawn FNC_EODS_METRALLA;
};

FNC_EODS_METRALLA = {

	_pos = _this select 0;
	_fragmentos = _this select 1;
	_metralla = _this select 2;

		for "_i" from 0 to _fragmentos - 1 do{
			_pos set[2,.1 + random 2];
			_bullet = _metralla createVehicle _pos;
			_angle = random 360;
			_speed = 450 + random 100;
			_bullet setVelocity [_speed*cos(_angle), _speed*sin(_angle), -1*(random 4)];
		};

};

FNC_EODS_CAIDA = {

	private["_estadoAnimacion","_sujeto","_tipodearma","_armaactual","_pistola","_armaprimaria","_armasecundaria","_animacionSeleccionada"];

	_sujeto = _this select 0;

	_animacionSeleccionada	= "";

	_armaactual = currentweapon _sujeto;
	_pistola = handgunweapon _sujeto;
	_armaprimaria = primaryweapon _sujeto;
	_armasecundaria = secondaryweapon _sujeto;

	 switch _armaactual do
		{
		case "":
			{
			_tipodearma = 0;
			};
		case _pistola:
			{
			_tipodearma = 1;
			};
		case _armaprimaria:
			{
			_tipodearma = 2;
			};
		case _armasecundaria:
			{
			_tipodearma = 3;
			};
		default
			{
			_tipodearma = 0;
			};
		};

	sleep random (1);

	_estadoAnimacion = animationState _sujeto;

	if ((!(_estadoAnimacion in EODS_caida_en_suelo)) && (!(_estadoAnimacion in EODS_caida_sinarma)) && (!(_estadoAnimacion in EODS_caida_pistol)) && (!(_estadoAnimacion in EODS_caida_rifle)) && (!(_estadoAnimacion in EODS_caida_at))) then {

		switch _tipodearma do
		{
			case 0:
			{
				_animacionSeleccionada = EODS_caida_sinarma select floor random count EODS_caida_sinarma;
				[[_sujeto,_animacionSeleccionada], "FNC_EODS_SWITCHMOVE", true, false] spawn BIS_fnc_MP;

			};
			case 1:
			{
				_animacionSeleccionada = EODS_caida_pistol select floor random count EODS_caida_pistol;
				[[_sujeto,_animacionSeleccionada], "FNC_EODS_SWITCHMOVE", true, false] spawn BIS_fnc_MP;
			};
			case 2:
			{
				_animacionSeleccionada = EODS_caida_rifle select floor random count EODS_caida_rifle;
				[[_sujeto,_animacionSeleccionada], "FNC_EODS_SWITCHMOVE", true, false] spawn BIS_fnc_MP;
			};
			case 3:
			{
				_animacionSeleccionada = EODS_caida_at select floor random count EODS_caida_at;
				[[_sujeto,_animacionSeleccionada], "FNC_EODS_SWITCHMOVE", true, false] spawn BIS_fnc_MP;
			};

		};

	};

};
