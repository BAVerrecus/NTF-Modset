class DefaultEventhandlers;
class CfgPatches
{
	class EODS_Detector
	{
		units[] = { "EODS_Detector", "EODS_VMH3CS","EODS_VMH3CS_UXO"};
		weapons[] = {"EODS_Detector_Weapon", "EODS_VMH3CS_Weapon","EODS_VMH3CS_UXO_head_Weapon"};
		requiredVersion = 0.1;
		requiredAddons[] = {"EODS_Ieds_main"};
	};
};
class Extended_PostInit_EventHandlers
{
	class Mine_Detector_Init
	{
		init = "execVM 'EODS_Detector\Functions\init.sqf';";
	};
	class Mine_Detector_Respawn
	{
		init = "execVM 'EODS_Detector\Functions\respawn_init.sqf';";
	};
};
class CfgSounds
{
	class Bip_constant
	{
		name="Bip_constant";
		sound[]=
		{
			"\EODS_Detector\sound\Bip_constant.wss",
			"db+1",
			1
		};
		titles[]={};
	};
	class DetectionMetal: Bip_constant
	{
		name="DetectionMetal";
		sound[]=
		{
			"\EODS_Detector\Sound\DetectionMetal.wss",
			"db+1",
			1
		};
	};
	class DetectionBip
	{
		name="DetectionBip";
		sound[]=
		{
			"\EODS_Detector\Sound\DetectionBip.wss",
			"db+1",
			1
		};
	};
	class MDS_6
	{
		sound[] = {"EODS_Detector\Sound\MDS_6.wss","db-22",1};
		titles[] = {};
	};
	class MDS_5
	{
		sound[] = {"EODS_Detector\Sound\MDS_5.wss","db-20",1};
		titles[] = {};
	};
	class MDS_4
	{
		sound[] = {"EODS_Detector\Sound\MDS_4.wss","db-18",1};
		titles[] = {};
	};
	class MDS_3
	{
		sound[] = {"EODS_Detector\Sound\MDS_3.wss","db-16",1};
		titles[] = {};
	};
	class MDS_2
	{
		sound[] = {"EODS_Detector\Sound\MDS_2.wss","db-14",1};
		titles[] = {};
	};
	class MDS_1
	{
		sound[] = {"EODS_Detector\Sound\MDS_1.wss","db-12",1};
		titles[] = {};
	};
};
class cfgVehicles
{
	class ThingEffect;
	class Strategic;
	class ReammoBox;
	class Box_NATO_Support_F;
	class EODS_Detector_BOX_Base: Box_NATO_Support_F
	{
		mapSize=1.8099999;
		author="MrEwok";
		_generalMacro="EODS_Detector_BOX_Base";
		scope=1;
		displayName="EODS_Detector_BOX_Base";
		model="\EODS_BOXES\GuerillaCache.p3d";
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
	class EODS_Detector_BOX: EODS_Detector_BOX_Base
	{
		author = "MrEwok";
		scope=2;
		displayName = "EODS_Detector_BOX";
		class TransportMagazines{};
		class TransportWeapons
		{
			class EODS_BOX_Detector
			{
				weapon = "EODS_Detector_Weapon";
				count = 10;
			};
			class EODS_BOX_VMH3CS
			{
				weapon = "EODS_VMH3CS_Weapon";
				count = 10;
			};
			class EODS_BOX_VMH3CS_UXO_head
			{
				weapon = "EODS_VMH3CS_UXO_head_Weapon";
				count = 10;
			};
		};
		class TransportBackpacks{};
		class TransportItems{};
	};
	class WeaponHolder;
	class WeaponHolder_Single_F;
	class EODS_Detector_Base_F: WeaponHolder_Single_F
	{
		mapSize = 0.8;
		author = "MrEwok";
		_generalMacro = "EODS_Detector_Base_F";
		model = "\A3\Weapons_F\DummyWeapon_Single.p3d";
	};
	class EODS_Detector: EODS_Detector_Base_F
	{
		scope = 2;
		scopeCurator = 2;
	//	type = 4; //type = 4; Mean Launcher slot __ type = 0; is for invisible throw/put type weapons __ type = 1; is the primaryWeapon slot, for rifles, MGs etc __ type = 2; is the Handgun slot __ type = "1 + 4"; will fill both the primary and secondary weapon slots 


