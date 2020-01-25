class DefaultEventhandlers;
class CfgPatches
{
	class EODS_ABV
	{
		units[] = {"M1_Assault_Breacher_Vehicle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		M113_Cargo01_EP1="M113_Cargo01_EP1";
		M113_Cargo02_EP1="M113_Cargo02_EP1";
		M113_Cargo03_EP1="M113_Cargo03_EP1";
		M113_Cargo04_EP1="M113_Cargo04_EP1";
		M113_Driver_EP1="M113_Driver_EP1";
		M113_DriverOut_EP1="M113_DriverOut_EP1";
		M113_Gunner_EP1="M113_Gunner_EP1";
		M2A2_Gunner_EP1="M2A2_Gunner_EP1";
		M2A2_GunnerOut_EP1="M2A2_GunnerOut_EP1";
		M2A2_Commander_EP1="M2A2_Commander_EP1";
		M2A2_CommanderOut_EP1="M2A2_CommanderOut_EP1";
		M2A2_Driver_EP1="M2A2_Driver_EP1";
		M2A2_DriverOut_EP1="M2A2_DriverOut_EP1";
		T55_Gunner_EP1="T55_Gunner_EP1";
		T55_Commander_EP1="T55_Commander_EP1";
		hmmwv_M2gunnerOut = "hmmwv_M2gunnerOut";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		class M113_Cargo01_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Cargo01";
			interpolateTo[]={M113_KIA_Cargo01_EP1,0.1};
			connectTo[]=
			{
				M113_Cargo01_EP1, 0.1,
				M113_Cargo01_V1_EP1, 0.1,
				M113_Cargo01_V2_EP1, 0.1,
				M113_Cargo01_V3_EP1, 0.1,
				M113_Cargo01_V4_EP1, 0.1,
				M113_Cargo01_V5_EP1, 0.1
			};
			equivalentTo="M113_Cargo01_EP1";
			variantsAI[] =
			{
				M113_Cargo01_EP1, 0.5,
				M113_Cargo01_V1_EP1, 0.12,
				M113_Cargo01_V2_EP1, 0.11,
				M113_Cargo01_V3_EP1, 0.10,
				M113_Cargo01_V4_EP1, 0.09,
				M113_Cargo01_V5_EP1, 0.08				
			};
			variantAfter[] = {5, 10, 20};			
			speed=1e+010;
		};
		class M113_KIA_Cargo01_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M113_KIA_Cargo01";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};

