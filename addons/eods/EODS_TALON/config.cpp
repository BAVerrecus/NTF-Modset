class DefaultEventhandlers;
class CfgPatches
{
	class EODS_TALON
	{
		units[]=
		{
			"TALON_MARKII"
		};
		weapons[]=
		{
			"TalonARM"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CBA_XEH",
			"CBA_MAIN",
			"A3_UI_F",
			"EODS_ieds_main"
		};
		magazines[]=
		{
			"CA_Magazine",
			"VehicleMagazine",
			"TalonARM_Fake_Mag"
		};
		ammo[]=
		{
			"ShellBase",
			"TalonARM_FakeAmmo_base",
			"TalonARM_FakeAmmo"
		};
	};
};
class CfgFactionClasses {
	class EODS_BOT {
		displayName = "EODS BOT";
		priority = 2;
		icon ="\EODS_TALON\UI\EodsBots_Pic_ca.paa";
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgAmmo
{
	class Default;
	class FakeAmmo;
	class EODS_ShellBase: FakeAmmo
	{
		soundHit[]=
		{
		};
		supersonicCrackNear[]=
		{
		};
		supersonicCrackFar[]=
		{
		};
		CraterEffects="";
		CraterWaterEffects="";
		ExplosionEffects="";
		visibleFire=0;
		audibleFire=0;
		timeToLive=360;
		muzzleEffect="";
		caliber=34;
		whistleOnFire=0;
		class HitEffects
		{
		};
		soundFakeFall0[]=
		{
		};
		soundFakeFall1[]=
		{
		};
		soundFakeFall2[]=
		{
		};
		soundFakeFall3[]=
		{
		};
		soundFakeFall[]=
		{
		};
	};
	class TalonARM_FakeAmmo_base: FakeAmmo
	{
		soundHit[]=
		{
		};
		supersonicCrackNear[]=
		{
		};
		supersonicCrackFar[]=
		{
		};
		CraterEffects="";
		CraterWaterEffects="";
		ExplosionEffects="";
		visibleFire=0;
		audibleFire=0;
		timeToLive=5;
		muzzleEffect="";
		model="";
		caliber=34;
		whistleOnFire=0;
		class HitEffects
		{
		};
		soundFakeFall0[]=
		{
		};
		soundFakeFall1[]=
		{
		};
		soundFakeFall2[]=
		{
		};
		soundFakeFall3[]=
		{
		};
		soundFakeFall[]=
		{
		};
	};
	class TalonARM_FakeAmmo: TalonARM_FakeAmmo_base
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		typicalSpeed=5;
		explosive=0;
		cost=0;
		muzzleEffect="";
		model="";
		CraterEffects="";
		ExplosionEffects="";
		whistleDist=0;
		artilleryLock=0;
		thrust=0;
		timeToLive=2;
		airFriction=0;
		sideairFriction=0;
		class CamShakeExplode
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakeHit
		{
			power=0;
			duration="";
			frequency=0;
			distance=0;
		};
		class CamShakeFire
		{
			power="";
			duration="";
			frequency=0;
			distance="";
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="";
		count=30;
		type=256;
		initSpeed=900;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=23;
		weaponpoolavailable=1;
		mass=8;
	};
	class VehicleMagazine: CA_Magazine
	{
		type=0;
		reloadAction="";
		maxLeadSpeed=100;
		weaponPoolAvailable=0;
	};
	class TalonARM_Fake_Mag: VehicleMagazine
	{
		displayName="TalonARM";
		displayNameShort="Talon ARM";
		count=1000;
		ammo="TalonARM_FakeAmmo";
		initSpeed=50;
	};
};
class cfgWeapons
{
	class Default;
	// TALON REMOTE OBJECT START.....
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryUavTerminalItem_Base_F: InventoryItem_Base_F
	{
		type = 621;
	};
	class EODS_item_general: ItemCore
	{
		scope = 0;
	};/*
	class EODS_Talon_Remote: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_TALON_CONSOLE";
		class ItemInfo
		{
			mass = 20;
			createConnectionRadius = 5.0;
			type = 201;
		};
		descriptionShort = "Used to control Talon";
		picture = "\EODS_TALON\Remote\TexturesWIP\talonremoteUI_ca.paa";
		model = "EODS_TALON\Remote\Control_RemoteV2UVTest.p3d";
	};*/


