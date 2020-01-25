call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\EODS_GENERAL_FUCTIONS.sqf";

call compile preprocessFileLineNumbers "\EODS_ABV\Scripts\ABV_Fire.sqf";

call compile preprocessFileLineNumbers "\EODS_ABV\Scripts\Particles.sqf";

//call compile preprocessFileLineNumbers "\EODS_ABV\Scripts\MP_Spawn_Bug_Fix.sqf";

private ["_vehicule","_className"];

_vehicule = _this select 0;

_className = typeOf _vehicule;
/*
if ((IsServer) && (_className == "M1_Assault_Breacher_Vehicle")) then {

	[_vehicule] spawn EODS_ABV_MP_SPAWN_BUG_FIX;
};*/