		class M113_Cargo02_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Cargo02";
			interpolateTo[]={M113_KIA_Cargo01_EP1,0.1};
			connectTo[]=
			{
				M113_Cargo02_EP1, 0.1,
				M113_Cargo02_V1_EP1, 0.1,
				M113_Cargo02_V2_EP1, 0.1,
				M113_Cargo02_V3_EP1, 0.1,
				M113_Cargo02_V4_EP1, 0.1,
				M113_Cargo02_V5_EP1, 0.1
			};
			equivalentTo="M113_Cargo02_EP1";
			variantsAI[] =
			{
				M113_Cargo02_EP1, 0.5,
				M113_Cargo02_V1_EP1, 0.12,
				M113_Cargo02_V2_EP1, 0.11,
				M113_Cargo02_V3_EP1, 0.10,
				M113_Cargo02_V4_EP1, 0.09,
				M113_Cargo02_V5_EP1, 0.08				
			};
			variantAfter[] = {5, 10, 20};			
			speed=1e+010;
		};
		class M113_Cargo03_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Cargo03";
			interpolateTo[]={M113_KIA_Cargo01_EP1,0.1};
			connectTo[]=
			{
				M113_Cargo03_EP1, 0.1,
				M113_Cargo03_V1_EP1, 0.1,
				M113_Cargo03_V2_EP1, 0.1,
				M113_Cargo03_V3_EP1, 0.1,
				M113_Cargo03_V4_EP1, 0.1
			};
			equivalentTo="M113_Cargo03_EP1";
			variantsAI[] =
			{
				M113_Cargo03_EP1, 0.5,
				M113_Cargo03_V1_EP1, 0.15,
				M113_Cargo03_V2_EP1, 0.13,
				M113_Cargo03_V3_EP1, 0.11,
				M113_Cargo03_V4_EP1, 0.11
			};
			variantAfter[] = {5, 10, 20};			
			speed=1e+010;
		};
		class M113_Cargo04_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Cargo04";
			interpolateTo[]={M113_KIA_Cargo01_EP1,0.1};
			connectTo[]=
			{
				M113_Cargo04_EP1, 0.1,
				M113_Cargo04_V1_EP1, 0.1,
				M113_Cargo04_V2_EP1, 0.1,
				M113_Cargo04_V3_EP1, 0.1,
				M113_Cargo04_V4_EP1, 0.1,
				M113_Cargo04_V5_EP1, 0.1
			};
			equivalentTo="M113_Cargo04_EP1";
			variantsAI[] =
			{
				M113_Cargo04_EP1, 0.5,
				M113_Cargo04_V1_EP1, 0.12,
				M113_Cargo04_V2_EP1, 0.11,
				M113_Cargo04_V3_EP1, 0.10,
				M113_Cargo04_V4_EP1, 0.09,
				M113_Cargo04_V5_EP1, 0.08				
			};
			variantAfter[] = {5, 10, 20};			
			speed=1e+010;
		};
		class M113_Driver_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Driver";
			connectTo[]=
			{
				"M113_KIA_Driver_EP1",
				1
			};
			speed=1e+010;
		};
		class M113_KIA_Driver_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M113_KIA_Driver";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M113_DriverOut_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_DriverOut";
			connectTo[]=
			{
				"M113_KIA_DriverOut_EP1",
				1
			};
			speed=1e+010;
		};
		class M113_KIA_DriverOut_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M113_KIA_DriverOut";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M113_Gunner_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M113_Gunner";
			connectTo[]=
			{
				"M113_KIA_Gunner_EP1",
				1
			};
			speed=1e+010;
		};
		class M113_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M113_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M2A2_Gunner_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_Gunner";
			connectTo[]=
			{
				"M2A2_KIA_Gunner_EP1",
				1
			};
			speed=1e+010;
		};
		class M2A2_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M2A2_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M2A2_GunnerOut_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_GunnerOut";
			connectTo[]=
			{
				"M2A2_KIA_GunnerOut_EP1",
				1
			};
			speed=1e+010;
		};


		class M2A2_KIA_GunnerOut_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M2A2_KIA_GunnerOut";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M2A2_Commander_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_Commander";
			connectTo[]=
			{
				"M2A2_KIA_CommanderOut_EP1",
				1
			};
			speed=1e+010;
		};
		class M2A2_CommanderOut_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_CommanderOut";
			connectTo[]=
			{
				"M2A2_KIA_CommanderOut_EP1",
				1
			};
			speed=1e+010;
		};
		class hmmwv_M2gunnerOut: Crew
		{
			file="\EODS_ABV\Data\Anim\hmmwv_M2gunnerOut";
			connectTo[]=
			{
				"M2A2_KIA_CommanderOut_EP1",
				1
			};
			speed=1e+010;
		};
		class M2A2_KIA_CommanderOut_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M2A2_KIA_CommanderOut";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class M2A2_Driver_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_Driver";
			connectTo[]=
			{
				"M2A2_KIA_Driver_EP1",
				1
			};
			speed=1e+010;
		};
		class M2A2_KIA_Driver_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M2A2_KIA_Driver";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
				class M2A2_DriverOut_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\M2A2_DriverOut";
			connectTo[]=
			{
				"M2A2_KIA_DriverOut_EP1",
				1
			};
			speed=1e+010;
		};
		class M2A2_KIA_DriverOut_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\M2A2_KIA_DriverOut";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};


		class T55_Gunner_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\T55_Gunner";
			connectTo[]=
			{
				"T55_KIA_Gunner_EP1",
				1
			};
			speed=1e+010;
		};
		class T55_KIA_Gunner_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\T55_KIA_Gunner";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class T55_Commander_EP1: Crew
		{
			file="\EODS_ABV\Data\Anim\T55_Commander";
			connectTo[]=
			{
				"T55_KIA_Commander_EP1",
				1
			};
			speed=1e+010;
		};
		class T55_KIA_Commander_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\EODS_ABV\Data\Anim\T55_KIA_Commander";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		M113_Cargo01_EP1="";
		M113_Cargo02_EP1="";
		M113_Cargo03_EP1="";
		M113_Cargo04_EP1="";
		M113_Driver_EP1="";
		M113_DriverOut_EP1="";
		M2A2_Gunner_EP1="";
		M2A2_GunnerOut_EP1="";
		M2A2_Commander_EP1="";
		M2A2_CommanderOut_EP1="";
		M2A2_Driver_EP1="";
		M2A2_DriverOut_EP1="";
		T55_Gunner_EP1="";
		T55_Commander_EP1="";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Default;
	class LauncherCore;
	class MissileLauncher: LauncherCore
	{
		scope = 1;
		type = 65536;
		reloadTime = 0.5;
		nameSound = "MissileLauncher";
		cursor = "EmptyCursor";
		cursorAim = "missile";
		textureType = "fullAuto";
	};
	class EODS_M58_Launcher: MissileLauncher
	{
		displayName = "M58_Launcher";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 1; //TEMPS DE RECHARGEMENT DEFAULT = 1
		magazineReloadTime = 6; //TEMPS DE RECHARGEMENT DU CHARGEUR DEFAULT = 6
		canLock = 0;
		reloadMagazineSound[] = {"A3\Sounds_F\weapons\Reloads\reload_magazine_MissileLauncher",0.8912509,1,10};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_4",1.4125376,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.0,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.17782794,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.17782794,2.5};
		magazines[] = {"2Rnd_M58_missiles"};
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 1000;
		textureType = "semi";
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine;
	class VehicleMagazine;
	class 2Rnd_M58_missiles: VehicleMagazine
	{
		scope = 2;
		displayName = "M58";
		displayNameShort = "M58";
		count = 2;
		ammo = "EODS_M58_Missile";
		initSpeed = 40;
		maxLeadSpeed = 40;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.2589254,1,1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.5011872,1.3,400};
		soundHit[] = {"",1.2589254,1,1};
		reloadSound[] = {"",0.00031622776,1,20};
		nameSound = "missiles";
	};
};
class cfgAmmo
{
	class Default;
	class fakeAmmo;
	class MissileCore;	
/*	class EODS_M58_MissileBase: MissileCore
	{
		manualControl = 0;
		maneuvrability = 0;
		maxSpeed = 500;
		simulationStep = 0.01;
		airFriction = 0.2;
		sideAirFriction = 0.001;
		maxControlRange = 0; //default = 4000
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		explosionSoundEffect = "DefaultExplosion";
		soundFly[] = {"",1,1,400};
		soundEngine[] = {"",1,1,50};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close",0.39810717,1,20};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters",0.31622776,1,50};
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		muzzleEffect = "BIS_fnc_effectFiredRocket";
		effectsMissile = "missile4";
		deflecting = 0;
		weaponLockSystem = 0;
		cmImmunity = 0.9;
		class HitEffects
		{
			hitWater = "ImpactEffectsWaterRocket";
		};
		maverickWeaponIndexOffset = 0;
	};*/

