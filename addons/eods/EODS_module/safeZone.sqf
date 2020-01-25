private ["_zone","_EODSsafeZoneRadius"];

_zone = (_this select 0);
_EODSsafeZoneRadius = _logic getVariable "EODSradius";


{deleteVehicle _x} forEach nearestObjects [(position _zone), ["APERSTripMine","APERSMine","APERSBoundingMine","EODS_base_ied_cellphone"],_EODSsafeZoneRadius];