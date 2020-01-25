/*
EWK_rainfx.sqf
Author(s): MrEwok
Description:Those are the Rain effects
Note(s): None
*/

//VARIABLES
/*
EWK_rain_version = "0.01"; //For init debug
EWK_rain_active = true; //For init debug
*/

EWK_rain_fx = false; // are rain fx running?
EWK_rain_falling = false; // is it raining?
EWK_rain_cover = false; // is unit under cover?
EWK_rain_droparray = [];

//COLOURED BALL
EWK_rain_fnc_colourball = 
{
	private ["_ball"];
	_ball = _this select 0;
	_ball setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.2,0.2,0.2,0.2,ca)"];
};	

// SET UP ARRAY OF DROPLET OBJECTS, SO THEY DON'T HAVE TO BE SPAWNED AND REMOVED
Script_Creation_Droplet =
{
	if (count EWK_rain_droparray > 0) then 
	{
		{
			deletevehicle _x;
		} foreach EWK_rain_droparray;
		EWK_rain_droparray resize 0;
	};	
	
	for "_i" from 1 to 10 do
	{
		_rdrop = "sign_sphere10cm_F" createvehicle [0,0,0];
		
		if (!isMultiplayer) then 
		{
			_rdrop  setObjectTexture [0,"#(argb,8,8,3)color(0.5,0.0,0.0,0.0,ca)"];
		}
		else
		{
			[[_rdrop], "EWK_rain_fnc_colourball",false] spawn BIS_fnc_MP;
		};
		
		EWK_rain_droparray pushback _rdrop; 
	};
};

// RAIN DROPS ON VEHICLE WINDOWS AND PLAYER GOGGLES
EWK_rain_fnc_raindrops =
{
	private ["_int","_rainemitter","_drop","_lt","_sz","_dst"];
	
	if (alive player && cameraview == "internal") then 
	{
		_drop = false;
		if (
		vehicle player == player && // player on foot
		{!(underwater player)} && // not underwater
		{(positionCameraToWorld [0,0,1] select 2) > ((positionCameraToWorld [0,0,0] select 2) -0.2) || speed player > 5} // either not looking down or running
		) then
		{
			_int = 0.01 / rain; // more drops if heavier rain
			_lt = 0.05; // droplet lifetime
			_sz = 0.3; // drop size
			_dst = 2; // max spawn distance
			_drop = true; // drops only if not under cover
		} else
		{
			// Player in car (not tank, boat, heli etc).
			if (vehicle player iskindof "car_f") then // car_f
			{
				_int = 0.0001 / rain; 
				_sz = rain * 0.1; // heavier rain = bigger drops 
				_dst = 5;
				
				if (speed player  > 10) then 
				{
					_int = _int / (speed player / 10); // more drops if moving
				};
				
				_lt = 0.05;
				_drop = true;
			};
		};
			
		// Display drops
		if (_drop) then
		{
			_rainemitter = "#particlesource" createVehicleLocal getpos player;
			_rainemitter setParticleCircle [0.0, [0, 0, 0]];
			_rainemitter setParticleRandom [0, [_dst,_dst,_dst], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
			_rainemitter setParticleParams 
			[["\A3\data_f\ParticleEffects\Universal\Refract",1,0,1],
			"",
			"Billboard", 1,_lt, [0,0,0], [0,0,0], 1, 1000, 0.000, 1.7,[_sz],[[1,1,1,1]],[0,1], 0.2, 1.2, "", "", vehicle player];
			_rainemitter setDropInterval _int;    
			_rainemitter attachto [vehicle player,[0,0,0]];
			sleep 1;
			deletevehicle _rainemitter;
		};
	};	
};

// SHOULD RAIN FX FUNCTIONS RUN?	
EWK_rain_fnc_check =
{
	_posisition_Vue_Joueur = eyepos player;
	_highpos = [_posisition_Vue_Joueur select 0,_posisition_Vue_Joueur select 1,(_posisition_Vue_Joueur select 2) + 10];	
	
	if (lineintersects [_posisition_Vue_Joueur,_highpos]) then {EWK_rain_cover = true;} else {EWK_rain_cover = false;}; // Under cover?		
	
	if (rain > 0.1) then {EWK_rain_falling = true;} else {EWK_rain_falling = false;};	 // Raining?
		
	if (EWK_rain_falling) then {[] spawn EWK_rain_fnc_raindrops;}; // Run window/goggle droplet functions
};

[] spawn Script_Creation_Droplet;