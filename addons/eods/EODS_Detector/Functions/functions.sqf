/*
Functions.sqf
Author(s): MrEwok , NorX Aengell
Description: Contain the Minedetector functions (related to init.sqf)
*/

EODS_MDET_fnc_canDetect = {
	{/* alive player && */(player == vehicle player) && {currentWeapon player in /*DETECTOR*/ ["EODS_Detector_Weapon"]}
	
	//("MineDetector" in (items player)) && (player == vehicle player)
};
};

//Need to detect if EODS_Detector_Weapon is in currentWeapon player to remove BackModel (Maybe We should just use launcher instead of handgun)
EODS_MDET_fnc_AddBackMDETModel = {
  _CurrentHandgun= handgunWeapon player;
  hint format ["%1",_CurrentHandgun];
  _Minedetector= "EODS_Detector_Weapon";
  _currentWeap= currentWeapon player;
 // _MinedetectorInHand= {currentWeapon player in /*DETECTOR*/ ["EODS_Detector_Weapon"]};
  Systemchat format ["%1",_currentWeap];
  if (_CurrentHandgun isEqualTo _Minedetector) then {
  FoldedDetector ="metaldetector_Folded" createvehicle getpos player; //TODO Create Folded detector
  FoldedDetector attachTo [player,[-0.05,-0.1,-0.1],"RightShoulder"]; // Spine3 ?
};
 if (_currentWeap isEqualTo _Minedetector) then {
detach FoldedDetector;
deletevehicle FoldedDetector;
};
};

/*
if (hasInterface) then {
  player AddEventHandler ["Put",{call EODS_MDET_fnc_AddBackMDETModel;}];
  player AddEventHandler ["Take",{call EODS_MDET_fnc_AddBackMDETModel;}];
  };
*/



EODS_MDET_fnc_switchState = {
	if (EODS_MDET_var_active) then {
		EODS_MDET_var_active = false;
	//	hint parseText (localize "STR_EODS_MDET_DEACTIVATED") //DEBUG
	} else {
		EODS_MDET_var_active = true;
	//	hint parseText (localize "STR_EODS_MDET_ACTIVATED") //DEBUG
	};
};


//Uxo.....
EODS_MDET_fnc_switchState_Uxo = {
	if (EODS_MDET_Uxo_var_active) then {
		EODS_MDET_Uxo_var_active = false;
	//	hint parseText (localize "STR_EODS_MDET_DEACTIVATED") //DEBUG
	} else {
		EODS_MDET_Uxo_var_active = true;
	//	hint parseText (localize "STR_EODS_MDET_ACTIVATED") //DEBUG
	};
};

EODS_MDET_fnc_randomize = {
	private "_percented";
	_percented = random (_this / 100 * EODS_MDET_var_rnd_radius_value);
	if (round (random 1) == 0) then {
		_this + _percented;
	} else {
		_this - _percented;
	}
};

EODS_MDET_fnc_getNearestMine = 
{
	private ["_found", "_nearestMine", "_DetectionPoint", "_allMines", "_mine", "_distance"];
	_found = false;
	_nearestMine = [];
	//_allMines = allMines;
  if (currentWeapon player in ["EODS_Detector_Weapon", "EODS_VMH3CS_Weapon"]) then 
  {
	
		_DetectionPoint = "Helper_Base_F" createVehicleLocal getPos Player; // create detection point
		_DetectionPoint attachto [player,[-0.4,0.8,-0.8],"granat"]; // attach point to player memorypoint "granat" , we can use "granat2" , "LeftHand" , "RightHand" and maybe "aimPoint"....
		//hideObjectGlobal _DetectionPoint ;  //Hiding point....
		
		_allMines = (player nearEntities ["EODS_base_ied_cellphone", 10]) + allmines;
		for "_i" from 0 to ((count _allMines) - 1) do {
			_mine = _allMines select _i;
			_distance = _DetectionPoint distance _mine;
			if (_distance <= EODS_MDET_var_radius) then {
				if ([getPos player, getDir player, EODS_MDET_var_angle, getPos _mine] call BIS_fnc_inAngleSector) then {
					if (_found) then {
						if ((_nearestMine select 1) > _distance) then {
							_nearestMine = [_mine, _distance];
						};
					} else {
						_found = true;
						_nearestMine = [_mine, _distance];
					};
				};
			};
		};
		deleteVehicle _DetectionPoint;
		_nearestMine;
  };
	
};