	class EODS_M58_Missile_Base: FakeAmmo
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
		model = "\EODS_ABV\M1_Abrams\ABV_RoketAmmo.p3d";
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
	class EODS_M58_Missile: EODS_M58_Missile_Base
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
	
	
/*	class EODS_M58_Missile: EODS_M58_MissileBase
	{
		model = "\EODS_ABV\M1_Abrams\ABV_RoketAmmo.p3d";
		hit = 800;
		indirectHit = 8;
		indirectHitRange = 4;
		cost = 500;
		irLock = 0;
		airLock = 0;
		laserLock = 0;
		manualControl = 0;
		maxControlRange = 3750; //default = 5000
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_1",5.623413,1,1800};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\explosion_antitank_2",5.623413,1,1800};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		explosionSoundEffect = "DefaultExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		initTime = 0.25;
		trackOversteer = 1;
		trackLead = 0.85;
		timeToLive = 30;
		maneuvrability = 0;
		simulationStep = 0.002;
		airFriction = 0.084;
		sideAirFriction = 0.05;
		maxSpeed = 200;
		thrustTime = 3;
		thrust = 130;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
		weaponLockSystem = "0";
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((4 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(60^0.25)";
			duration = "((round (60^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((60^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 3;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};*/
};
class WeaponFireGun;
class WeaponCloudsGun;
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
	class EODS_ABV_base: Tank_F
	{
		author = "MrEwok";
		_generalMacro = "EODS_ABV_base";
		vehicleClass="Armored";
		displayName="EODS_ABV_base";
		hasCommander="true";
		accuracy=0.30000001;
		maxSpeed=100;
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=0.89999998;
		forceHideDriver=1;  // add turn out/In action for driver...............................
		driverForceOptics=1;
		/*driverAction="M1A2_DRIVER";
		driverInAction="M1A2_DRIVER";*/
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
		/*LODTurnedOut=1;
		LODTurnedIn=1100;*/  // don't know if still required for A3 ?............................
		viewdriverinexternal=1;
		driverOutOpticsModel =  "\A3\weapons_f\reticle\optics_empty";
		memoryPointdriverOutOptics = "driverviewout";
		memoryPointdriverOptics = "driverview";
		model = "\EODS_ABV\M1_Abrams\M1_Assault_Breacher_Vehicle.p3d";
		picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
		Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
		mapSize=9.5;
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-engine_on.wss",
			0.79432821,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-engine_off.wss",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop",
			0.79432821,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1idle-01",
					1.2943282,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*camPos*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.2912509,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*camPos*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1engine-04a",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",
					1.4125376,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",
					1.7782794,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",
					1.9952624,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",
					1.7782794,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",
					2.2387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",
					2.5118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1engine-04a",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(400/	2640),(900/	2640)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(100/	2640),(200/	2640)])	*	((rpm/	2640) factor[(900/	2640),(700/	2640)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(700/	2640),(1100/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(705/	2640),(850/	2640)])	*	((rpm/	2640) factor[(1100 /	2640),(950/	2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(950/	2640),(1400/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(900/	2640),(1050/	2640)])	*	((rpm/	2640) factor[(1400/	2640),(1200/	2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1200/	2640),(1700/	2640)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1170/	2640),(1380/	2640)])	*	((rpm/	2640) factor[(1700/	2640),(1500/	2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1500/	2640),(2100/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1500/	2640),(1670/	2640)])	*	((rpm/	2640) factor[(2100/	2640),(1800/	2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(1800/	2640),(2300/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2640) factor[(1780/	2640),(2060/	2640)])	*	((rpm/	2640) factor[(2450/	2640),(2200/	2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2640) factor[(2100/	2640),(2640/	2640)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2640) factor[(2150/	2640),(2500/	2640)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.70118719,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					1.2912509,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-01",
					1.3981072,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-02",
					1.4466836,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-03",
					1.5011872,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-04",
					1.5623413,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-hard-05",
					1.5623413,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-01",
					1.3162278,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-02",
					1.3548133,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-03",
					1.3981072,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-04",
					1.4466836,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\ext\ext-m1treads-soft-05",
					1.5011872,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-hard-01",
					1.2511886,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-hard-02",
					1.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-hard-03",
					1.3162278,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-hard-04",
					1.3548133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-hard-05",
					1.3981072,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-soft-01",
					1.3162278,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-soft-02",
					1.3162278,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-soft-03",
					1.3548133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-soft-04",
					1.3548133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"EODS_ABV\M1A2\sounds\vehicles\tracked\M1A1\int\int-m1treads-soft-05",
					1.3981072,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		simulation="tankX";
		enginePower=20550; //default = 18550 //
		maxOmega=1965; //default = 1765 //
		peakTorque=7000;//default = 6700 //
		torqueCurve[]=
		{
			{0,0},
			{0.14,1},
			{0.28999999,0.91000003},
			{0.43000001,0.91000003},
			{0.56999999,0.91000003},
			{0.70999998,0.91000003},
			{0.86000001,0.87},
			{1,0.85000002}
		};
		thrustDelay=0.2;
		clutchStrength=185;
		fuelCapacity=1900;
		brakeIdleSpeed=1;// default = 1.78 (too high)//
		switchTime=0.31;
		latency=0.44999999;
		tankTurnForce=1170000;
		idleRpm=200;
		redRpm=27000;
		engineLosses=6;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				7.1999998,
				"D2",
				5.5999999,
				"D3",
				3.5,
				"D4",
				2.7,
				"D5",
				2.4000001,
				"D6",
				1.9,
				"D7",
				1.4,
				"D8",
				1.2
			};
			TransmissionRatios[]=
			{
				"High",
				2
			};
			gearBoxMode="full-auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.30000001;
		};
		changeGearMinEffectivity[]={0.64999998,0.15000001,0.89999998,0.92000002,0.94999999,0.95999998,0.97000003,0.94999999,0.94999999,0.55000001};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=10;// working value = 10 //
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=40000;
				sprungMass=4000;
				springStrength=324000;
				springDamperRate=36000;
				dampingRate=0.80000001;
				dampingRateInAir=4010; // working value = 4010 //
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L8: L2
			{
				boneName="wheel_podkolol7";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L10: L2
			{
				boneName="wheel_podkolol7";
				center="wheel_1_8_axis";
				boundary="wheel_1_8_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R8: R2
			{
				boneName="wheel_podkolop7";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R10: R2
			{
				boneName="wheel_podkolop7";
				center="wheel_2_8_axis";
				boundary="wheel_2_8_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=1500;
				springStrength=37500;
				springDamperRate=7500;
				maxDroop=0;
				maxCompression=0;
			};
		};
		cost=1000000;
		damageResistance=0.0020000001;
		crewVulnerable="false";
		armor=1400;
		armorStructural=8;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.89999998;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0.80000001;
				minimalHit=0.12;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				name="motor";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.02;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.02;
				explosionShielding=1e-006;
				radius=0.15000001;
			};
		};
		transportSoldier = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {/*"passenger_flatground_leanleft","passenger_flatground_generic01","passenger_flatground_generic02","passenger_flatground_generic03","passenger_flatground_generic04","passenger_flatground_generic05"*/};
		maxFordingDepth = 1;//TODO ADJUST//
		waterResistance = 1;//TODO ADJUST//
		waterDamageEngine = 0.2;//TODO ADJUST//
		extCameraPosition[] = {0,2.25,-9};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
		};
		/*armorStructural = 6;
		damageResistance = 0.00547;
		cost = 2500000;
		crewVulnerable = 0;
		epeImpulseDamageCoef = 18;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;*/
		/*class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.8;
				material = -1;
				name = "hull_hit";
				visual = "hull_hit";
				passThrough = 1;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "engine_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_l_hit";
				visual = "track_l_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.36;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_r_hit";
				visual = "track_r_hit";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.36;
			};
		};*/
		/*animationSourceHatch = "";*/
		animationSourceHatch = "hatchDriver";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankSide";
			};
		};
		class Reflectors
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
				useFlare = 0;
				dayLight = 0;
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
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		aggregateReflectors[] = {{ "Left","Right" }};
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics = "commanderviewout";
						memoryPointGunnerOptics = "commanderview";
						gunBeg = "Usti hlavne2";
						gunEnd = "Konec hlavne2";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher","HMG_M2"}; 
						magazines[] = 
						{
						"SmokeLauncherMag",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red",
						"100Rnd_127x99_mag_Tracer_Red"
						};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1.0,30};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						gunnerAction = "hmmwv_M2gunnerOut";
						gunnerInAction = "mbt1c_slot2_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOutOpticsShowCursor= true;
						gunnerOpticsShowCursor= false;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {};
						animationSourceHatch = "hatchCommander";
						class ViewGunner: ViewCargo{};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.1;
								material = -1;
								name = "commander_turret_hit";
								visual = "commander_turret_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
							class HitGun
							{
								armor = 0.1;
								material = -1;
								name = "commander_gun_hit";
								visual = "commander_gun_hit";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.25;
							};
						};
					};
				};
				memoryPointGunnerOutOptics = "Gunnerviewout";
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnerAction = "mbt1_slot2_out";
				gunnerInAction = "mbt1_slot2_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"EODS_M58_Launcher"};//TODO Add M58Rocket weapon
				soundServo[] = {"A3\sounds_f\dummysound",0.031622775,1.0,30};
				magazines[] = {"2Rnd_M58_missiles","2Rnd_M58_missiles"}; //TODO Add magazine for custom weapon
				forceHideGunner = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				minElev = 0;
				maxElev = 20;
				initElev = 10;
                gunnerOutOpticsShowCursor= true;
				gunnerOpticsShowCursor= false;
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				animationSourceHatch = "hatchGunner";
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				turretInfoType = "RscOptics_MBT_01_gunner";
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret_hit";
						visual = "main_turret_hit";
						passThrough = 0.5;
						minimalHit = 0.15;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "main_gun_hit";
						visual = "main_gun_hit";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
		/*	class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};*/
			/*class M58Proxy1_hide
			{
				source = "ammorandom";
				weapon = "EWK_M58_Launcher";
			};*/
			/*class M58Proxy2_hide
			{
				source = "ammorandom";
				weapon = "EWK_M58_Launcher";
			};*/
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="HMG_M2";
			};
		/*	class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "HMG_M2";
			};*/
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_M2";
			};
		/*	class recoil_source
			{
				source = "reload";
				weapon = "cannon_120mm";
			};*/
		};
		class Library
		{
			libTextDesc = "EODS_ABV_base";
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class M1_Assault_Breacher_Vehicle_base: EODS_ABV_base
	{
		accuracy=0.5;
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_crew_F"
		};
	};
	class M1_Assault_Breacher_Vehicle: M1_Assault_Breacher_Vehicle_base
	{
		author = "MrEwok";
		_generalMacro = "M1_Assault_Breacher_Vehicle";
		scope = 2;
		accuracy=1000;
		displayName = "M1 Assault Breacher Vehicle";
		hiddenSelections[] = {/*"Camo1","Camo2"*/};
		hiddenSelectionsTextures[] = {/*"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"*/};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ABV\Scripts\Init.sqf'";
			fired="_ok = _this execVM '\EODS_ABV\Scripts\GetTurretDir.sqf'";
		};
		class AnimationSources: AnimationSources
		{
		/*	class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};*/
		/*	class muzzle_rot_coax
			{
				source = "ammorandom";
				weapon = "HMG_M2";
			};
			class muzzle_hide_coax
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class muzzle_hide_HMG
			{
				source = "reload";
				weapon = "HMG_M2";
			};*/
			class zaslehROT_HMG
			{
				source = "muzzle_rot_HMG";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="HMG_M2";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_M2";
			};
			class muzzle_rot_HMG
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class muzzle_hide_HMG
			{
				source = "reload";
				weapon = "HMG_M2";
			};
		};
	};
