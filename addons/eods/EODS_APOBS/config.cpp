#define true	1
#define false	0

#define private		0
#define protected	1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define LockNo		0
#define LockCadet	1
#define LockYes		2

#define TEast		0
#define TWest		1
#define TGuerrila	2
#define TCivilian	3
#define TSideUnknown	4
#define TEnemy		5
#define TFriendly	6
#define TLogic		7

class CfgPatches
{
	class EODS_APOBS
	{
		units[]=
		{
			"APOBS",
			"APOBS_A",
			"APOBS_B",
			"APOBS_E_B",
			"APOBS_E_W",
			"APOBS_Empty_Base",
			"APOBS_Empty",
			"APOBS_Fired",
			"APOBS_Charge_Script_Base",
			"APOBS_Charge_Script",
			"APOBS_Alternative_Rocket"
		};
		weapons[]=
		{
			"APOBS_Charge"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CBA_XEH",
			"CBA_MAIN",
			"A3_UI_F",
			"A3_Weapons_F",
			"EODS_ieds_main"
		};
		magazines[]=
		{
			"CA_Magazine",
			"VehicleMagazine",
			"1Rnd_APOBS_Charge"
		};
		ammo[]=
		{
			"ShellBase",
			"Fake_APOBS_Rocket_base",
			"Fake_APOBS_Rocket",
			"APOBS_Charge_Shell"
		};
	};
};

class CfgMovesBasic {
	class DefaultDie;	
	
	class ManActions {
		APOBS_Gunner = "APOBS_Gunner";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic 
{
	class States 
	{
		class Crew;
		class APOBS_Gunner : Crew 
		{
			file = "\A3\cargoposes_F\anim\gunner_static_low01.rtm";
			connectTo[] = {"Static_Dead", 1};
		};
	};
};

class CfgSounds
{
	class APOBS_rocket_Sound
	{
		name="APOBS_rocket_Sound";
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\new_rocket_7",
			1.7782794,
			1.2,
			1600
		};
		titles[]={};
	};
};
class Mode_SemiAuto;	
class Mode_Burst;	
class Mode_FullAuto;	

class CfgAmmo {
	class Default;	
	class FakeAmmo;	
	
	class EODS_ShellBase : FakeAmmo {
		soundHit[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		CraterEffects = "";
		CraterWaterEffects = "";
		ExplosionEffects = "";
		visibleFire = 0;	
		audibleFire = 0;
		timeToLive = 360;
		muzzleEffect = "";
		caliber = 34;
		whistleOnFire = 0;
		
		class HitEffects {};
		soundFakeFall0[] = {};
		soundFakeFall1[] = {};
		soundFakeFall2[] = {};
		soundFakeFall3[] = {};
		soundFakeFall[] = {};
	};
	
	class Fake_APOBS_Rocket_base : FakeAmmo {
		soundHit[] = {};
		supersonicCrackNear[] = {};
		supersonicCrackFar[] = {};
		CraterEffects = "";
		CraterWaterEffects = "";
		ExplosionEffects = "";
		visibleFire = 0;	// how much is visible when this weapon is fired
		audibleFire = 0;
		timeToLive = 5;
		muzzleEffect = "";
		model = "\EODS_APOBS\Fake_APOBS_Rocket.p3d";
		caliber = 34;
		whistleOnFire = 0;
		
		class HitEffects {};
		soundFakeFall0[] = {};
		soundFakeFall1[] = {};
		soundFakeFall2[] = {};
		soundFakeFall3[] = {};
		soundFakeFall[] = {};
	};
	
	class Fake_APOBS_Rocket : Fake_APOBS_Rocket_base {
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 5;
		explosive = false;
		cost = 0;
		muzzleEffect = "";
		model = "";
		CraterEffects = "";
		ExplosionEffects = "";
		whistleDist = 0;
		artilleryLock = 0;
		thrust = 0;
		timeToLive = 2;
		airFriction = 0;
		sideairFriction = 0;
		
		class CamShakeExplode {
			power = "";
			duration = "";
			frequency = 0;
			distance = "";
		};
		
		class CamShakeHit {
			power = 0;
			duration = "";
			frequency = 0;
			distance = 0;
		};
		
		class CamShakeFire {
			power = "";
			duration = "";
			frequency = 0;
			distance = "";
		};
		
		class CamShakePlayerFire {
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	
	class APOBS_Charge_Shell : EODS_ShellBase {
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 400;
		explosive = false;
		cost = 200;
		muzzleEffect = "";
		model = "";
		CraterEffects = "";
		ExplosionEffects = "";
		whistleDist = 0;
		artilleryLock = 0;
		thrust = 0;
		timeToLive = 2;
		airFriction = 0;
		sideairFriction = 0;
		
