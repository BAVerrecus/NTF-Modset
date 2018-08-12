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

//-------------------------------------------------------------------------------------------

EODS_EXPLOSIVOS_EVENT = {

		_arrayHit = _this select 0;
		_ied = _arrayHit select 0;

		_causante =  _arrayHit select 6 select 4;

		_esExplosvio = false;
		_esBalaExplosiva = false;

		{
			if(_causante iskindof _x) then {
				_esExplosvio = true;
			};
		} foreach EODS_ehExplosiveSuperClasses;

		if(! _esExplosvio) then
		{
			_valorExplosivo = getNumber(configfile >> "CfgAmmo" >> format["%1", _causante] >> "explosive");
			if(_valorExplosivo > 0) then {
				_esBalaExplosiva = true;
			};
		};

		{
			if(_causante iskindof _x) then{
				_esExplosvio = false;
				_esBalaExplosiva = false;
			}
		} foreach EODS_projectilesToIgnore;

		if((_esExplosvio) or (_esBalaExplosiva)) then {

			_posbilidadDeExplosion = 100;

			if((_causante iskindof "GrenadeCore") or (_causante iskindof "GrenadeHand") or (_causante iskindof "Grenade")) then { _posbilidadDeExplosion = 10; };

			if(_esBalaExplosiva) then {_posbilidadDeExplosion = 15;};

			_r = floor(random 100);

			if(_r <= _posbilidadDeExplosion) then {

				_cadena = _ied getVariable "EODS_ieds_CADENA_GRUPO";

				if (!(isNil "_cadena")) then {

					_cadena = _cadena - [_ied];

					_ied setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

					{
						_x setVariable ["EODS_ieds_CADENA_GRUPO", _cadena, true];

					} forEach _cadena;
				};

				[[_ied], "EODS_REMOVER_EVENT_HANDLER", true, false] spawn BIS_fnc_MP;

				[[_ied], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;
			};
		};
};

EODS_IED_RECIBE_GOLPE = {

private ["_ied","_impacto"];

_ied = _this select 0;

_impacto = _this select 4;


	if (_impacto >= 5) then {

		[[_ied], "EODS_REMOVER_EVENT_HANDLER", true, false] spawn BIS_fnc_MP;

		[[_ied], "FNC_EODS_EXPLOSION", false, false] spawn BIS_fnc_MP;
	};
};

EODS_ANADIR_EVENT_HANDLER = {

	_ied = _this select 0;

	_ied addEventHandler ["HitPart", {_this call EODS_EXPLOSIVOS_EVENT;}];

	_ied addEventHandler ["EpeContact", {_this call EODS_IED_RECIBE_GOLPE;}];


};

EODS_REMOVER_EVENT_HANDLER = {

	_ied = _this select 0;

	_ied removeAllEventHandlers "HitPart";

	_ied removeAllEventHandlers "EpeContact";
};

//-------------------------------------------------------------------------------------------

EODS_EFECTOS_JUGADOR = {
	//http://forums.bistudio.com/showthread.php?172864-Any-idea-how-this-was-done
	_iedPos = _this select 0;
	_afecMax = _this select 1;
	if(alive player) then {
		_distance = (getpos player) distance _iedPOS;
		if(_distance < 75) then {
			_volume = linearConversion [0,60,75-_distance, 0.1, 1, true];
			//playSound3d["A3\Missions_F_EPA\data\sounds\combat_deafness.wss", player, false, getpos player, _volume];
			playSound "sordera1";
			addCamShake[1+random 15, 1+random 3, 5+random 15];
		};
		if(_distance < 40) then {

			addCamShake[20, 1+random 3, 25];

			[] spawn {
				private ["_blur"];
				_blur = ppEffectCreate ["DynamicBlur", 474];
				_blur ppEffectEnable true;
				_blur ppEffectAdjust [0];
				_blur ppEffectCommit 0;

				waitUntil {ppEffectCommitted _blur};

				_blur ppEffectAdjust [10];
				_blur ppEffectCommit 0;

				_blur ppEffectAdjust [0];
				_blur ppEffectCommit 5;

				waitUntil {ppEffectCommitted _blur};

				_blur ppEffectEnable false;
				ppEffectDestroy _blur;
			};

			[] spawn EODS_EFECTOS_JUGADOR_ATURDIMIENTO_SEVERO;

			//[] spawn EODS_EFECTOS_JUGADOR_PERDIDA_EQUILIBRIO;

		};


		if(_distance > 40 && _distance < 75) then {

			[] spawn EODS_EFECTOS_JUGADOR_ATURDIMIENTO_LEVE;

		};

		if(_distance > 75 && _distance < 100) then {

			addCamShake[1+random 5, 1+random 3, 5+random 15];

			[] spawn EODS_EFECTOS_JUGADOR_ATURDIMIENTO_MUY_LEVE;

		};

		if(_distance > 100 && _distance < _afecMax) then {

			sleep random (2);

			addCamShake[1, 1+random 3, 1+random 10];

		};
	};
};

EODS_EFECTOS_JUGADOR_ATURDIMIENTO_SEVERO = {

	if(alive player) then {

		player setFatigue 1;

		addCamShake[1, 15, 7];

		sleep 15;

		player setFatigue 1;

		addCamShake[1, 15, 7];

		playSound "sordera1";

		[] spawn {
			private ["_blur"];
			_blur = ppEffectCreate ["DynamicBlur", 474];
			_blur ppEffectEnable true;
			_blur ppEffectAdjust [0];
			_blur ppEffectCommit 0;

			waitUntil {ppEffectCommitted _blur};

			_blur ppEffectAdjust [10];
			_blur ppEffectCommit 0;

			_blur ppEffectAdjust [0];
			_blur ppEffectCommit 5;

			waitUntil {ppEffectCommitted _blur};

			_blur ppEffectEnable false;
			ppEffectDestroy _blur;
		};

		sleep 15;

		player setFatigue 1;

		addCamShake[1, 15, 3];

		sleep 15;

		playSound "sordera1";

		[] spawn {
			private ["_blur"];
			_blur = ppEffectCreate ["DynamicBlur", 474];
			_blur ppEffectEnable true;
			_blur ppEffectAdjust [0];
			_blur ppEffectCommit 0;

			waitUntil {ppEffectCommitted _blur};

			_blur ppEffectAdjust [10];
			_blur ppEffectCommit 0;

			_blur ppEffectAdjust [0];
			_blur ppEffectCommit 5;

			waitUntil {ppEffectCommitted _blur};

			_blur ppEffectEnable false;
			ppEffectDestroy _blur;
		};

		player setFatigue 1;

		addCamShake[1, 15, 3];

	};
};

EODS_EFECTOS_JUGADOR_PERDIDA_EQUILIBRIO = {

	for "_i" from 1 to 30 do{

		if(alive player) then {

			_probabilidad = floor(random 100);

			if(_probabilidad < 10) then {

				[player] spawn FNC_EODS_CAIDA;

				playSound "sordera1";

				[] spawn {
					private ["_blur"];
					_blur = ppEffectCreate ["DynamicBlur", 474];
					_blur ppEffectEnable true;
					_blur ppEffectAdjust [0];
					_blur ppEffectCommit 0;

					waitUntil {ppEffectCommitted _blur};

					_blur ppEffectAdjust [10];
					_blur ppEffectCommit 0;

					_blur ppEffectAdjust [0];
					_blur ppEffectCommit 5;

					waitUntil {ppEffectCommitted _blur};

					_blur ppEffectEnable false;
					ppEffectDestroy _blur;
				};

			};

			sleep 2;
		};

	};

};

EODS_EFECTOS_JUGADOR_ATURDIMIENTO_LEVE = {

	if(alive player) then {

		player setFatigue 0.7;

		addCamShake[1, 15, 3];

		sleep 15;

		player setFatigue 0.7;

		addCamShake[1, 15, 3];
	};

};

EODS_EFECTOS_JUGADOR_ATURDIMIENTO_MUY_LEVE = {

	if(alive player) then {

		player setFatigue 0.4;

		addCamShake[1, 15, 1];

	};

};

EODS_EFECTOS_GENERAL = {

	_loc = _this select 0;

	_aslLoc = [_loc select 0, _loc select 1, getTerrainHeightASL [_loc select 0, _loc select 1]];

	//[_aslLoc] spawn { call EODS_EFECTOS_NUBEPOLVO};

	//_cantidadFuego = floor(random 20) + 5;

		//if (_cantidadFuego > 0) then {

			//for "_i" from 0 to _cantidadFuego - 1 do{

				//[[_loc] , "EODS_EFECTOS_FUEGO", true, false] spawn BIS_fnc_MP;

			//};
		//};

};

EODS_EFECTOS_NUBEPOLVO = {
		//.55, .47, .37 sand color
	//.78, .76, .71 whitish color
	//.1, .1, .1 dark gray
	//0, 0, 0 black
	_aslLoc = _this select 0;


	_smoke3 = "#particlesource" createVehicleLocal _aslLoc;
	_smoke3 setposasl _aslLoc;
	_smoke3 setParticleCircle [0, [0, 0, 0]];
	_smoke3 setParticleRandom [0, [5, 5, 0], [11, 11, 1], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0];
	_smoke3 setParticleParams [["\A3\data_f\cl_fireD", 1, 0, 1], "", "Billboard", 1, 15, [0, 0, 0], [0, 0, 0], 0, 10, 12, .375, [8, 12, 16], [[.1, .1, .1, 1], [.35, .35, .35, 0.95], [0.35, 0.35, 0.35, 0]], [0.08], 1, 0, "", "", _aslLoc];
	_smoke3 setDropInterval .001;

	_smoke4 = "#particlesource" createVehicleLocal _aslLoc;
	_smoke4 setposasl _aslLoc;
	_smoke4 setParticleCircle [0, [0, 0, 0]];
	_smoke4 setParticleRandom [0, [5, 5, 0], [11, 11, 1], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0];
	_smoke4 setParticleParams [["\A3\data_f\cl_fireD", 1, 0, 1], "", "Billboard", 1, 15, [0, 0, 0], [0, 0, 0], 0, 10, 12, .375, [8, 12, 16], [[0, 0, 0, 1], [.35, .35, .35, 0.95], [0.35, 0.35, 0.35, 0]], [0.08], 1, 0, "", "", _aslLoc];
	_smoke4 setDropInterval .001;

	_smokes = [_smoke3,_smoke4];

	sleep 2;
	{
		deletevehicle _x;
	} foreach _smokes;

};

EODS_EFECTOS_ROCKS = {
	_loc = _this select 0;
	_aslLoc = [_loc select 0, _loc select 1, getTerrainHeightASL [_loc select 0, _loc select 1]];
	_col = [0,0,0];
	_c1 = _col select 0;
	_c2 = _col select 1;
	_c3 = _col select 2;

	_rocks1 = "#particlesource" createVehicleLocal _aslLoc;
	_rocks1 setposasl _aslLoc;
	_rocks1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.45, .45], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks1 setParticleRandom [0, [1, 1, 0], [15, 15, 10], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks1 setDropInterval 0.01;
	_rocks1 setParticleCircle [0, [0, 0, 0]];

	_rocks2 = "#particlesource" createVehicleLocal _aslLoc;
	_rocks2 setposasl _aslLoc;
	_rocks2 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.27, .27], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks2 setParticleRandom [0, [1, 1, 0], [15, 15, 10], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks2 setDropInterval 0.01;
	_rocks2 setParticleCircle [0, [0, 0, 0]];

	_rocks3 = "#particlesource" createVehicleLocal _aslLoc;
	_rocks3 setposasl _aslLoc;
	_rocks3 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 12.5, [0, 0, 0], [0, 0, 15], 5, 100, 7.9, 1, [.09, .09], [[0.1, 0.1, 0.1, 1], [0.25, 0.25, 0.25, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", _aslLoc,0,false,0.3];
	_rocks3 setParticleRandom [0, [1, 1, 0], [15, 15, 10], 3, 0.25, [0, 0, 0, 0.1], 0, 0];
	_rocks3 setDropInterval 0.01;
	_rocks3 setParticleCircle [0, [0, 0, 0]];


	_rocks = [_rocks1,_rocks2, _rocks3];
	sleep .125;
	{
		deletevehicle _x;
	} foreach _rocks;
};

EODS_EFECTOS_FUEGO = {

	_loc = _this select 0;

	_timpodeEspera2 = random 60;

	_timpodeEspera2 = _timpodeEspera2 + 20;

	_thingToFling = "ArrowDesk_L_F" createVehicleLocal [0,0,0];
	_thingToFling hideObject true;
	_thingToFling setPos _loc;
	_thingToFling setVelocity [(random 35)-20, (random 35)-20, 3+(random 20)];
	_thingToFling allowDamage false;

	_source = "#particlesource" createVehicleLocal _loc;
	_source setParticleClass "SmallDestructionFire";
	_source attachto [_thingToFling,[0,0,0]];

	sleep _timpodeEspera2;

	_thingToFling setpos [0,0,0];
	deletevehicle _source;
	deletevehicle _thingToFling;
};
