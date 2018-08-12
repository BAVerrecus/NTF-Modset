class CfgPatches
{
	class EODS_Tools
	{
		units[]={};
		weapons[]=
		{
			"EODS_Pliers1",
			"EODS_Screwdriver1",
			"EODS_Multimeter",
			"EODS_Mirror_Weapon",
			"EODS_Mirror_2"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"EODS_ieds_main"
		};
		author[]=
		{
			"MrEwok"
		};
		versionDesc="[EODS_Tools] 0.0.1";
		version="0.0.1";
	};
};
class CfgFunctions
{
	class EODS_TOOLS
	{
		class EODS_TOOLS
		{
			file = "\EODS_TOOLS\Scripts";
			class EODS_TOOLS
			{
				postInit = 1;
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;
class ItemInfo;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Default;
	class ItemCore;
	class EODS_item_Tool: ItemCore
	{
		scope=0;
	};
	class EODS_Pliers1: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_Pliers1";
		displayName="$STR_EODS_Pliers1";
		class ItemInfo
		{
			mass=1;
			type=201;
		};
		descriptionShort="$STR_EODS_Pliers1_desc";
		picture="\EODS_Tools\Ui\EODS_Pliers1_ca.paa";
		model="EODS_Tools\Meshes\EODS_Pliers1.p3d";
	};
	class EODS_Screwdriver1: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_Screwdriver1";
		displayName="$STR_EODS_Screwdriver1";
		class ItemInfo
		{
			mass=1;
			type=201;
		};
		descriptionShort="$STR_EODS_Screwdriver1_desc";
		picture="\EODS_Tools\Ui\EODS_Screwdriver1_ca.paa";
		model="EODS_Tools\Meshes\EODS_Screwdriver1.p3d";
	};
	class EODS_Multimeter: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_Multimeter";
		displayName="$STR_EODS_Multimeter";
		class ItemInfo
		{
			mass=2;
			type=201;
		};
		descriptionShort="$STR_EODS_Multimeter_desc";
		picture="\EODS_Tools\Ui\EODS_Multimeter_ca.paa";
		model="EODS_Tools\Meshes\EODS_Multimeter.p3d";
	};
	class EODS_MultiTool: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_MultiTool";
		displayName="$STR_EODS_MultiTool";
		class ItemInfo
		{
			mass=2;
			type=201;
		};
		descriptionShort="$STR_EODS_MultiTool_desc";
		picture="\EODS_Tools\Ui\EODS_MultiTool_ca.paa";
		model="EODS_Tools\Meshes\EODS_MultiTool.p3d";
	};
	class EODS_TapeRoll: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_TapeRoll";
		displayName="$STR_EODS_TapeRoll";
		class ItemInfo
		{
			mass=2;
			type=201;
		};
		descriptionShort="$STR_EODS_TapeRoll_desc";
		picture="\EODS_Tools\Ui\EODS_TapeRoll_ca.paa";
		model="EODS_Tools\Meshes\EODS_TapeRoll.p3d";
	};
	class EODS_Medford_Knife: EODS_item_Tool
	{
		scope=2;
		author = "MrEwok";
		_generalMacro = "EODS_Medford_Knife";
		displayName="$STR_EODS_Medford_Knife";
		class ItemInfo
		{
			mass=2;
			type=201;
		};
		descriptionShort="$STR_EODS_Medford_Knife_desc";
		picture="\EODS_Tools\Ui\EODS_Medford_Knife_ca.paa"; //TODO
		model="EODS_Tools\Meshes\EODS_Medford_Knife.p3d";
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class EODS_Mirror_Weapon: Pistol_Base_F
	{
		author = "MrEwok";
		_generalMacro = "EODS_Mirror_Weapon";
		scope = 2;
		cameraDir = "eye_Dir";
		modelOptics = "\EODS_Tools\Meshes\EODS_Mirror_optic.p3d";
		model = "\EODS_Tools\Meshes\EODS_Mirror.p3d";
		picture = "\EODS_Tools\Ui\EODS_Mirror_ca.paa";
		magazines[] = {};
		discreteDistance[] = {100,200,300};
		discreteDistanceCameraPoint[] = {"eye"};
		discreteDistanceInitIndex = 1;
		displayname = "[EODS] Mirror";
		descriptionShort = "[EODS] Mirror";
		class Library
		{
			libTextDesc = "[EODS] Mirror";
		};
		sounds[] = {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0,1,10};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.0,1.1,10};
			soundClosure[] = {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\pistols\rook40_st_1",0.70794576,1,700};
			begin2[] = {"A3\sounds_f\weapons\pistols\rook40_st_2",0.70794576,1,700};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\silenced\silent-07",0.56234133,1,200};
			begin2[] = {"A3\sounds_f\weapons\silenced\silent-08",0.56234133,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadtime = 0.1;
		dispersion = 0.005;
		drySound[] = {"A3\sounds_f\weapons\other\dry1",0.2238721,1,20};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\pistols\rook40_reload_final",1.0,1,10};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
		};
		inertia = 0.2;
		dexterity = 1.8;
	};
	class EODS_Mirror_2: EODS_Mirror_Weapon
	{
		model = "\EODS_Tools\Meshes\EODS_Mirror2.p3d";
		displayname = "[EODS] Small Mirror";
	};

};
class CfgVehicleClasses
{
	class EODS_Tools_class
	{
		displayName = "[EODS] Tools";
	};
};
class cfgVehicles
{
	class ThingEffect;
	class Strategic;
	class ReammoBox;
	class Box_NATO_Support_F;
	class ThingX;
	class EODS_Pliers_Veh: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="EODS_Pliers_Veh";
		scope=1;
		displayName="[EODS] Pliers";
		model="\EODS_Tools\Meshes\EODS_Pliers1.p3d";
		icon="iconObject";
		vehicleClass="EODS_Tools_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_MultiTool_Veh: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="EODS_MultiTool_Veh";
		scope=1;
		displayName="[EODS] MultiTool";
		model="EODS_Tools\Meshes\EODS_MultiTool.p3d";
		icon="iconObject";
		vehicleClass="EODS_Tools_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Screwdriver_Veh: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="EODS_Screwdriver_Veh";
		scope=1;
		displayName="[EODS] Screwdriver";
		model="EODS_Tools\Meshes\EODS_Screwdriver1.p3d";
		icon="iconObject";
		vehicleClass="EODS_Tools_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Multimeter_Veh: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="EODS_Multimeter_Veh";
		scope=1;
		displayName="[EODS] Multimeter";
		model="EODS_Tools\Meshes\EODS_Multimeter.p3d";
		icon="iconObject";
		vehicleClass="EODS_Tools_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Medford_Knife_Veh: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="EODS_Medford_Knife_Veh";
		scope=1;
		displayName="[EODS] Medford_Knife";
		model="EODS_Tools\Meshes\EODS_Medford_Knife.p3d";
		icon="iconObject";
		vehicleClass="EODS_Tools_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Mirror_BOX_Base: Box_NATO_Support_F
	{
		mapSize=1.8099999;
		author="MrEwok";
		_generalMacro="EODS_Mirror_BOX_Base";
		scope=1;
		displayName="EODS_Mirror_BOX_Base";
		//model="\EODS_BOXES\Eods_GeneralPurpose_Box.p3d";
		icon="iconCrate";
		maximumLoad=500;
		transportMaxWeapons=6;
		transportMaxMagazines=50;
		transportMaxBackpacks=12;
		transportAmmo=100;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
	};
	class EODS_Mirror_BOX: EODS_Mirror_BOX_Base
	{
		author = "MrEwok";
		scope=2;
		displayName = "EODS_Mirror_BOX";
		class TransportMagazines{};
		class TransportWeapons
		{
			class EODS_BOX_Mirror
			{
				//weapon = "EODS_Mirror_Weapon";
				//count = 10;
				weapon = "EODS_Mirror_2";
				count = 10;
			};
		};
		class TransportBackpacks{};
		class TransportItems{};
	};
	class WeaponHolder;
	class WeaponHolder_Single_F;
	class EODS_Mirror_Base_F: WeaponHolder_Single_F
	{
		mapSize = 0.8;
		author = "MrEwok";
		_generalMacro = "EODS_Mirror_Base_F";
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
	};
	class EODS_Mirror: EODS_Mirror_Base_F
	{
		scope = 2;
		scopeCurator = 2;
	//	type = 4; //type = 4; Mean Launcher slot __ type = 0; is for invisible throw/put type weapons __ type = 1; is the primaryWeapon slot, for rifles, MGs etc __ type = 2; is the Handgun slot __ type = "1 + 4"; will fill both the primary and secondary weapon slots


		displayName = "EODS_Mirror";
		author = "MrEwok";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class EODS_Mirror_weapon_box
			{
				weapon = "EODS_Mirror_Weapon";
				count = 10;
			};
		};
		class TransportMagazines
		{
		/*	class 30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 1;
			};*/
		};
	};
};
