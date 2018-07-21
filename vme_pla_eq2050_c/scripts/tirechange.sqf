_vehicle = _this select 0;

_HitList = ["karoserie","L svetlo","motor","P svetlo","sklo predni L","sklo predni P","wheel_1_1_steering","wheel_1_2_steering","wheel_2_1_steering","wheel_2_2_steering"];

_getHit1 = _vehicle getHitPointDamage "wheel_1_1_steering";
_getHit2 = _vehicle getHitPointDamage "wheel_1_2_steering";
_getHit3 = _vehicle getHitPointDamage "wheel_2_1_steering";
_getHit4_1 = _vehicle getHitPointDamage "wheel_2_2_steering";

if (_getHit1 > 0.5) then {
	_vehicle animate ["spare", 1];
	_vehicle setHitPointDamage ["wheel_1_1_steering", 0];
};
if (_getHit2 > 0.5) then {
	_vehicle animate ["spare", 1];
	_vehicle setHitPointDamage ["wheel_1_2_steering", 0];
};
if (_getHit3 > 0.5) then {
	_vehicle animate ["spare", 1];
	_vehicle setHitPointDamage ["wheel_1_3_steering", 0];
};
if (_getHit4 > 0.5) then {
	_vehicle animate ["spare", 1];
	_vehicle setHitPointDamage ["wheel_1_4_steering", 0];
};

// player playMove 'ActsPercSnonWnonDnon_carFixing2'; // 40 seconds
player playMove 'AinvPknlMstpSlayWrflDnon_medic';
sleep 5;

_vehicle setHit ["wheel_2_1_steering", 0];
_vehicle setHit ["wheel_2_2_steering", 0];
_vehicle setHit ["wheel_2_3_steering", 0];
_vehicle setHit ["wheel_2_4_steering", 0];

// _vehicle setDamage 0.1;

{
	_vehicle setHitIndex [_x, 0.25];
} forEach [_HitList];

