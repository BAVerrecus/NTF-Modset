scopeName "main";

private ["_vehicule","_weapons","_weap","_dir_array"];

	_vehicule = _this select 0;

	_vehiculePlayer = vehicle player;

if (_vehiculePlayer == _vehicule) then {

	_weapons = getArray (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "Turrets" >> "MainTurret" >> "weapons");

	_weap = _weapons select 0;

	_dir_array = (vehicle player) weaponDirection _weap;

//execute the following code only in the server

	[[_vehicule,_dir_array], "EODS_ABV_FIRE", false, false] spawn BIS_fnc_MP;	

} else {

	breakOut "main";
};