	//UAV Object....

	class EODS_Talon_Remote_base: ItemCore
	{
		scope = 0;
		displayName = "$STR_EODS_TALON_CONSOLE";
		picture = "\EODS_TALON\UI\talonremoteUI_ca.paa";
		model = "EODS_TALON\Remote\Control_RemoteV2UVTest.p3d";
		descriptionShort = "Used to control Talon";
		class ItemInfo: InventoryUavTerminalItem_Base_F
		{
			mass = 20;
			createConnectionRadius = 5.0;
		};
	};
	class EODS_Talon_Remote: EODS_Talon_Remote_base
	{
		author = "MrEwok";
		_generalMacro = "EODS_Talon_Remote";
		scope = 2;
		picture = "\EODS_TALON\UI\talonremoteUI_ca.paa";
		HiddenSelections[] =
		{
			"Screen"
		};
		HiddenSelectionsTextures[] =
		{
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_TALON\Remote\AddRemoteDetails.sqf'";
		};
		class ItemInfo: ItemInfo
		{
			side = 1;
		};
	};

	// TALON REMOTE OBJECT STOP.....

	class FakeWeapon;
	class TalonARM: FakeWeapon
	{
		scope=1;
		displayname="Talon ARM";
		nameSound="";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
		};
		class StandardSound
		{
			class StandardSound
			{
				begin1[]=
				{
				};
				soundBegin[]=
				{
				};
				weaponSoundEffect="";
			};
			soundFly[]=
			{
			};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
		minRange=80;
		minRangeProbab=0.69999999;
		midRange=2000;
		midRangeProbab=0.69999999;
		maxRange=4000;
		maxRangeProbab=0.1;
		reloadTime=1.8;
		magazineReloadTime=5;
		maxLeadSpeed=100;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"TalonARM_Fake_Mag"
		};
		ballisticsComputer=0;
		class GunParticles
		{
		};
		modes[]=
		{
			"Single1"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="";
			sounds[]=
			{
			};
			class StandardSound
			{
				begin1[]=
				{
				};
				soundBegin[]=
				{
				};
				weaponSoundEffect="";
			};
			soundFly[]=
			{
			};
			weaponSoundEffect="";
			burst=1;
			reloadTime=2;
			autoFire=0;
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class EWK_Talon_base: Tank_F
	{
		mapSize = 2;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_UGV_s"};
				speechPlural[] = {"veh_vehicle_UGV_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_UGV_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_UGV_p";
		nameSound = "veh_vehicle_UGV_s";
		author = "MrEwok";
		_generalMacro = "EWK_Talon_base";
		accuracy=0.30000001;
		maxSpeed=15;
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=0.89999998;
		soundGetIn[] = {"",0.56234133,1};
		soundGetOut[] = {"",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"",0.33095738,1};
		soundEngineOnExt[] = {"",0.4943282,1,200};
		soundEngineOffInt[] = {"",0.33095738,1};
		soundEngineOffExt[] = {"",0.4943282,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"",0.0943282,1,200};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)])) * 2";
			};
			class Engine
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3912509,1,240};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)])) * 8";
			};
			class Engine1_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3220185,1,280};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)])) * 8";
			};
			class Engine2_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3589254,1,320};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)])) * 8";
			};
			class Engine3_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3125376,1,360};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)])) * 8";
			};
			class Engine4_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3348932,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)])) * 8";
			};
			class Engine5_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3382794,1,440};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)]) * ";
			};
			class IdleThrust
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3220185,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)])) * 2";
			};
			class EngineThrust
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3125376,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)])) * 2";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3282794,1,230};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)])) * 2";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3252624,1,290};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)])) * 2";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3282794,1,350};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)])) * 2";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.3287211,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)])) * 2";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.328864,1,450};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)]) * 2";
			};
			class Idle_int
			{
				sound[] = {"",0.00118721,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)])) * 2";
			};
			class Engine_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.02481337,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)])) * 2";
			};
			class Engine1_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.06810717,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)])) * 2";
			};
			class Engine2_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.01668359,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)])) * 2";
			};
			class Engine3_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.00118721,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)])) * 2";
			};
			class Engine4_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.06234133,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)])) * 2";
			};
			class Engine5_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.13095737,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)]) * 2";
			};
			class IdleThrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.03095737,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)])) * 2";
			};
			class EngineThrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.09810717,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)])) * 2";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.04668359,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)])) * 2";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.04668359,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)])) * 2";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.00118721,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)])) * 2";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.06234133,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)])) * 2";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"EODS_TALON\SOUND\Talon1.wss",0.03095737,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)]) * 2";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.3011872,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.6912509,1,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"",0.1981072,1,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"",0.2466836,1,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"",0.3011872,1,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"",0.4623413,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"",0.5623413,1,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"",0.1162278,1,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"",0.2548133,1,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"",0.3981072,1,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"",0.4466836,1,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"",0.5011872,1,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"",0.111886,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"",0.2818383,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"",0.3162278,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"",0.4548133,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"",0.5981072,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"",0.1162278,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"",0.2162278,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"",0.3548133,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"",0.4548133,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"",0.5981072,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
		ace_cargo_size = 4;  // Cargo space the object takes
		ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
		ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo)
		ace_dragging_dragDirection = 0;
		simulation = "tankX";
		accelAidForceSpd = 0.5;
		accelAidForceCoef = 0.4;
		accelAidForceYOffset = -1.0;
		enginePower = 100;
		maxOmega = 60;
		peakTorque = 700;
		torqueCurve[] = {{ 0,0 },{ 0.14,1 },{ 0.29,0.91 },{ 0.43,0.91 },{ 0.57,0.91 },{ 0.71,0.91 },{ 0.86,0.87 },{ 1,0.85 }};
		thrustDelay = 0.2;
		clutchStrength = 200;
		fuelCapacity = 1900;
		brakeIdleSpeed = 0.5;
		switchTime = 0.01;
		latency = 0.45;
		tankTurnForce = 150000;
		idleRpm = 200;
		redRpm = 6000;
		engineLosses = 6;
		transmissionLosses = 15;
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-5.9,"N",0,"D1",7.2};
			TransmissionRatios[] = {"High",2};
			gearBoxMode = "full-auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.3;
		};
		changeGearMinEffectivity[] = {0.65,0.15,0.9,0.92,0.95,0.96,0.97,0.95,0.95,0.55};
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 40;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 40000;
				sprungMass = 4000;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 0.8;
				dampingRateInAir = 13710;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				maxDroop = 0.15;
				maxCompression = 0.15;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName = "wheel_podkolol7";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L10: L2
			{
				boneName = "wheel_podkolol7";
				center = "wheel_1_8_axis";
				boundary = "wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName = "wheel_podkolop7";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R10: R2
			{
				boneName = "wheel_podkolop7";
				center = "wheel_2_8_axis";
				boundary = "wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		damageResistance=0.0020000001;
		fireResistance 	= 5; // fire resitance (based on hatchback)
		crewVulnerable="false";
		armor=125; //previous 900....  150 is too high (you can't dammage engine with 6.5mm).... 100 is too weak (talon explode after 1mag of MX (6.5mm))...........
		armorStructural=4; //default = 8 ......
		class HitPoints: HitPoints //Still TODO.........................
		{
			class HitHull: HitHull
			{
				armor=0.79999998;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0.80000001;
				minimalHit=0.1; //minimal hit to damage hitpoint
				explosionShielding=0.5;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.79000002;
				material=-1;
				name="motor";
				passThrough=0.65;
				minimalHit=0.095;
				explosionShielding=0.5;
				radius=0.15000001;
			};
			class HitArm
			{
				armor=0.61000002;
				material=-1;
				name="Arm";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.15000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=1;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.11;
			//	explosionShielding=1e-006; //multiplier
				radius=0.15000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=1;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.11;
			//	explosionShielding=1e-006; //multiplier
				radius=0.15000001;
			};
		};
		displayName = "EWK_Talon_base";
		class Library
		{
			libTextDesc = "EWK_Talon_base";
		};
		vehicleClass = "Autonomous";
		model = "\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		picture = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_CA.paa";
		Icon = "\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_CA.paa";
		cost = 200000;
		unitInfoType = "RscOptics_AV_driver";
		radarType = 8;
		driverCanSee = "2+4+8+16+32";
		gunnerCanSee = "2+4+8+16+32";
		isUav = 1;
		uavCameraDriverPos = "PiP0_pos";
		uavCameraDriverDir = "PiP0_dir";
		maxFordingDepth = 100;//TODO ADJUST//
		waterResistance = 100;//TODO ADJUST//
		waterDamageEngine = 0;//TODO ADJUST//
		class AnimationSources: AnimationSources
		{
			class Turret
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class MainTurret: Turret
			{
			};
			class MainGun: Turret
			{
			};
			class RotatArm10Deg
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class RotatArm2nd10Deg
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class RotatArm3em10Deg
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ExtendARM_1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class OpenLeftP_Hand
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class OpenRightP_Hand
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault= "$STR_EODS_TALON_FLIP";
				displayName= "$STR_EODS_TALON_FLIP";
				position="";
				radius=2.7;
				onlyForPlayer=1;
				condition="alive this AND Not (player in UAVControl this)";
				statement="this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
			class EODS_Action_Charge_01
			{
				displayName="$STR_EODS_TALON_CHARGE01_USER_ACTION";
				onlyforplayer=0;
				position="";
				radius=2;
				condition="alive this AND player in UAVControl this AND 'DemoCharge_Remote_Mag' in magazineCargo this";
				statement="[this,""DemoCharge_Remote_Ammo"",""DemoCharge_Remote_Mag""] execVM '\EODS_ieds\funciones\TALON\EODS_TALON_CARGA_EXPLOSIVA.sqf'";
			};
			class EODS_Action_Charge_02
			{
				displayName="$STR_EODS_TALON_CHARGE02_USER_ACTION";
				onlyforplayer=0;
				position="";
				radius=2;
				condition="alive this AND player in UAVControl this AND 'SatchelCharge_Remote_Mag' in magazineCargo this";
				statement="[this,""SatchelCharge_Remote_Ammo"",""SatchelCharge_Remote_Mag""] execVM '\EODS_ieds\funciones\TALON\EODS_TALON_CARGA_EXPLOSIVA.sqf'";
			};
		};
		cargoCanControlUAV = 0;
		terrainCoef = 1.2;
		turnCoef = 3;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		precision = 20;
		brakeDistance = 3.0;
		acceleration = 15; //AI drivability related stuff.........................
		canFloat = 0;
		enableGPS = 1;
		killFriendlyExpCoef = 0.1;
		fuelExplosionPower = 0.3;  // Radius Explo?  default = 2 .................................
		/*wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.75;*/
		transportMaxBackpacks = 6;
		transportSoldier = 0;
		commanderCanSee = 31;
		driverAction = "Disabled";
		cargoAction[] = {"driver_ugv_01"};
		showNVGCargo[] = {1};
		driverForceOptics = 1;
		driverOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		memoryPointDriverOptics = "PiP0_pos";
		driverCompartments = "Compartment3";
		cargoCompartments[] = {"Compartment2"};
		forceHideDriver = 1;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.85;
			minFov = 0.85;
			maxFov = 0.85;
		};
		cargoIsCoDriver[] = {0,0};
		ejectDeadGunner = 0;
		ejectDeadCargo = 0;
		ejectDeadDriver = 0;
		ejectDeadCommander = 0;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		/*class HitPoints: HitPoints //in futur i will define precise hitpoints so you can dammage camera or engine separated .....................
		{
			class HitBody
			{
				armor = 0.7;
				material = 50;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 2;
				material = -1;
				name = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				name = "wheel_1_1";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				name = "wheel_1_2";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				name = "wheel_2_1";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				name = "wheel_2_2";
			};
		};*/
		weapons[] = {};
		magazines[] = {};
		threat[] = {1,0.8,0.3};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		transportMaxWeapons = 8;
		transportMaxMagazines = 64;
		maximumLoad = 1000;
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			/*class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};*/
		};
		class Reflectors // TODO Setup POS/DIR points on model........................
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 1;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 1;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		/*	class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.3;
			};*/
		};
		aggregateReflectors[] = {{ "Left"/*,"Left2","Left3"*/,"Right"/*,"Right2" */}};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext.rvmat","A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_damage.rvmat","A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_destruct.rvmat","A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int.rvmat","A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_damage.rvmat","A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_destruct.rvmat"};
		};
	};
	class Talon_Base: EWK_Talon_base
	{
		author="MrEwok & Monovdd";
		_generalMacro="TALON_MARKII_Base2";
		displayName="TALON MARK II";
		class Library
		{
			libTextDesc="TALON MARKII EOD BOT";
		};
		model="\EODS_TALON\Talon.p3d";
		picture="\EODS_TALON\ui\TalonPicture_co.paa";
		Icon= "\EODS_TALON\ui\IcoTalon_ca.paa"; /*"\EODS_TALON\ui\TalonIcon_co.paa"*/
		cost=250000;
		uavCameraGunnerPos = "PiP1_pos";
		uavCameraGunnerDir = "PiP1_dir";
		class AnimationSources: AnimationSources
		{
			class Turret
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			delete MainGun;
			delete MainTurret;
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				isCopilot = 0;
				dontCreateAI = 0;
				body = "mainTurret";
				gun = "mainGun";
				memoryPointGunnerOptics = "PiP1_pos";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = {TalonARM};
				magazines[] = {"TalonARM_Fake_Mag"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,10};
				minElev = -60;
				maxElev = 60;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = "StabilizedInAxesBoth";
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","NVG","TI"};
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = "Both";
				};
				class HitPoints
				{
						class HitTurret
						{
						armor = 0.8;
						material = -1;
						name = "Arm";
						visual="Arm";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.6;
						radius = 0.25;
						};
						class HitGun
						{
						armor = 0.3;
						material = -1;
						name = "CameraArm";
						visual="CameraArm";
						passThrough = 0;
						minimalHit = 0.08;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
			};
		};
	};
	class TALON_MARKII: Talon_Base
	{
		author="MrEwok & Monovdd";
		_generalMacro="TALON_MARKII";
		scope=2;
		crew="B_UAV_AI";
		typicalCargo[]=	{};
		side=1;
		faction="EODS_BOT";
		hiddenSelectionsTextures[]={};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\TALON\EODS_TALON_INIT.sqf';};";
		};
	};

