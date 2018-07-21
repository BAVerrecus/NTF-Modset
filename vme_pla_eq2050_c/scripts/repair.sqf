/**
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
sleep 4;

_vehicle setHit ["wheel_2_1_steering", 0];
_vehicle setHit ["wheel_2_2_steering", 0];
_vehicle setHit ["wheel_2_3_steering", 0];
_vehicle setHit ["wheel_2_4_steering", 0];

// _vehicle setDamage 0.1;

{
	_vehicle setHitIndex [_x, 0.25];
} forEach [_HitList];

**/

_vehicle = _this select 0;
_repairAction = _this select 1;

//if (VME_RepairKit in transportcargolist) then {
//	_canRepair = false;
//};


switch (_repairAction) do {
	case "spare": {
		_tireList =[];
		_tireRepairCandidates = [
			"HitLFWheel",
			"HitRFWheel",
			"HitLF2Wheel",
			"HitRF2Wheel",
			"HitLMWheel",
			"HitRMWheel",
			"HitLBWheel",
			"HitRBWheel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_tireList pushBack _x;
			};
		} forEach _tireRepairCandidates;

	// check if any tires need to be fixed before attempting repairs
		if ((count _tireList) < 1) exitWith {
			hint "Tires do not need to be repaired";
		};

	// repair each tire separately
		{
			hint "Repairing Tire...";
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
			sleep 4;
			_vehicle setHitPointDamage [_x, 0];
		} forEach _tireList;

		_vehicle animate ["spare", 1];
		hint "Tires have been repaired";

	};
	case "spare2": {
		_tireList =[];
		_tireRepairCandidates = [
			"HitLFWheel",
			"HitRFWheel",
			"HitLF2Wheel",
			"HitRF2Wheel",
			"HitLMWheel",
			"HitRMWheel",
			"HitLBWheel",
			"HitRBWheel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_tireList pushBack _x;
			};
		} forEach _tireRepairCandidates;

	// check if any tires need to be fixed before attempting repairs
		if ((count _tireList) < 1) exitWith {
			hint "Tires do not need to be repaired";
		};

	// repair each tire separately
		{
			hint "Repairing Tire...";
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
			sleep 4;
			_vehicle setHitPointDamage [_x, 0];
		} forEach _tireList;

		_vehicle animate ["spare2", 1];
		hint "Tires have been repaired";

	};
	case "spare3": {
		_tireList =[];
		_tireRepairCandidates = [
			"HitLFWheel",
			"HitRFWheel",
			"HitLF2Wheel",
			"HitRF2Wheel",
			"HitLMWheel",
			"HitRMWheel",
			"HitLBWheel",
			"HitRBWheel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_tireList pushBack _x;
			};
		} forEach _tireRepairCandidates;

	// check if any tires need to be fixed before attempting repairs
		if ((count _tireList) < 1) exitWith {
			hint "Tires do not need to be repaired";
		};

	// repair each tire separately
		{
			hint "Repairing Tire...";
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
			sleep 4;
			_vehicle setHitPointDamage [_x, 0];

		} forEach _tireList;

		_vehicle animate ["spare3", 1];
		hint "Tires have been repaired";

	};

	case "repairVeh":{
//		if !(_canRepair) exitWith {hint: "Missing Repair Kit";};
		_repairList =[];
		_repairCandidates = [
			"HitBody",
			"HitEngine",
			"HitGun",
			"HitTurret",
			"HitFuel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_repairList pushBack _x;
			};
		} forEach _repairCandidates;

		{
			_vehicle setHitPointDamage [_x, 0.1];
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
		} forEach _repairList;
		_vehicle animate ["toolkit", 1];
	};
	case "repairArmor":{
//		if !(_canRepair) exitWith {hint: "Missing Repair Kit";};
		_repairList =[];
		_repairCandidates = [
			"HitHull",
			"HitLTrack",
			"HitRTrack",
			"HitGun",
			"HitTurret",
			"HitEngine",
			"HitFuel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_repairList pushBack _x;
			};
		} forEach _repairCandidates;

		{
			_vehicle setHitPointDamage [_x, 0.1];
			_vehicle animate ["toolkit", 1];
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
		} forEach _repairList;
	};
	case "repairHeli":{
//		if !(_canRepair) exitWith {hint: "Missing Repair Kit";};
		_repairList =[];
		_repairCandidates = [
			"HitFuel",
			"HitTransmission",
			"HitHydraulics",
			"HitStarter1",
			"HitStarter2",
			"HitStarter3"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_repairList pushBack _x;
			};
		} forEach _repairCandidates;

		{
			_vehicle setHitPointDamage [_x, 0.1];
			_vehicle animate ["toolkit", 1];
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
		} forEach _repairList;
	};
	case "repairPlane":{
//		if !(_canRepair) exitWith {hint: "Missing Repair Kit";};
		_repairList =[];
		_repairCandidates = [
			"HitBody",
			"HitHull",
			"HitEngine",
			"HitGun",
			"HitTurret",
			"HitFuel"
		];

		{
			if ((_vehicle getHitPointDamage _x) > 0) then {	
				_repairList pushBack _x;
			};
		} forEach _repairCandidates;

		{
			_vehicle setHitPointDamage [_x, 0.1];
			_vehicle animate ["toolkit", 1];
			player playMove 'AinvPknlMstpSlayWrflDnon_medic';
		} forEach _repairList;
	};
	case "refuel":{
		_fuel = Fuel _veh;

		_veh animate ['fuelcan',1];
		player playMove 'AinvPknlMstpSlayWrflDnon_medic';
		sleep 8;
		if (_fuel < 0.1) then {
			_veh SetFuel 0.25;
		} else {
			_veh SetFuel ((Fuel _veh) * 2);
		};
	};

};

