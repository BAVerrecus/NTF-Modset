EODS_APOBS_MP_SPAWN_BUG_FIX = {

private ["_vehicule","_pos","_APOBS_FIX","_className"];

	if (isNil "EODS_APOBS_BUG_VEHICLE") then {

		EODS_APOBS_BUG_VEHICLE = objNull;

		publicVariable "EODS_APOBS_BUG_VEHICLE";
	};

	if (isNull EODS_APOBS_BUG_VEHICLE) then {

		_vehicule = _this select 0;

		_pos = getPosATL _vehicule;

		_dir_degrees = getdir _vehicule;

		deletevehicle _vehicule;

		_APOBS_FIX = createVehicle ["APOBS", [_pos select 0, _pos select 1, 0.01], [], 0, "CAN_COLLIDE"];

		_APOBS_FIX setdir _dir_degrees;

		EODS_APOBS_BUG_VEHICLE = _APOBS_FIX;

	} else {

		EODS_APOBS_BUG_VEHICLE = objNull;
	};

	publicVariable "EODS_APOBS_BUG_VEHICLE";
};