		class CamShakeExplode {
			power = "";
			duration = "";
			frequency = 0;
			distance = "";
		};
		
		class CamShakeHit {
			power = 0;
			duration = "";
			frequency = 0;
			distance = 0;
		};
		
		class CamShakeFire {
			power = "";
			duration = "";
			frequency = 0;
			distance = "";
		};
		
		class CamShakePlayerFire {
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
};

class CfgMagazines {
	class Default;	// External class reference
	
	class CA_Magazine : Default {
		scope = protected;
		value = 1;
		displayName = "";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = false;
		useActionTitle = "";
		reloadAction = "";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;	
		weaponpoolavailable = 1;
		mass = 8;
	};
	
	class VehicleMagazine : CA_Magazine {
		type = VSoft;
		reloadAction = "";
		maxLeadSpeed = 100;	
		weaponPoolAvailable = 0;
	};
	
	class 1Rnd_APOBS_Charge : VehicleMagazine {
		displayName = "1Rnd APOBS Charge";
		displayNameShort = "APOBS Mag";
		count = 1;
		ammo = "APOBS_Charge_Shell";
		initSpeed = 50;
	};
};

class cfgWeapons {
	class Default;
	class CannonCore;	
	
	class APOBS_Charge : CannonCore {
		scope = protected;
		displayname = "APOBS charge";
		nameSound = "";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		
		class StandardSound {
			class StandardSound {
				begin1[] = {};
				soundBegin[] = {};
				weaponSoundEffect = "";
			};
			soundFly[] = {};
			weaponSoundEffect = "";
			burst = 1;
			reloadTime = 2;
			autoFire = false;
		};
		minRange = 80;
		minRangeProbab = 0.7;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 1.8;
		magazineReloadTime = 5;
		maxLeadSpeed = 100;	
		autoReload = true;
		canLock = LockNo;
		magazines[] = {"1Rnd_APOBS_Charge"};
		ballisticsComputer = 2;
		
		class GunParticles {
			class FirstEffect {
				effectName = "";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1"};
		
		class Single1 : Mode_SemiAuto {
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			
			class StandardSound {
				begin1[] = {};
				soundBegin[] = {};
				weaponSoundEffect = "";
			};
			soundFly[] = {};
			weaponSoundEffect = "";
			burst = 1;
			reloadTime = 2;
			autoFire = false;
		};
	};
};

class CfgDestructPos {
	scope = protected;
	class DelayedDestruction;	
	
	class DelayedDestructionAmmo : DelayedDestruction {
		timeBeforeHiding = "21";
		hideDuration = "10";
	};
};
class WeaponCloudsMGun;

class CfgFactionClasses {
	class EODS_APOBS {
		displayName = "EODS APOBS";
		priority = 2;
		icon = "\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
	};
};
class CfgVehicles {
	class All;	
	class Strategic;	
	class Land;	
	
	class LandVehicle : Land {
		class ViewPilot;	
		class NewTurret;	
	};
	class StaticWeapon : LandVehicle {
		class NewTurret;	
	};
	class StaticWeapon_F : StaticWeapon {
		class AnimationSources;
		
		class Turrets {
			class MainTurret : NewTurret {};
		};
		
		class HitPoints { 
			class HitHull; 
		};
	};
	
	class EODS_StaticWeapon : StaticWeapon_F {
		displayName = "APOBS";
		scope = private;
		side = TWest;
		faction = EODS_APOBS;
		vehicleClass = "Static";
		modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty.p3d";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = false;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		unitInfoType = "RscUnitInfoSoldier";
		waterLeakiness = 100;
		selectionFireAnim = "";
		fireDustEffect = "FDustEffects";
		
		class DestructionEffects {};
		memoryPointMissile[] = {"spice rakety", "usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety", "konec hlavne"};
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = 2+8+32+4;
		gunnerHasFlares = true;
		