/*	class M1_Assault_Breacher_VehicleTest: M1_Assault_Breacher_Vehicle_base
	{
		author = "MrEwok";
		_generalMacro = "M1_Assault_Breacher_VehicleTEST";
		scope = 2;
		accuracy=1000;
		model = "\EODS_ABV\M1_Abrams\M1_Assault_Breacher_VehicleTEST.p3d";
		displayName = "M1 Assault Breacher Vehicle TEST";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_CO.paa"};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ABV\Scripts\Init.sqf'";
			fired="_ok = _this execVM '\EODS_ABV\Scripts\GetTurretDir.sqf'";
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "cannon_120mm";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "HMG_M2";
			};
			class muzzle_hide_HMG
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_M2";
			};
		};
	};*/
	class ThingX;
	class ABV_RoketAmmo_base: ThingX
	{
		mapSize = 1;
		author = "MrEwok & Monovdd";
		_generalMacro = "ABV_RoketAmmo_base";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class ABV_RoketAmmo: ABV_RoketAmmo_base
	{
		mapSize = 1;
		author = "MrEwok & Monovdd";
		_generalMacro = "ABV_RoketAmmo";
		scope = 1;
		displayName = "";
		model="\EODS_ABV\M1_Abrams\ABV_RoketAmmo.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Charge_ABV_Base: ThingX
	{
		mapSize = 1;
		author = "MrEwok & Monovdd";
		scope = 0;
		displayName = "";
		_generalMacro ="Charge_ABV_Base";
		model = "\EODS_ABV\M1_Abrams\Charge_ABV.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	class Charge_ABV: Charge_ABV_Base
	{
		mapSize = 1;
		author = "MrEwok & Monovdd";
		_generalMacro = "Charge_ABV";
		scope = 1;
		displayName = "";
		model = "\EODS_ABV\M1_Abrams\Charge_ABV.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
};