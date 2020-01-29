params [
["_nh90",objnull],
["_HideGunnerSeats",(_this select 0) animationSourcePhase "HideGunnerSeats"],
["_HideSeats",(_this select 0) animationSourcePhase "HideSeats"]
];

// Oculta asientos de puerta
_nh90 animateSource ["HideDoorSeats",((_HideGunnerSeats + 1 ) % 2),true];
// Abre puertas de artilleros si estos existen
{ _nh90 animateDoor [_x,((_HideGunnerSeats + 1 ) % 2),true];}foreach ["PuertaDerecha","PuertaIzquierda"];

[_this select 0] call FFAA_fnc_numerales;