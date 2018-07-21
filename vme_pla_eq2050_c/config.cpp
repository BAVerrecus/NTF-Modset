class CfgPatches
{
	class vme_pla_eq2050_c
	{
		units[]=
		{
			"VME_PLA_EQ2050",
			"VME_PLA_EQ2050_MG",
			"VME_PLA_EQ2050_GL",
			"VME_PLA_EQ2050_AT",
			"VME_PLA_EQ2050_Flatbed",
			"VME_PLA_EQ2050_AA",
			"VME_PLA_EQ2050_UAVC",
			"VME_PLA_EQ2050_HQ",
			"VME_PLA_EQ2050_MED",
			"VME_PLA_Quadbike"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"vme_pla_statics"
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		eq2050_Driver="eq2050_Driver";
		eq2050_Gunner01="eq2050_Gunner01";
		eq2050_Gunner03="eq2050_Gunner03";
		eq2050_Cargo01="eq2050_Cargo01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class KIA_eq2050_Driver: DefaultDie
		{
			actions="DeadActions";
			file="\vme_pla_eq2050\eq2050\anims\KIA_eq2050_Driver.rtm";
			speed=0.5;
			looped=0;
			terminal=1;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
			soundEnabled=0;
		};
		class eq2050_Driver: Crew
		{
			file="\vme_pla_eq2050\eq2050\anims\eq2050_Driver.rtm";
			interpolateTo[]=
			{
				"KIA_eq2050_Driver",
				1
			};
			speed=0.5;
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class KIA_eq2050_Gunner: KIA_eq2050_Driver
		{
			file="\vme_pla_eq2050\eq2050\anims\KIA_eq2050_gunnerOUT.rtm";
			speed=0.5;
		};
		class eq2050_Gunner01: Crew
		{
			file="\vme_pla_eq2050\eq2050\anims\eq2050_M2gunnerOUT.rtm";
			interpolateTo[]=
			{
				"KIA_eq2050_Gunner",
				1
			};
			speed=0.5;
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class eq2050_Gunner03: Crew
		{
			file="\vme_pla_eq2050\eq2050\anims\eq2050_TOW_gunnerOUT.rtm";
			interpolateTo[]=
			{
				"KIA_eq2050_Gunner",
				1
			};
			speed=0.5;
			leftHandIKCurve[]={1};
			rightHandIKCurve[]={1};
		};
		class KIA_eq2050_Cargo01: KIA_eq2050_Driver
		{
			file="\vme_pla_eq2050\eq2050\anims\KIA_eq2050_Cargo01.rtm";
			speed=0.5;
		};
		class eq2050_Cargo01: Crew
		{
			file="\vme_pla_eq2050\eq2050\anims\eq2050_Cargo01_V0.rtm";
			interpolateTo[]=
			{
				"KIA_eq2050_Cargo01",
				0.1
			};
			speed=0.5;
		};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class VME_QJY88_200Rnd_rveh: VehicleMagazine
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		displayName="$STR_VME_200Rnd_DBP10_DN";
		displayNameShort="$STR_VME_DBP10_DNS";
		descriptionShort="$STR_VME_200Rnd_DBP10_DS";
		picture="\vme_pla_weapons\Ui\QJY88_200Rnd_DBP10.paa";
		ammo="VME_58x42_DBP10";
		count=200;
		initSpeed=910;
		mass=53.299999;
		tracersEvery=5;
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class VME_PLA_RepairKitItem: InventoryItem_Base_F
	{
		type=620;
		allowedSlots[]={901};
	};
	class ItemCore;
	class ToolKitItem;
	class VME_RepairKit: ItemCore
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		scopeCurator=2;
		scopeArsenal=2;
		scope=2;
		displayName="Repair Kit [PLA]";
		descriptionShort="Repair Components - Enables repair of vehicles";
		picture="\A3\Weapons_F\Items\data\UI\gear_Toolkit_CA.paa";
		model="\VME_PLA_eq2050\eq2050\Repairkit.p3d";
		class ItemInfo: ToolKitItem
		{
			mass=80;
			uniformModel="\VME_PLA_eq2030\eq2030\Repairkit.p3d";
		};
	};
	class VME_PLA_QJY88;
	class VME_PLA_QJY88_rveh: VME_PLA_QJY88
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		magazines[]=
		{
			"VME_QJY88_200Rnd_rveh"
		};
		magazineReloadTime=6;
		class GunParticles
		{
			class SmokeEffect
			{
				positionName="side_GunBeg";
				directionName="side_GunEnd";
				effectName="VME_RifleAmmoCloud";
			};
			class shelleject
			{
				positionName="Nabojniceend";
				directionName="Nabojnicestart";
				effectName="MachineGunCartridge338";
			};
			class link
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="MachineGunEject2";
			};
		};
	};
};
class DefaultEventHandlers;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	class VME_PLA_EQ2050: Car_F
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050.jpg";
		editorSubcategory="EdSubcat_Cars";
		scopeArsenal=2;
		scopeCurator=2;
		scope=2;
		displayName="EQ-2050";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"clan",
			"logo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vme_pla_eq2050\eq2050\ct.paa",
			"\vme_pla_eq2050\eq2050\men1.paa",
			"\vme_ztz99\ztz99\555_ff.paa",
			"\vme_tex\bz\vmel.paa"
		};
		selectionClan="logo";
		faction="PLA_Faction";
		side=2;
		crew="PLA_SoldierAR_HM_F";
		Picture="\vme_pla_eq2050\eq2050\HMMWV_CA.paa";
		Icon="\vme_pla_eq2050\eq2050\icomap_hmwv.paa";
		mapSize=8;
		nameSound="offroad";
		enableGPS=1;
		ejectDamageLimit=0.94999999;
		crewVulnerable=1;
		crewCrashProtection=0.001;
		crewExplosionProtection=0.80000001;
		secondaryExplosion=0;
		castDriverShadow=0;
		driverIsCommander=1;
		driverAction="eq2050_Driver";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_armedcar_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_armedcar_p"
				};
			};
		};
		class ViewPilot
		{
			initAngleX=10;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=20;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.80000001;
			minFov=0.30000001;
			maxFov=1.2;
		};
		dustFrontLeftPos="dustFrontLeft";
		dustFrontRightPos="dustFrontRight";
		dustBackLeftPos="dustBackLeft";
		dustBackRightPos="dustBackRight";
		weapons[]=
		{
			"TruckHorn2"
		};
		magazines[]={};
		armor=60;
		damageResistance=0.00562;
		cost=100000;
		threat[]={0.1,0.1,0.1};
		outsideSoundFilter=0;
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getin",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\getout",
			0.56234097,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_start",
			0.39810699,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_start",
			0.63095701,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\int_stop",
			0.39810699,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop",
			0.63095701,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
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
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
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
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00",
					0.35481301,
					1,
					200
				};
				frequency="0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01",
					0.39810699,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02",
					0.39810699,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03",
					0.446684,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04",
					0.50118703,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05",
					0.50118703,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06",
					0.56234097,
					1,
					300
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00",
					0.50118703,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01",
					0.50118703,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02",
					0.56234097,
					1,
					200
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03",
					0.63095701,
					1,
					250
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04",
					0.79432797,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05",
					0.89125103,
					1,
					350
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00",
					0.22387201,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01",
					0.25118899,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02",
					0.281838,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03",
					0.316228,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04",
					0.316228,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05",
					0.35481301,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06",
					0.39810699,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00",
					0.35481301,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01",
					0.39810699,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02",
					0.446684,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03",
					0.50118703,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04",
					0.56234097,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05",
					0.63095701,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06",
					0.707946,
					1
				};
				frequency="0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.79432797,
					1,
					120
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.707946,
					1,
					120
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.707946,
					1,
					120
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.707946,
					1,
					120
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",
					0.707946,
					1,
					120
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",
					0.707946,
					1,
					120
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.25893,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",
					0.39810699,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118703,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.39810699,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.56234097,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
		};
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		turnCoef=2.5;
		steerAheadPlan=0.2;
		steerAheadSimul=0.40000001;
		predictTurnPlan=0.89999998;
		predictTurnSimul=0.5;
		brakeDistance=1;
		terrainCoef=1.5;
		idleRpm=800;
		redRpm=4500;
		brakeIdleSpeed=1.78;
		fuelCapacity=250;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.75,
				"N",
				0,
				"D1",
				4.3000002,
				"D2",
				2.3,
				"D3",
				1.5,
				"D4",
				1,
				"D5",
				0.73000002
			};
			TransmissionRatios[]=
			{
				"High",
				6.7589998
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		enginePower=276;
		maxOmega=471;
		peakTorque=1253;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.278,0.5},
			{0.34999999,0.75},
			{0.461,1},
			{0.60000002,0.94999999},
			{0.69999999,0.85000002},
			{0.80000001,0.75},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.126";
				mass=40;
				MOI=12.8;
				dampingRate=0.1;
				maxBrakeTorque=10000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				MaxDroop=0.25;
				sprungMass=698;
				springStrength=65000;
				springDamperRate=16000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3500;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3500;
			};
		};
		class UserActions
		{
			class Sparetire
			{
				displayName="Service Vehicle";
				position="zamerny";
				showWindow=0;
				radius=6;
				priority=-1;
				onlyForPlayer=0;
				condition="(alive this) && (this animationphase 'spare' < 1) && ((this getHitPointDamage 'HitLFWheel' > 0.9) || (this getHitPointDamage 'HitLBWheel' > 0.9) || (this getHitPointDamage 'HitRFWheel' > 0.9) || (this getHitPointDamage 'HitRBWheel' > 0.9))";
				statement="[this, 'spare'] execVM 'vme_pla_eq2050_c\scripts\repair.sqf'";
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=1;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=9.8249998;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=9.8249998;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=9.8249998;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=9.8249998;
				passThrough=0;
			};
		};
		class AnimationSources
		{
			class belt_rotation
			{
				source="reload";
				weapon="VME_PLA_QJY88_EQ2050";
			};
			class spare
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class fuelcan
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint="HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint="HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint="HitRBWheel";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.60000002;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.60000002;
				};
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		transportSoldier=0;
		typicalCargo[]=
		{
			"PLA_SoldierAR_HM_F"
		};
		cargoAction[]=
		{
			"eq2050_Cargo01"
		};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				gunnerName="$STR_a3_turrets_cargoturret_f";
				proxyIndex=1;
				maxElev=45;
				minElev=-35;
				maxTurn=45;
				minTurn=-125;
				isPersonTurret=1;
				ejectDeadGunner=0;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				enabledByAnimationSource="";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos rearRight";
				memoryPointsGetInGunnerDir="pos rearRight dir";
				gunnerName="$STR_a3_turrets_cargoturret_r";
				proxyIndex=2;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=3;
				maxTurn=125;
				minTurn=-45;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_a3_turrets_cargoturret_m";
				proxyIndex=4;
				maxTurn=45;
				minTurn=-45;
			};
		};
		maximumLoad=4000;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class Binocular
			{
				name="Binocular";
				count=1;
			};
			class NVGoggles_INDEP
			{
				name="NVGoggles_INDEP";
				count=1;
			};
		};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="I_Parachute_02_F";
				parachuteHeightLimit=40;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		dammageHalf[]=
		{
			"\vme_pla_eq2050\eq2050\HMMWV_glass_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glassbr1_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glass_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glassbr1_CA.paa"
		};
		dammageFull[]=
		{
			"\vme_pla_eq2050\eq2050\HMMWV_glass_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glassbr2_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glass_CA.paa",
			"\vme_pla_eq2050\eq2050\HMMWV_glassbr2_CA.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"vme_pla_EQ2050\EQ2050\23qt.rvmat",
				"vme_pla_EQ2050\EQ2050\23qt.rvmat",
				"vme_pla_EQ2050\EQ2050\23qt_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\bz.rvmat",
				"vme_pla_EQ2050\EQ2050\bz.rvmat",
				"vme_pla_EQ2050\EQ2050\bz_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\CT2.rvmat",
				"vme_pla_EQ2050\EQ2050\CT2.rvmat",
				"vme_pla_EQ2050\EQ2050\CT2_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\fxp.rvmat",
				"vme_pla_EQ2050\EQ2050\fxp.rvmat",
				"vme_pla_EQ2050\EQ2050\fxp_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\LUN.rvmat",
				"vme_pla_EQ2050\EQ2050\LUN.rvmat",
				"vme_pla_EQ2050\EQ2050\LUN_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\QJZ89.rvmat",
				"vme_pla_EQ2050\EQ2050\QJZ89.rvmat",
				"vme_pla_EQ2050\EQ2050\QJZ89_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\ybiao.rvmat",
				"vme_pla_EQ2050\EQ2050\ybiao.rvmat",
				"vme_pla_EQ2050\EQ2050\ybiao_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\men.rvmat",
				"vme_pla_EQ2050\EQ2050\men.rvmat",
				"vme_pla_EQ2050\EQ2050\men_destruct.rvmat",
				"vme_pla_EQ2050\EQ2050\zy.rvmat",
				"vme_pla_EQ2050\EQ2050\zy.rvmat",
				"vme_pla_EQ2050\EQ2050\zy_destruct.rvmat",
				"vme_pla_EQ2050\HJ8\hj8.rvmat",
				"vme_pla_EQ2050\HJ8\hj8.rvmat",
				"vme_pla_EQ2050\HJ8\hj8_destruct.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"vme_pla_EQ2050\EQ2050\men_destruct.rvmat"
			};
		};
		class Library
		{
			libTextDesc="EQ-2050 offroad vehicle. Reverse-engineered copy of the U.S. HMMWV.";
		};
	};
	class VME_PLA_EQ2050_MG: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_MG.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_MG.p3d";
		displayName="EQ-2050 (MG)";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_QJZ89";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_QJZ89";
			};
			class Revolving
			{
				source="revolving";
				weapon="VME_PLA_QJZ89";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerAction="eq2050_Gunner01";
				optics=0;
				outGunnerMayFire=1;
				gunnerForceOptics=0;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscWeaponRangeZeroing";
				selectionFireAnim="zasleh";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				initElev=0;
				minElev=-45;
				maxElev=65;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				weapons[]=
				{
					"VME_PLA_QJZ89"
				};
				magazines[]=
				{
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108"
				};
				gunnergetInAction="";
				gunnergetOutAction="";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=65;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					visionMode[]=
					{
						"Normal"
					};
				};
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234097,
					1,
					30
				};
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				body="mainTurret";
				gun="mainGun";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04;
		};
	};
	class VME_PLA_EQ2050_reconMG: VME_PLA_EQ2050_MG
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_GL.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_reconMG.p3d";
		displayName="EQ-2050 (Recon MG)";
		weapons[]=
		{
			"TruckHorn2",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"VME_Type85",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				memoryPointGun="gunBeg";
				gunnerRightHandAnimName="handle_R";
				gunnerLeftHandAnimName="handle_L";
			};
			class SideTurret: MainTurret
			{
				gunnerName="$STR_POSITION_COMMANDER";
				weapons[]=
				{
					"VME_PLA_QJY88_rveh",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				gunnerAction="eq2050_Cargo01";
				gunnerInAction="eq2050_Cargo01";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				proxyType="CPCommander";
				primaryObserver=1;
				primaryGunner=0;
				commanding=5;
				initElev=10;
				minElev=-20;
				maxElev=60;
				initTurn=-50;
				minTurn=-135;
				maxTurn=70;
				gunnerOpticsModel="\A3\Weapons_F\empty.p3d";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-20;
					maxAngleX=60;
					initAngleY=0;
					minAngleY=-135;
					maxAngleY=70;
					initFov=0.22;
					minFov=0.22;
					maxFov=0.22;
				};
				selectionFireAnim="side_zasleh";
				gunBeg="side_gunBeg";
				gunEnd="side_gunEnd";
				body="SideTurret";
				gun="SideGun";
				memoryPointGunnerOptics="side_gunnerview";
				animationSourceBody="SideTurret";
				animationSourceGun="SideGun";
				LODTurnedOut=1200;
				LODTurnedIn=1200;
				turretInfoType="RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				stabilizedInAxes="StabilizedInAxesNone";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=1;
				maxTurn=125;
				minTurn=-45;
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerName="$STR_a3_turrets_bench_l1";
				proxyIndex=3;
				maxTurn=125;
				minTurn=-85;
			};
			class CargoTurret_04;
		};
		class Reflectors: Reflectors
		{
			class Left: Left
			{
			};
			class Right: Right
			{
			};
			class gunnerlight: Left
			{
				position="gunner light";
				direction="gunner light dir";
				hitpoint="gunnerlight";
				selection="gunner light";
				innerAngle=35;
				outerAngle=60;
			};
			class commanderlight: Left
			{
				position="commander light";
				direction="commander light dir";
				hitpoint="commanderlight";
				selection="commander light";
				innerAngle=35;
				outerAngle=60;
			};
		};
		class UserActions: UserActions
		{
			class Sparetire2
			{
				displayName="Service Vehicle";
				position="zamerny";
				showWindow=0;
				radius=6;
				priority=-1;
				onlyForPlayer=0;
				condition="(alive this) && (this animationphase 'spare2' < 1) && (this animationphase 'spare' > 0.9) && ((this getHitPointDamage 'HitLFWheel' > 0.9) || (this getHitPointDamage 'HitLBWheel' > 0.9) || (this getHitPointDamage 'HitRFWheel' > 0.9) || (this getHitPointDamage 'HitRBWheel' > 0.9))";
				statement="[this, 'spare2'] execVM 'vme_pla_eq2050_c\scripts\repair.sqf'";
			};
			class Sparetire3
			{
				displayName="Service Vehicle";
				position="zamerny";
				showWindow=0;
				radius=6;
				priority=-1;
				onlyForPlayer=0;
				condition="(alive this) && (this animationphase 'spare3' < 1) && (this animationphase 'spare2' > 0.9) && ((this getHitPointDamage 'HitLFWheel' > 0.9) || (this getHitPointDamage 'HitLBWheel' > 0.9) || (this getHitPointDamage 'HitRFWheel' > 0.9) || (this getHitPointDamage 'HitRBWheel' > 0.9))";
				statement="[this, 'spare3'] execVM 'vme_pla_eq2050_c\scripts\repair.sqf'";
			};
		};
		class AnimationSources: AnimationSources
		{
			class spare2: spare
			{
			};
			class spare3: spare
			{
			};
			class side_ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_QJY88_rveh";
			};
			class side_ReloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_QJY88_rveh";
			};
			class side_Revolving
			{
				source="revolving";
				weapon="VME_PLA_QJY88_rveh";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="VME_Type85";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_Type85";
			};
			class Revolving
			{
				source="revolving";
				weapon="VME_Type85";
			};
			class opticHide
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class opticsHide
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		smokeLauncherGrenadeCount=9;
		smokeLauncherVelocity=12;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=275;
	};
	class VME_PLA_EQ2050_GL: VME_PLA_EQ2050_MG
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_GL.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_GL.p3d";
		displayName="EQ-2050 (GL)";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_QLZ04_35MM";
			};
			class reloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_QLZ04_35MM";
			};
			class Revolving
			{
				source="revolving";
				weapon="VME_PLA_QLZ04_35MM";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction="eq2050_Gunner01";
				gunnerLeftHandAnimName="LH_grip";
				gunnerRightHandAnimName="RH_grip";
				outGunnerMayFire=1;
				weapons[]=
				{
					"VME_PLA_QLZ04_35MM"
				};
				magazines[]=
				{
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04"
				};
				gunnerOpticsModel="\vme_pla_qlz04\data\optika_AGS30";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				gunnerForceOptics=0;
				initElev=0;
				minElev=-45;
				maxElev=65;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					useModelOptics=1;
					gunnerOpticsModel="\vme_pla_qlz04\data\optika_AGS30";
					gunnerOpticsEffect[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					initAngleX=0;
					minAngleX=-45;
					maxAngleX=65;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.117;
					minFov=0.028999999;
					maxFov=0.117;
					memoryPointGunnerOptics="gunnerview";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234097,
					1,
					30
				};
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				body="mainTurret";
				gun="mainGun";
			};
		};
	};
	class VME_PLA_EQ2050_reconGL: VME_PLA_EQ2050_GL
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_GL.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_reconGL.p3d";
		displayName="EQ-2050 (Recon GL)";
		weapons[]=
		{
			"TruckHorn2",
			"SmokeLauncher"
		};
		magazines[]=
		{
			"SmokeLauncherMag",
			"SmokeLauncherMag"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"VME_PLA_QLZ04_35MM",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"VME_PLA_30Rnd_35mm_QLZ04",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
			};
			class SideTurret: MainTurret
			{
				gunnerName="$STR_POSITION_COMMANDER";
				weapons[]=
				{
					"VME_PLA_QJY88_rveh",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"VME_QJY88_200Rnd_rveh",
					"SmokeLauncherMag",
					"SmokeLauncherMag"
				};
				gunnerAction="eq2050_Cargo01";
				gunnerInAction="eq2050_Cargo01";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="";
				proxyType="CPCommander";
				primaryObserver=1;
				primaryGunner=0;
				commanding=5;
				initElev=10;
				minElev=-20;
				maxElev=60;
				initTurn=-50;
				minTurn=-135;
				maxTurn=70;
				gunnerOpticsModel="\A3\Weapons_F\empty.p3d";
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-20;
					maxAngleX=60;
					initAngleY=0;
					minAngleY=-135;
					maxAngleY=70;
					initFov=0.22;
					minFov=0.22;
					maxFov=0.22;
				};
				selectionFireAnim="side_zasleh";
				gunBeg="side_gunBeg";
				gunEnd="side_gunEnd";
				body="SideTurret";
				gun="SideGun";
				memoryPointGunnerOptics="side_gunnerview";
				animationSourceBody="SideTurret";
				animationSourceGun="SideGun";
				LODTurnedOut=1200;
				LODTurnedIn=1200;
				turretInfoType="RscWeaponZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				stabilizedInAxes="StabilizedInAxesNone";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_a3_turrets_cargoturret_l";
				proxyIndex=1;
				maxTurn=125;
				minTurn=-45;
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerName="$STR_a3_turrets_bench_l1";
				proxyIndex=3;
				maxTurn=125;
				minTurn=-85;
			};
			class CargoTurret_04;
		};
		class Reflectors: Reflectors
		{
			class Left: Left
			{
			};
			class Right: Right
			{
			};
			class gunnerlight: Left
			{
				position="gunner light";
				direction="gunner light dir";
				hitpoint="gunnerlight";
				selection="gunner light";
				innerAngle=35;
				outerAngle=60;
			};
			class commanderlight: Left
			{
				position="commander light";
				direction="commander light dir";
				hitpoint="commanderlight";
				selection="commander light";
				innerAngle=35;
				outerAngle=60;
			};
		};
		class UserActions: UserActions
		{
			class Sparetire2
			{
				displayName="Service Vehicle";
				position="zamerny";
				showWindow=0;
				radius=6;
				priority=-1;
				onlyForPlayer=0;
				condition="(alive this) && (this animationphase 'spare2' < 1) && (this animationphase 'spare' > 0.9) && ((this getHitPointDamage 'HitLFWheel' > 0.9) || (this getHitPointDamage 'HitLBWheel' > 0.9) || (this getHitPointDamage 'HitRFWheel' > 0.9) || (this getHitPointDamage 'HitRBWheel' > 0.9))";
				statement="[this, 'spare2'] execVM 'vme_pla_eq2050_c\scripts\repair.sqf'";
			};
			class Sparetire3
			{
				displayName="Service Vehicle";
				position="zamerny";
				showWindow=0;
				radius=6;
				priority=-1;
				onlyForPlayer=0;
				condition="(alive this) && (this animationphase 'spare3' < 1) && (this animationphase 'spare2' > 0.9) && ((this getHitPointDamage 'HitLFWheel' > 0.9) || (this getHitPointDamage 'HitLBWheel' > 0.9) || (this getHitPointDamage 'HitRFWheel' > 0.9) || (this getHitPointDamage 'HitRBWheel' > 0.9))";
				statement="[this, 'spare3'] execVM 'vme_pla_eq2050_c\scripts\repair.sqf'";
			};
		};
		class AnimationSources: AnimationSources
		{
			class spare2: spare
			{
			};
			class spare3: spare
			{
			};
			class side_ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_QJY88_rveh";
			};
			class side_ReloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_QJY88_rveh";
			};
			class side_Revolving
			{
				source="revolving";
				weapon="VME_PLA_QJY88_rveh";
			};
		};
		smokeLauncherGrenadeCount=9;
		smokeLauncherVelocity=12;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=275;
	};
	class VME_PLA_EQ2050_AT: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_AT.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_AT.p3d";
		displayName="EQ-2050 (ATGM)";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"clan",
			"logo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vme_pla_eq2050\eq2050\ct.paa",
			"\vme_pla_eq2050\eq2050\men1.paa",
			"\vme_pla_eq2050\hj8\hj8_co.paa",
			"\vme_ztz99\ztz99\555_ff.paa",
			"\vme_tex\bz\vmel.paa"
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_HJ8Launcher";
			};
			class reloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_HJ8Launcher";
			};
			class Revolving
			{
				source="revolving";
				weapon="VME_PLA_HJ8Launcher";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName="$STR_POSITION_GUNNER";
				gunnerCompartments="Compartment1";
				proxyType="CPGunner";
				proxyIndex=1;
				primaryObserver=1;
				primaryGunner=1;
				commanding=1;
				startEngine=0;
				turretInfoType="RscWeaponRangeFinder";
				gunnerForceOptics=0;
				gunnerOpticsModel="vme_pla_hj8\data\optika_TOW";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				initElev=0;
				minElev=-50;
				maxElev=75;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				weapons[]=
				{
					"VME_PLA_HJ8Launcher",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"VME_PLA_HJ8_mag",
					"Laserbatteries"
				};
				gunnerAction="eq2050_Gunner03";
				gunnerRightHandAnimName="RH_grip";
				gunnerLeftHandAnimName="LH_grip";
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					memoryPointGunnerOptics="gunnerview";
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.69999999;
					minFov=0.054000001;
					maxFov=0.69999999;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				memoryPointsGetInGunner="pos rearRight";
				memoryPointsGetInGunnerDir="pos rearRight dir";
				gunnergetInAction="GetInHigh";
				gunnergetOutAction="GetOutHigh";
				stabilizedInAxes="StabilizedInAxesBoth";
				hasGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				memoryPointGunnerOptics="gunnerview";
				class Turrets;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_01
			{
			};
			class CargoTurret_04;
		};
	};
	class VME_PLA_EQ2050_Flatbed: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_Flatbed.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_Flatbed.p3d";
		displayName="EQ-2050 (Cargo)";
		vehicleClass="Support";
		threat[]={0,0,0};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"VVT_cargo_1",
					"VVT_cargo_2"
				};
				disableHeightLimit=0;
				maxLoadMass=2000;
				cargoAlignment[]=
				{
					"center",
					"front"
				};
				cargoSpacing[]={0,0,0};
				exits[]=
				{
					"VVT_exit"
				};
				unloadingInterval=2;
				loadingDistance=5;
				loadingAngle=60;
				parachuteClassDefault="I_Parachute_02_F";
				parachuteHeightLimitDefault=-1;
			};
		};
		class EventHandlers: DefaultEventHandlers
		{
			init="_this execVM '\VME_PLA_EQ2050_c\scripts\loadCargo.sqf'";
		};
	};
	class VME_PLA_EQ2050_AA: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_AA.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_AA.p3d";
		editorSubcategory="EdSubcat_AAs";
		displayName="FB-6A";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="VME_PLA_QW2Launcher";
			};
			class reloadMagazine
			{
				source="reloadmagazine";
				weapon="VME_PLA_QW2Launcher";
			};
			class Revolving
			{
				source="revolving";
				weapon="VME_PLA_QW2Launcher";
			};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName="$STR_POSITION_GUNNER";
				gunnerCompartments="Compartment2";
				proxyType="CPGunner";
				proxyIndex=1;
				primaryObserver=1;
				primaryGunner=1;
				commanding=1;
				startEngine=0;
				turretInfoType="RscWeaponRangeFinder";
				gunnerForceOptics=0;
				gunnerOpticsModel="vme_pla_hj8\data\optika_TOW";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
				initElev=0;
				minElev=-25;
				maxElev=85;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				weapons[]=
				{
					"VME_PLA_QW2Launcher",
					"VME_PLA_QJZ89",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"VME_PLA_QW2Launchermagx8",
					"VME_PLA_QW2Launchermagx8",
					"VME_PLA_QW2Launchermagx8",
					"VME_PLA_QW2Launchermagx8",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"VME_PLA_50Rnd_127x108",
					"Laserbatteries"
				};
				gunnerAction="Truck_Cargo01";
				gunnerRightHandAnimName="RH_grip";
				gunnerLeftHandAnimName="LH_grip";
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
				class ViewOptics
				{
					memoryPointGunnerOptics="gunnerview";
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.69999999;
					minFov=0.054000001;
					maxFov=0.69999999;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.56234097,
					1,
					30
				};
				memoryPointsGetInGunner="pos backRight";
				memoryPointsGetInGunnerDir="pos backRight dir";
				gunnergetInAction="GetInHigh";
				gunnergetOutAction="GetOutHigh";
				stabilizedInAxes="StabilizedInAxesBoth";
				hasGunner=1;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				gunBeg="mainGunBeg";
				gunEnd="mainGunEnd";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				memoryPointGunnerOptics="gunnerview";
				class Turrets;
			};
		};
	};
	class VME_PLA_EQ2050_UAVC: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_UAVC.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_HU.p3d";
		displayName="EQ-2050 (UAV Controller)";
		uavHacker=1;
		threat[]={0.1,0.1,0.1};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"clan",
			"logo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vme_pla_eq2050\eq2050\ct.paa",
			"\vme_pla_eq2050\eq2050\men1.paa",
			"\vme_pla_eq2050\eq2050\top.paa",
			"",
			"\vme_ztz99\ztz99\555_ff.paa",
			"\vme_tex\bz\vmel.paa"
		};
		class Turrets;
		class AnimationSources: AnimationSources
		{
			class UAVAntenna: spare
			{
				initPhase=0;
			};
		};
		transportSoldier=3;
		class TransportBackpacks
		{
			class _xx_PLA_UAV_backpack
			{
				backpack="PLA_UAV_backpack";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_PLA_UavTerminal
			{
				name="PLA_UavTerminal";
				count=3;
			};
		};
	};
	class VME_PLA_EQ2050_MED: VME_PLA_EQ2050_UAVC
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_MED.jpg";
		displayName="EQ-2050 (MED)";
		hiddenSelectionsTextures[]=
		{
			"\vme_pla_eq2050\eq2050\ct.paa",
			"\vme_pla_eq2050\eq2050\men1.paa",
			"\vme_pla_eq2050\eq2050\top.paa",
			"\vme_pla_eq2050\eq2050\flag_rcross_co.paa",
			"\vme_ztz99\ztz99\555_ff.paa",
			"\vme_tex\bz\vmel.paa"
		};
		attendant=1;
		threat[]={0,0,0};
		class AnimationSources: AnimationSources
		{
			class UAVAntenna: spare
			{
				initPhase=1;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
		class TransportBackpacks
		{
		};
	};
	class VME_PLA_EQ2050_HQ: VME_PLA_EQ2050
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_EQ2050_HQ.jpg";
		model="\vme_pla_EQ2050\VME_PLA_EQ2050_HQ.p3d";
		displayName="EQ-2050 (HQ)";
		threat[]={0.1,0.1,0.1};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"clan",
			"logo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vme_pla_eq2050\eq2050\ct.paa",
			"\vme_pla_eq2050\eq2050\men1.paa",
			"\vme_pla_eq2050\eq2050\top.paa",
			"\vme_ztz99\ztz99\555_ff.paa",
			"\vme_tex\bz\vmel.paa"
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				proxyType="CPCommander";
				proxyIndex=1;
				primaryGunner=0;
				primaryObserver=1;
				commanding=2;
				gunnerName="$STR_POSITION_COMMANDER";
				hasGunner=1;
				gunnerCompartments="Compartment1";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F.p3d";
				gunnerOpticsEffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				outGunnerMayFire=1;
				forceHideGunner=0;
				viewGunnerInExternal=1;
				gunnerInAction="Truck_Cargo01";
				gunnerAction="Truck_Cargo01";
				animationSourceHatch="";
				gunnergetInAction="GetInHigh";
				gunnergetOutAction="GetOutHigh";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_1",
					0.25118899,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",
					0.25118899,
					1,
					10
				};
				startEngine=0;
				gunnerForceOptics=0;
				initElev=0;
				minElev=-40;
				maxElev=75;
				initTurn=0;
				minTurn=-360;
				maxTurn=360;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-40;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-360;
					maxAngleY=360;
					initFov=0.25;
					minFov=0.001;
					maxFov=0.89999998;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,5,6};
				};
				class ViewGunner
				{
					initAngleX=0;
					minAngleX=-50;
					maxAngleX=75;
					initAngleY=0;
					minAngleY=-165;
					maxAngleY=165;
					initFov=0.80000001;
					minFov=0.25;
					maxFov=1.255;
				};
				memoryPointGunnerOptics="gunnerview";
				body="MainTurret";
				gun="MainGun";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				animationSourceBody="MainTurret";
				animationSourceGun="MainGun";
				animationSourceElevation="obsElevation";
				soundElevation[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03_elevation",
					0.40000001,
					1,
					10
				};
				usePip=1;
				turretInfoType="RscOptics_Strider_commander";
				stabilizedInAxes="StabilizedInAxesBoth";
				castGunnerShadow=0;
				viewGunnerShadow=0;
				isPersonTurret=0;
				class Turrets;
			};
		};
		class RenderTargets: RenderTargets
		{
			class CommanderPIP
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.60000002;
				};
			};
		};
		transportSoldier=2;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=5;
			};
		};
		class TransportBackpacks
		{
		};
	};
	class I_Quadbike_01_F;
	class VME_PLA_Quadbike: I_Quadbike_01_F
	{
		author="$STR_Virtal_Military_Engineer_Authors";
		editorPreview="\vme_pla_eq2050\eq2050\VME_PLA_Quadbike.jpg";
		scopeCurator=2;
		scopeArsenal=2;
		scope=2;
		side=2;
		faction="PLA_Faction";
		crew="PLA_SoldierAR_HM_F";
		typicalCargo[]=
		{
			"PLA_SoldierAR_HM_F"
		};
		textureList[]=
		{
			"Black",
			1,
			"Blufor",
			1,
			"Opfor",
			1,
			"Indep",
			1,
			"GreenHex",
			1,
			"Guerrilla_01",
			1,
			"Guerrilla_02",
			1
		};
		transportSoldier=0;
		driverCompartment="Compartment1";
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos frontRight";
				memoryPointsGetInGunnerDir="pos frontRight dir";
				gunnerName="Passenger";
				proxyIndex=1;
				maxElev=60;
				minElev=-55;
				maxTurn=135;
				minTurn=-135;
				isPersonTurret=1;
				ejectDeadGunner=0;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				enabledByAnimationSource="";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="I_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
			};
		};
	};
};

