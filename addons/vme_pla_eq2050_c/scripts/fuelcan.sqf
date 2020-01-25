_veh = _this;
_fuel = Fuel _veh;

_veh animate ['fuelcan',1];
player playMove 'AinvPknlMstpSlayWrflDnon_medic';
sleep 8;
if (_fuel < 0.1) then {
	_veh SetFuel 0.25;
} else {
	_veh SetFuel ((Fuel _veh) * 2);
};