//Uxo........

EODS_MDET_fnc_getNearestUxo = {
	private ["_found", "_nearestUxo", "_DetectionPoint", "_allUxo", "_Uxo", "_distance"];
	_found = false;
	_nearestUxo = [];
	//_allUxo = allMines;
	
	_DetectionPoint = "Helper_Base_F" createVehicleLocal getPos Player; // create detection point
	_DetectionPoint attachto [player,[-0.4,0.8,-0.8],"granat"]; // attach point to player memorypoint "granat" , we can use "granat2" , "LeftHand" , "RightHand" and maybe "aimPoint"....
	//hideObjectGlobal _DetectionPoint ;  //Hiding point....
	
	_allUxo = player nearEntities ["EODS_base_Uxo", 10];
	for "_i" from 0 to ((count _allUxo) - 1) do {
		_Uxo = _allUxo select _i;
		_distance = _DetectionPoint distance _Uxo;
		if (_distance <= EODS_MDET_var_radius) then {
			if ([getPos player, getDir player, EODS_MDET_var_angle, getPos _Uxo] call BIS_fnc_inAngleSector) then {
				if (_found) then {
					if ((_nearestUxo select 1) > _distance) then {
						_nearestUxo = [_Uxo, _distance];
					};
				} else {
					_found = true;
					_nearestUxo = [_Uxo, _distance];
				};
			};
		};
	};
	deleteVehicle _DetectionPoint;
	_nearestUxo;
	
};

//Decrepited Function....
EODS_MDET_fnc_getNearestIED = {
	private ["_found", "_nearestIED", "_allIEDS", "_IED", "_distance"];
	_found = false;
	_nearestIED = [];
	_allIEDS = ["EODS_Fake_Base"]; //,"EODS_base_ied_cellphone","EODS_base_ied_Pressure"
	for "_i" from 0 to ((count _allIEDS) - 1) do {
		_IED = _allIEDS select _i;
		_distance = player distance _IED; // Error in here "String expected array : object, Location "
		if (_distance <= EODS_MDET_var_radius) then {
			if ([getPos player, getDir player, EODS_MDET_var_angle, getPos _IED] call BIS_fnc_inAngleSector) then {
				if (_found) then {
					if ((_nearestIED) > _distance) then {
						_nearestIED = [_IED, _distance];
					};
				} else {
					_found = true;
					_nearestIED = [_IED, _distance];
				};
			};
		};
	};
	_nearestIED;
};

EODS_MDET_fnc_playSound = {
	private "_percentage";
	_percentage = _this / EODS_MDET_var_radius * 100;
	switch (true) do {
		case (_percentage > 80 && _percentage < 100): { playSound "MDS_1" };
		case (_percentage > 60 && _percentage < 80): { playSound "MDS_2" };
		case (_percentage > 40 && _percentage < 60): { playSound "MDS_3" };
		case (_percentage > 20 && _percentage < 40): { playSound "MDS_4" };
		case (_percentage > 10  && _percentage < 20): { playSound "MDS_5" };
		case (_percentage > 0  && _percentage < 10): { playSound "MDS_6" };
	};
};

EODS_MDET_fnc_mineInRange = {
	private "_distance";
	_distance = _this select 1;
	if (EODS_MDET_var_rnd_radius) then {
		_distance = _distance call EODS_MDET_fnc_randomize;
	};
	_distance call EODS_MDET_fnc_playSound;
	
	////// MINE IS IN RANGE AND IN CORRECT ANGLE //////
	//systemChat format["Explosive detected in radius: %1m", round _distance];
	
};

//Uxo

EODS_MDET_fnc_UxoInRange = {
	private "_distance";
	_distance = _this select 1;
	if (EODS_MDET_var_rnd_radius) then {
		_distance = _distance call EODS_MDET_fnc_randomize;
	};
	_distance call EODS_MDET_fnc_playSound;
	
	////// MINE IS IN RANGE AND IN CORRECT ANGLE //////
	//systemChat format["Explosive detected in radius: %1m", round _distance];
	
};