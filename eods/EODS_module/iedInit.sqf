if(!isServer) exitwith {};
private ["_Debug","_logic","_syncedModules"];
_logic = param [0,objNull,[objNull]];

EODSnumberOfIeds = _logic getVariable "numberOfIEDs";
EODSnumberOfDuds = _logic getVariable "numberOfDuds";
EODSnumberOfMines = _logic getVariable "numberOfMines";
EODStriggerManClasses = _logic getVariable "triggerManClasses";
EODSsafeZoneRadius = _logic getVariable "safeZoneRadius";

//_iedsInMap = (getMarkerPos "mapCenter") nearObjects ["EODS_base_ied_cellphone",20000];

if(typeName EODStriggerManClasses == "STRING") then
		{
			EODStriggerManClasses = [EODStriggerManClasses, " ", ""] call CBA_fnc_replace;
			EODStriggerManClasses = [EODStriggerManClasses, ","] call CBA_fnc_split;
			if(count EODStriggerManClasses == 0) then
			{
				EODStriggerManClasses = ["C_man_1","C_man_polo_1_F_afro","C_man_p_beggar_F_euro"];
			};

		};

//placing IEDs
EODSroads = (getMarkerPos "mapCenter") nearRoads 20000;
IEDtypes = ["EODS_ied01","EODS_ied02","EODS_ied03","EODS_ied04","EODS_ied05","EODS_ied06","EODS_ied07"];

for [{_i=1},{_i<=EODSnumberOfIeds},{_i=_i+1}] do
{
	_iedName = IEDtypes call BIS_fnc_selectRandom;
//TODO add check for pressureplate and place them on the road without a triggerman.

	_iedarray =["Land_GarbagePallet_F","Land_CanisterFuel_F","Land_GarbageWashingMachine_F","Land_JunkPile_F","Land_CanisterPlastic_F","Land_Tyres_F","Land_GarbageBags_F","Land_Wreck_Truck_F","C_Offroad_01_F","C_Van_01_transport_F","C_Hatchback_01_F","LADAWreck","HMMWVWreck","UAZWreck"]; // Objects used as IEDs
	_iedtype = _iedarray select (floor random (count _iedarray));

				_triggerMan = EODStriggerManClasses call BIS_fnc_selectRandom;
				_RND_number = 2;
				_RND_number = Ceil random 3;
				_rdist = 5.75;
				_road = EODSroads select (round random (count EODSroads));
				_roadDir = getDir _road;
				_chance = random 100;
				_newDir = _roadDir;
				if (_chance < 50) then {_newDir = (_NewDir + 180)};
				_dir = _newdir;
				_pos = getpos _road;
				_posx = _pos select 0;
				_posy = _pos select 1;
				_tx = (_posx + (_rdist * sin(_dir)));
				_ty = (_posy + (_rdist * cos(_dir)));
				_iedpos = [_tx,_ty,0.1];

				//positioning ied
				{
						if((position _x) distance _iedpos < EODSsafeZoneRadius) then
					{
						hint "position was too close";
					}
					else
					{
						 _ied = createVehicle [_iedName, _iedpos, [], 0, "NONE"];
						[_ied,_RND_number,_iedtype,_triggerMan] execVM "EODS_Module\armIED.sqf";
					};
				} foreach playableUnits;


};


//creating harmless objects

for [{_i=1},{_i<=EODSnumberOfDuds},{_i=_i+1}] do
{
	_dudarray =["Land_GarbagePallet_F","Land_CanisterFuel_F","Land_GarbageWashingMachine_F","Land_JunkPile_F","Land_CanisterPlastic_F","Land_Tyres_F","Land_GarbageBags_F","Land_Wreck_Truck_F","C_Offroad_01_F","C_Van_01_transport_F","C_Hatchback_01_F","LADAWreck","HMMWVWreck","UAZWreck","Land_Garbage_square5_F"]; // Objects used as IEDs

	_dudName = _dudarray call BIS_fnc_selectRandom;

	_rdist = 8.75;
					_road = EODSroads select (round random (count EODSroads));
					_roadDir = getDir _road;
					_chance = random 100;
					_newDir = _roadDir;
					if (_chance < 50) then {_newDir = (_NewDir + 180)};
					_dir = _newdir;
					_pos = getpos _road;
					_posx = _pos select 0;
					_posy = _pos select 1;
					_tx = (_posx + (_rdist * sin(_dir)));
					_ty = (_posy + (_rdist * cos(_dir)));
					_dudpos = [_tx,_ty,0];


				{
						if((position _x) distance _dudpos < EODSsafeZoneRadius) then
					{
						hint "position was too close";
					}
					else
					{
						_dud = createVehicle [_dudName, _dudpos, [], 0, "NONE"];
					};


				} foreach playableUnits;
};

//creating mines

for [{_i=1},{_i<=EODSnumberOfMines},{_i=_i+1}] do
{
	_minearray =["APERSTripMine","APERSMine","APERSBoundingMine"]; // Objects used as mines

	_mineName = _minearray call BIS_fnc_selectRandom;

	_rdist = 10.75;
					_road = EODSroads select (round random (count EODSroads));
					_roadDir = getDir _road;
					_chance = random 100;
					_newDir = _roadDir;
					if (_chance < 50) then {_newDir = (_NewDir + 180)};
					_dir = _newdir;
					_pos = getpos _road;
					_posx = _pos select 0;
					_posy = _pos select 1;
					_tx = (_posx + (_rdist * sin(_dir)));
					_ty = (_posy + (_rdist * cos(_dir)));
					_minepos = [_tx,_ty,0];


				{
						if((position _x) distance _minepos < EODSsafeZoneRadius) then
					{
						hint "position was too close";
					}
					else
					{
						_mine = createMine [_mineName, _minepos, [], 0];
					};

				} foreach playableUnits;
};



_syncedModules = synchronizedObjects _logic;

	if (count _syncedModules > 0) then {

		{

			[_x] execvm "EODS_Module\safeZone.sqf";

			sleep 1;

		} forEach _syncedModules;