/**
cfgVeh
		class Item_Base_F;
		class Item_VME_RepairKit: Item_Base_F {
			scope = 2;
			scopeCurator = 2;
			scopeArsenal = 2;
			displayName = "Toolkit";
			author = "VME - PLA";
			editorCategory = "EdCat_Equipment";
			editorSubcategory = "EdSubcat_InventoryItems";
			vehicleClass = "Items";
			class TransportItems {
				class VME_RepairKit {
					name = "VME_RepairKit";
					count = 1;
				};
			};
		};
		
		class Headgear_Base_F;
		class Headgear_H_HelmetB_light: Headgear_Base_F {
			
		};
		class Headgear_VME_Crewman: Headgear_H_HelmetB_light {
			scope = 2;
			scopeCurator = 2;
			displayName = "Light Combat Helmet";
			author = "Bohemia Interactive";
			editorCategory = "EdCat_Equipment";
			editorSubcategory = "EdSubcat_Helmets";
			vehicleClass = "ItemsHeadgear";
			class TransportItems {
				class VME_Crewman_helmet {
					name = "VME_Crewman_helmet";
					count = 1;
				};
			};
		};


cfgWea
		class ItemCore;
		class ToolKit: ItemCore {
			class ItemInfo;
		};
		class VME_RepairKit: ItemCore {
			author = "Bohemia Interactive";
			_generalMacro = "ToolKit";
			scope = 2;
			displayName = "Toolkit";
			descriptionShort = "Enables repair of vehicles - Consumable Item for repairs";
			picture = "\A3\Weapons_F\Items\data\UI\gear_Toolkit_CA.paa";
			model = "\A3\Weapons_F\Items\Toolkit";
			class ItemInfo: ToolKitItem {
				mass = 80;
				uniformModel = "\A3\Weapons_F\Items\Toolkit";
			};
		};
		
		
		
		class H_HelmetB;
		class H_HelmetB_light: H_HelmetB {
			class ItemInfo;
		};
		class VME_Crewman_helmet: H_HelmetB_light {}
			author = "VME PLA";
//			picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
			displayName = "Crewman Combat Helmet";
//			model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			descriptionShort = "Armor Level I";
			class ItemInfo: ItemInfo {
				mass = 20;
				uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
				class HitpointsProtectionInfo {
					class Head {
						hitpointName = "HitHead";
						armor = 2;
						passThrough = 0.5;
					};
				};
			};
		};


/* class Land_Axe_F
Land_Axe_fire_F
Land_DrillAku_F
Land_Grinder_F
Land_Hammer_F
Land_MultiMeter_F
ducttape
fire_extinguisher

**/	
		