		class Turrets {
			class MainTurret : NewTurret {
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				memoryPointGun = "usti hlavne";
				outGunnerMayFire = true;
				optics = true;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = true;
				ejectDeadGunner = false;
				canEject = 0;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = false;
				
				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
			};
		};
		damperSize = 1.4;	
		damperForce = 0.8;	
		gearBox[] = {-1, 0, 1};
		attenuationEffectType = "OpenCarAttenuation";
		soundEnviron[] = {"", 1, 0.7};
		soundEngine[] = {"", 10, 1};
		soundCrash[] = {"", 0.562341, 1};
		soundGear[] = {"", db-70, 1};
		soundDammage[] = {"", 0.01, 1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		
		class Wounds {
			tex[] = {};
			mat[] = {};
		};
		mapSize = 2.55;
		getInRadius = 3.5;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		irTarget = false;
		laserTarget = false;
		armorStructural = 1;
		armor = 24;
		
		class HitPoints {
			class HitHull {
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = true;
			};
			
		};
		extCameraPosition[] = {0, 1.5, -9};
		
		class ViewPilot : ViewPilot {
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = true;
		ejectDeadCargo = true;
		hasDriver = false;
		nightVision = true;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		simulation = "tankX";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		formationX = 20;
		formationZ = 30;
		precision = 1;
		brakeDistance = 0;	
		turnCoef = 0;
		maxSpeed = 0;	
		canFloat = false;
		weapons[] = {"APOBS_Charge"};
		magazines[] = {"1Rnd_APOBS_Charge"};
		type = VArmor;
		threat[] = {0.7, 1, 0.3};

		camouflage = 1;	
		audible = 0;	
		hideProxyInCombat = false;
		driverOpticsColor[] = {0, 0, 0, 1};
		
		class CargoLight {
			color[] = {0, 0, 0, 0};
			ambient[] = {0.6, 0, 0.15, 1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		
		class Reflectors {};
		secondaryExplosion = 0;
		
		class UserActions {
			class PressXToFlipTheThing {
				displayNameDefault = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				displayName = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				position = "";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this AND not canmove this AND count crew this == 0";
				statement = "this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
		};
	};
	
	class EODS_StaticCannon : EODS_StaticWeapon {
		side = TWest;
		faction = EODS_APOBS;
		displayName = "EODS_StaticCannon";
		accuracy = 0.12;	
		cost = 100000;
		modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
		threat[] = {0.8, 0.8, 0};

		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class ViewOptics;	
				gunnerForceOptics = false;
			};
		};
		icon = "\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		
		class Eventhandlers {
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	
	class APOBS_base : EODS_StaticCannon {
		side = TWest;
		faction = EODS_APOBS;
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_base";
		scope = private;
		displayName = "APOBS";
		
		class Armory {
			description = "APOBS MANPACK";
		};
		model = "\EODS_APOBS\APOBS_Open.p3d";
		picture = "\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		UiPicture = "\EODS_APOBS\UI\Ico_Apobs_Armed_ca.paa";
		threat[] = {1, 0.3, 0.3};
		cost = 150000;
		cargoAction[] = {"APOBS_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
		class Damage {
			tex[] = {};
			mat[] = {};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				elevationMode = 1;
				initCamElev = 0;
				minCamElev = -35;
				maxCamElev = 35;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				cameraDir = "look";
				discreteDistanceCameraPoint[] = {VIEWGUN};
				turretInfoType = "RscWeaponEmpty";
				discreteDistance[] = {100, 200, 300};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = false;
				modelOptics = "\A3\weapons_f\reticle\optics_empty.p3d";
				memoryPointGunnerOptics = VIEWGUN;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty.p3d";
				weapons[] = {"APOBS_Charge"};
				magazines[] = {"1Rnd_APOBS_Charge"};
				gunnerAction = "APOBS_Gunner";
				gunnergetInAction = "GetinLow";
				gunnergetOutAction = "GetOutLow";
				displayName = "Base";
				
				class ViewOptics : ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.117;
					minFov = 0.029;
					maxFov = 0.117;
					visionMode[] = {"Normal"};
					thermalMode[] = {0, 1};
				};
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
			};
		};
		
		class Eventhandlers {};
		
		class AnimationSources {};
		soundGetOut[] = {"A3\sounds_f\dummysound", 0.001, 1, 5};
		soundGetIn[] = {"A3\sounds_f\dummysound", db-70, 1, 5};
	};
	
	class APOBS : APOBS_base {
		author = "MrEwok & Monovdd";
		_generalMacro = APOBS;
		scope = public;
		side = TWest;
		faction = EODS_APOBS;
		crew = "B_Soldier_F";
		
		class Eventhandlers {
			init = "_ok = _this execVM '\EODS_APOBS\Scripts\Init.sqf';";
			fired = "_ok = _this execVM '\EODS_APOBS\Scripts\GetTurretDir.sqf';";
		};
		
		class assembleInfo {
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {APOBS_A, APOBS_B};
			displayName = "";
		};
	};
	class Bag_Base;	
	
	
	
	class Weapon_Bag_Base_F : Bag_Base {
		author = "MrEwok & Monovdd";
		_generalMacro = "Weapon_Bag_Base";
		model = "\EODS_APOBS\Backpack\APOBS_A.p3d";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_khk.paa";
		icon = "iconBackpack";
		maximumLoad = 0;
		
		class assembleInfo {
			primary = true;
			base = APOBS_B;
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};
	
	class APOBS_A : Weapon_Bag_Base_F {
		author = "MrEwok & Monovdd";
		model = "\EODS_APOBS\Backpack\APOBS_A.p3d";
		_generalMacro = APOBS_A;
		scope = public;
		displayName = "APOBS RearPack";
		hiddenSelectionsTextures[] = {};
		picture = "\EODS_APOBS\UI\Pic_Apobs_RearPack_ca.paa";
		faction = EODS_APOBS;
		mass = 320;
		
		class assembleInfo : assembleInfo {
			displayName = "APOBS";
			assembleTo = APOBS;
			base[] = {APOBS_B};
		};
	};
	
	class APOBS_B : Weapon_Bag_Base_F {
		author = "MrEwok & Monovdd";
		_generalMacro = APOBS_B;
		scope = public;
		hiddenSelectionsTextures[] = {};
		picture = "\EODS_APOBS\UI\Pic_Apobs_FrontPack_ca.paa";
		displayName = "APOBS FrontPack";
		model = "\EODS_APOBS\Backpack\APOBS_A.p3d";
		maximumLoad = 0;
		mass = 180;
		faction = EODS_APOBS;
		
		class assembleInfo {
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};
	
	class APOBS_E_B : Weapon_Bag_Base_F {
		author = "MrEwok & Monovdd";
		_generalMacro = APOBS_E_B;
		scope = protected;
		hiddenSelectionsTextures[] = {};
		picture = "\EODS_APOBS\UI\Pic_Apobs_EmptyPack_ca.paa";
		displayName = "APOBS Empty RearPack";
		model = "\EODS_APOBS\Backpack\APOBS_A.p3d";
		maximumLoad = 0;
		mass = 180;
		faction = EODS_APOBS;
		
		class assembleInfo {
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
	};
	
	class APOBS_E_W : Weapon_Bag_Base_F {
		author = "MrEwok & Monovdd";
		model = "\EODS_APOBS\Backpack\APOBS_A.p3d";
		_generalMacro = APOBS_E_W;
		scope = protected;
		displayName = "APOBS Empty Frontpack";
		hiddenSelectionsTextures[] = {};
		picture = "\EODS_APOBS\UI\Pic_Apobs_EmptyPack_ca.paa";
		faction = EODS_APOBS;
		mass = 320;
		
		class assembleInfo : assembleInfo {
			displayName = APOBS_EMPTY;
			assembleTo = "APOBS_Empty";
			base[] = {APOBS_E_B};
		};
	};
	
	class APOBS_Empty_Base : EODS_StaticWeapon {
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Empty_Base";
		scope = protected;
		model = "\EODS_APOBS\APOBS_Open_Empty.p3d";
	};
	
	class APOBS_Empty : APOBS_Empty_Base {
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Empty";
		displayName = "APOBS EMPTY";
		scope = protected;
		cargoAction[] = {"APOBS_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		
		class Eventhandlers {};
		
		class assembleInfo {
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {APOBS_E_B, APOBS_E_W};
			displayName = "";
		};
		
		class Armory {
			disabled = 1;
		};
	};
	
	class APOBS_Fired : APOBS_Empty_Base {
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Empty";
		displayName = "APOBS EMPTY";
		scope = protected;
		model = "\EODS_APOBS\APOBS_Open_fired.p3d";
		cargoAction[] = {"APOBS_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";
		
		class Eventhandlers {};
		
		class assembleInfo {
			primary = false;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {APOBS_E_B, APOBS_E_W};
			displayName = "";
		};
		
		class Armory {
			disabled = 1;
		};
	};
	class ThingX;	
	
	class APOBS_Alternative_Rocket_base : ThingX {
		mapSize = 1;
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Alternative_Rocket_base";
		scope = private;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	
	class APOBS_Alternative_Rocket : APOBS_Alternative_Rocket_base {
		mapSize = 1;
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Alternative_Rocket";
		scope = protected;
		displayName = "";
		model = "\EODS_APOBS\Fake_APOBS_Rocket_alternative.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
	};
	
	class APOBS_Charge_Script_Base : ThingX {
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Charge_Script_Base";
		scope = protected;
		model = "\EODS_APOBS\APOBS_Charge_Script.p3d";
	};
	
	class APOBS_Charge_Script : APOBS_Charge_Script_Base {
		author = "MrEwok & Monovdd";
		_generalMacro = "APOBS_Charge_Script";
		scope = protected;
		side = TWest;
		cargoAction[] = {};
		getInAction = "";
		getOutAction = "";
		
		class Eventhandlers {
			init = "_ok = _this execVM '\EODS_APOBS\Scripts\hide.sqf'";
		};
		
		class Armory {
			disabled = 1;
		};
	};
};
