EODS_APOBS_FIRE_AND_CREATE_EMPTY = {

private ["_vehicule","_dir_array","_explosionPoints","_dir_degrees","_pos","_model_Empty","_model_Fired","_modelCharge","_model","_modelRocket","_vel","_Rocket","_posR","_APOBS_FIRED","_APOBS_EMPTY","_wait","_blast","_memoryPoint"];

	_vehicule = _this select 0;

	_dir_array = _this select 1;

	_explosionPoints = [];

	_dir_degrees = (_dir_array select 0) atan2 (_dir_array select 1);

	If (_dir_degrees < 0) Then {_dir_degrees = _dir_degrees + 360;};

	//player sideChat format["dir deg %1", _dir_degrees]; 

	Sleep 20;

	_pos = getpos _vehicule;

	_model_Empty = "APOBS_Empty";

	_model_Fired = "APOBS_Fired";

	_modelCharge = "APOBS_Charge_Script";

	//_model = "GrenadeHand";

	_model = "R_PG32V_F";

	//_modelRocket = "Fake_APOBS_Rocket";

	_modelRocket = "APOBS_Alternative_Rocket";

	// Create Rocket

	_vel = [sin _dir_degrees * 20, cos _dir_degrees * 20,sin 45 * 20];

	_Rocket = createVehicle [_modelRocket, [0,0,0], [], 0, "CAN_COLLIDE"];

	_Rocket setdir _dir_degrees;

	_posR = _Rocket attachTo [_vehicule, [0,1,0], "usti hlavne"];

	detach _Rocket;

	_dummy = createVehicle ["B_UAV_01_F", position _vehicule, [], 0, "CAN_COLLIDE"];

	[[_dummy,true], "FNC_EODS_HIDE", true, false] spawn BIS_fnc_MP;

	_dummy attachto [_Rocket,[0,0,0]]; 

	_rpend = ropeCreate [_dummy, [0,0,0], 50];

	_Rocket setVelocity _vel;

	//_Rocket setdir _dir_degrees;

	[[_Rocket,"APOBS_rocket_Sound"], "FNC_EODS_SAY3D", true, false] spawn BIS_fnc_MP;

	[[_Rocket], "EODS_APOBS_PARTICLES", true, false] spawn BIS_fnc_MP;

	deletevehicle _vehicule;

	_APOBS_FIRED = createVehicle [_model_Fired, [_pos select 0, _pos select 1, 0.01], [], 0, "CAN_COLLIDE"];

	_APOBS_FIRED setdir _dir_degrees;

	_APOBS_FIRED setVehicleLock "LOCKED";

	//_APOBS_FIRED setpos _pos;

	sleep 3;

	waitUntil {(getPos _Rocket select 2) <= 1};

	_Rocket setdir _dir_degrees;

	Charge = createVehicle [_modelCharge, [0,0,0], [], 0, "CAN_COLLIDE"];

	Charge setdir _dir_degrees;

	Charge attachTo [_Rocket, [0,-16.5,0.1], "usti hlavne"];

	detach Charge;

	Charge setdir _dir_degrees;

	deletevehicle _APOBS_FIRED;

	_APOBS_EMPTY = createVehicle [_model_Empty, [_pos select 0, _pos select 1, 0.01], [], 0, "CAN_COLLIDE"];

	_APOBS_EMPTY setdir _dir_degrees;

	_APOBS_EMPTY setVehicleLock "LOCKED";

	_wait = floor(random 5);

	_wait = _wait + 5;

	sleep _wait;

	deletevehicle _Rocket;

	deletevehicle _dummy;

	for "_i" from 1 to 40 do{

		_blast = _model createVehicle [0,0,0];

		_explosionPoints = _explosionPoints + [_blast];
	
		_memoryPoint = str _i;

		_blast attachTo [Charge, [0,0,0], _memoryPoint];
	
		sleep 0.0001;

		detach _blast;
	};	
};