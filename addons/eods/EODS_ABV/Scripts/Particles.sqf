EODS_ABV_PARTICLES = {

_Rocket = _this select 0;
private ["_smoketrail","_light","_Rocket"];

_smoketrail = "#particlesource" createVehicleLocal getPos _Rocket;
_smoketrail setParticleParams ["\A3\Data_F\cl_exp","","Billboard",100,0.15,[0,0,-.5],velocity _Rocket,0,1.27,1.0,0.05,[2,2.8,1.5,0.25],[[0.95,0.95,0.8,0.6],[1,1,0.95,0.95],[1,1,0.9,0.5]],[0],0,0,"","",_Rocket];
_smoketrail setDropInterval 0.0005;
_smoketrail setParticleRandom [0.05, [0.05, 0.05, 0.05], [0.1, 0.1, 0.1], 5, 0.1, [0,0,0,0.1], 0.5, 0.5, 360];
_light = "#lightpoint" createVehicleLocal getPos _smoketrail;
_light setLightColor [1,1,0.5];
_light setLightBrightness 0.5;
_light setLightAmbient [0.3,0.2,0.1];
_light LightAttachObject [_smoketrail,[0,0,-1]];
sleep 1;
deleteVehicle _light;
deleteVehicle _smoketrail;

};