		displayName = "EODS_Detector";
		author = "MrEwok";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class EODS_Detector_weapon_box
			{
				weapon = "EODS_Detector_Weapon";
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
	class EODS_VMH3CS: EODS_Detector_Base_F
	{
		scope = 2;
		scopeCurator = 2;
	//	type = 4; //type = 4; Mean Launcher slot __ type = 0; is for invisible throw/put type weapons __ type = 1; is the primaryWeapon slot, for rifles, MGs etc __ type = 2; is the Handgun slot __ type = "1 + 4"; will fill both the primary and secondary weapon slots 


		displayName = "VALLON VMH3CS";
		author = "MrEwok";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class EODS_VMH3CS_weapon_box
			{
				weapon = "EODS_VMH3CS_Weapon";
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
	class EODS_VMH3CS_UXO: EODS_Detector_Base_F
	{
		scope = 2;
		scopeCurator = 2;
	//	type = 4; //type = 4; Mean Launcher slot __ type = 0; is for invisible throw/put type weapons __ type = 1; is the primaryWeapon slot, for rifles, MGs etc __ type = 2; is the Handgun slot __ type = "1 + 4"; will fill both the primary and secondary weapon slots 


		displayName = "VALLON VMH3CS with UXO head";
		author = "MrEwok";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class EODS_VMH3CS_UXO_head_Weapon_box
			{
				weapon = "EODS_VMH3CS_UXO_head_Weapon";
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
	class ThingX;
	class metaldetector_Folded: ThingX
	{
		mapSize=1;
		author="MrEwok";
		_generalMacro="metaldetector_Folded";
		scope=2;
		displayName="";
		model="\EODS_Detector\metaldetector_Folded.p3d";
		icon="iconObject";
		vehicleClass="EODS_ied_class";
		destrType="DestructNo";
		cost=100;
		class Eventhandlers
		{
		//	init="_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class EODS_Detector_Weapon: Pistol_Base_F
	{
		//////////////////////////////////////////////////////////////////////EODS DEFINE////////////////////////////////////////////////////////////////
		EODS_var_radius = 5; // Distance of detection
		EODS_var_angle = 60; // Angle of detection
		EODS_var_rnd_radius = 1; // Randomisation 0 = false , anything bigger than 0 is true 
		EODS_var_rnd_radius_value = 7; // Randomisation +/- % 
		//////////////////////////////////////////////////////////////////////EODS DEFINE END////////////////////////////////////////////////////////////////
		author = "MrEwok";
		_generalMacro = "EODS_Detector_Weapon";
		scope = 2;
		model = "\EODS_Detector\metaldetector.p3d";
		picture = "\EODS_Detector\Pic_EODS_Detector.paa";
		magazines[] = {};
		displayname = "US Army Detector";
		descriptionShort = "EODS_Detector";
		//handAnim[] = {"OFP2_ManSkeleton","EODS_Detector\Anim\DetectorHandAnim.rtm"};
		class Library
		{
			libTextDesc = "EODS_Detector";
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
	class EODS_VMH3CS_Weapon: Pistol_Base_F
	{
		//////////////////////////////////////////////////////////////////////EODS DEFINE////////////////////////////////////////////////////////////////
		EODS_var_radius = 4;
		EODS_var_angle = 50;
		EODS_var_rnd_radius = 1;
		EODS_var_rnd_radius_value = 3.5;
		//////////////////////////////////////////////////////////////////////EODS DEFINE END////////////////////////////////////////////////////////////////
		author = "MrEwok";
		_generalMacro = "EODS_VMH3CS_Weapon";
		scope = 2;
		model = "\EODS_Detector\Vallon_VMH3CS.p3d";
		picture = "\EODS_Detector\Pic_VMH3CS.paa"; //TODO
		magazines[] = {};
		displayname = "Vallon VMH3CS";
		descriptionShort = "British Mine Detector";
		//handAnim[] = {"OFP2_ManSkeleton","EODS_Detector\Anim\DetectorHandAnim.rtm"};
		class Library
		{
			libTextDesc = "EODS_VMH3CS";
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
	class EODS_VMH3CS_UXO_head_Weapon: Pistol_Base_F 
	{
		//////////////////////////////////////////////////////////////////////EODS DEFINE////////////////////////////////////////////////////////////////
		EODS_var_radius = 4;
		EODS_var_angle = 70;
		EODS_var_rnd_radius = 1;
		EODS_var_rnd_radius_value = 2;
		//////////////////////////////////////////////////////////////////////EODS DEFINE END////////////////////////////////////////////////////////////////
		author = "MrEwok";
		_generalMacro = "EODS_VMH3CS_UXO_head_Weapon";
		scope = 2;
		model = "\EODS_Detector\Vallon_VMH3UXO.p3d";
		picture = "\EODS_Detector\Pic_VMH3CS_UXO.paa"; //TODO
		magazines[] = {};
		displayname = "Vallon VMH3CS UXO head";
		descriptionShort = "UXO head detector";
		//handAnim[] = {"OFP2_ManSkeleton","EODS_Detector\Anim\DetectorHandAnim.rtm"};
		class Library
		{
			libTextDesc = "EODS_VMH3CS";
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
};