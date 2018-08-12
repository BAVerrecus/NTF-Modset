EODS_ABV_MP_SPAWN_BUG_FIX = {

private ["_vehicule","_pos","_ABV_FIX","_className"];

	if (isNil "EODS_ABV_BUG_VEHICLE") then {

		EODS_ABV_BUG_VEHICLE = objNull;

		publicVariable "EODS_ABV_BUG_VEHICLE";
	};

	if (isNull EODS_ABV_BUG_VEHICLE) then {

		_vehicule = _this select 0;

		_pos = getPosATL _vehicule;

		_dir_degrees = getdir _vehicule;

		deletevehicle _vehicule;

		_ABV_FIX = createVehicle ["ABV", [_pos select 0, _pos select 1, 0.01], [], 0, "CAN_COLLIDE"];

		_ABV_FIX setdir _dir_degrees;

		hint str _ABV_FIX;

		EODS_ABV_BUG_VEHICLE = _ABV_FIX;

	} else {

		EODS_ABV_BUG_VEHICLE = objNull;
	};

	publicVariable "EODS_ABV_BUG_VEHICLE";
};