/*
	class Box_NATO_Support_F;
	class EODS_Talon_Remote_BOX: Box_NATO_Support_F
	{
		author = "MrEwok";
		displayName = "EODS_Talon_Remote_BOX";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportBackpacks{};
		class TransportItems
		{
			class EOD_BOX_Talon_Remote
			{
				//name = "EODS_Talon_Remote";
				//count = 10;
			};
		};
	};
	class ThingX;
	class Control_Remote: ThingX
	{
		displayName = "EODS_Talon_Remote";
		model = "EODS_TALON\Remote\Control_RemoteV2UVTest.p3d";
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "Control_Remote";
		scope = 2;
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Control_RemoteV2UVTestDT2: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "Control_RemoteV2UVTestDT2";
		scope = 0;
		displayName = "";
		model = "\EODS_TALON\Remote\Control_RemoteV2UVTestDT2.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Control_RemoteV2UVTestDT3: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "Control_RemoteV2UVTestDT3";
		scope = 0;
		displayName = "";
		model = "\EODS_TALON\Remote\Control_RemoteV2UVTestDT3.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Control_RemoteV2UVTestDT4: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "Control_RemoteV2UVTestDT4";
		scope = 0;
		displayName = "";
		model = "\EODS_TALON\Remote\Control_RemoteV2UVTestDT4.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Control_RemoteV2UVTestDT5: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "Control_RemoteV2UVTestDT5";
		scope = 0;
		displayName = "";
		model = "\EODS_TALON\Remote\Control_RemoteV2UVTestDT5.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
*/
};
