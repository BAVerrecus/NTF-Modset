class DefaultEventhandlers;
class CfgPatches
{
	class EOD_SUIT
	{
		units[]={};
		author="Mr Ewok, NorX Aengell,Burnes15th";
		weapons[]={"EOD9_HELMET","EOD_SUIT_vest","EOD_Uniform"};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class Extended_PostInit_EventHandlers
{
	EOD_SUIT_Init="if (hasInterface) then {[] execVM '\EOD_SUIT\XENO_Init_Script_EOD_SUIT.sqf'}";
};
class EODS_SoundRegulation_settings
{
	// #include "\userconfig\EODS\EODS_config.hpp"
};
class CfgSounds
{
	class Redbreather2_resp_Low
	{
		name="Redbreather2_resp_Low";
		sound[]=
		{
			"EOD_SUIT\Sound\Redbreather2_resp_Low_1shot.wss", // "EOD_SUIT\Sound\Redbreather2_resp_Low.wss", 
			4,
			1,
			1
		};
		titles[]={};
	};
	class Redbreather3_resp_High
	{
		name="Redbreather3_resp_High";
		sound[]=
		{
			"EOD_SUIT\Sound\Redbreather3_resp_High_1shot.wss", //"EOD_SUIT\Sound\Redbreather3_resp_High.wss", 
			4,
			1,
			1
		};
		titles[]={};
	};
};
class CfgVehicleClasses
{
	class EWK_veh_class
	{
		displayName = "$STR_EODS_EOD_units";
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};
	class B_Soldier_base_F: SoldierWB
	{
	};
	class B_engineer_F: B_Soldier_base_F
	{
	};

	class EOD_engineer: B_engineer_F
	{
	scope= 2;
	author = "MrEwok";
	displayName= "$STR_EOD_engineer";
	vehicleClass= "EWK_veh_class";
	engineer = 1;
	attendant = 0;
	uniformAccessories[]= {};
	nakedUniform = "U_BasicBody";
	uniformClass= "EOD_Uniform";
	model= "\EOD_SUIT\Models\EOD_Uniform.p3d";
	hiddenSelections[]={"insignia"};
	hiddenSelectionsTextures[]={};
	weapons[]= {"Throw","Put"};
	respawnWeapons[]= {"Throw","Put"};
	Items[]= {"FirstAidKit"};
	RespawnItems[]= {"FirstAidKit"};
	magazines[]= {};
	respawnMagazines[]= {};
	linkedItems[] = {"EOD9_HELMET","EOD_SUIT_vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	respawnLinkedItems[] = {"EOD9_HELMET","EOD_SUIT_vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	backpack = "";
	 class Eventhandlers
	 {
		 init= "_this call EOD_Suit_fnc_Check_Helmet";
	 };
	class Wounds
		{
			tex[] = {};
			mat[] = {
				"eod_suit\textureswip\green_tex2.rvmat", 			/// what material is changed
				"eod_suit\textureswip\Green_Tex_wound.rvmat",	/// how does the material look like in damage 0.5 and more
				"eod_suit\textureswip\Green_Tex_wound.rvmat",	/// how does the material look like while the part has damage 1	

				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",			/// next materials are used through personality of the soldier
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"				
			};	
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
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
	};
	class EOD9_HELMET_Lights_VEH_base: Car_F
	{
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
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "MrEwok";
		_generalMacro = "EOD9_HELMET_Lights_VEH_base";
		model = "\EOD_SUIT\Models\EOD9_HELMET_Lights_VEH.p3d";
		Picture="";
		Icon="";
		mapSize = 6;
		displayName = "EOD9_HELMET_Lights_VEH_base";
		scope = 1;
		faction = BLU_F;
		side = 1;
		vehicleClass = "Car";
		crew = "B_Soldier_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		//accuracy=0.3;
		//water resistance and effects on vehicle (this may need to be raised to avoid the engine be destructed by water)
		WaterLeakiness = 10; // 0 for no water dammage
		maxFordingDepth = 0.5; // 100 so it's able to go about 100m under the sea level
		waterResistance = 1; // 100 for heavy water resistance
		//
		wheelCircumference=2.8340001;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		crewVulnerable=1; // can the crew be killed? 1= yes, 0 = no
		crewCrashProtection=0.15000001;
		weapons[]= //we can give a horn by defining it as a weapon and add it here (this is the vehicle weapon not the turret one )
		{
		};
		magazines[]={};
		damperSize=0.2;
		damperForce=1;
		damperDamping=1;
		armor=80;
		damageResistance=0.00562;
		turnCoef=2.5;
		steerAheadPlan=0.2;
		steerAheadSimul=0.40000001;
		predictTurnPlan=0.89999998;
		predictTurnSimul=0.5;
		brakeDistance=1;
		terrainCoef=1.5;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.44999999;
		cost=200000;
		precision=15;
		armorGlass=0.5;
		armorWheels=0.1;
		soundServo[]=
		{
			"A3\sounds_f\dummysound",
			0.0099999998,
			1,
			10
		};
		soundEnviron[]=
		{
			"",
			0.56234133,
			1
		};
		transportMaxBackpacks=0;
		transportSoldier=0;
		class Library 
		{
			libTextDesc = "EOD9_HELMET_Lights_VEH_base";
		};
		castDriverShadow="false";
		driverAction = "passenger_injured_medevac_truck01"; // rtm related to driver
		cargoAction[] = 
		{
	//	"passenger_injured_medevac_truck01" // Medical HEMTT anim
		};

		threat[] = {0.8,0.6,0.3};
		// this part define the driver animations related to model.cfg an p3d named selection
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		//
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		//PhysX Part.....
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250; 
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
				mass=30;
				MOI=12.8;
				dampingRate=0.1;
				maxBrakeTorque=10000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.050000001;
				mMaxDroop=0.1;
				sprungMass=825;
				springStrength=51625; //default = 51625
				springDamperRate=8920; //default = 8920		
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
		attenuationEffectType="CarAttenuation"; //external sound occlusion when inside
		/*To remove the unneeded sounds just leave a empty array like that:
		
		soundGetIn[]=
		{
		};

		*/
		soundGetIn[]=
		{
		};
		soundGetOut[]=
		{
		};
		soundDammage[]=
		{
		};
		soundEngineOnInt[]=
		{
		};
		soundEngineOnExt[]=
		{
		};
		soundEngineOffInt[]=
		{
		};
		soundEngineOffExt[]=
		{
		};
		buildCrash0[]=
		{
		};
		buildCrash1[]=
		{
		};
		buildCrash2[]=
		{
		};
		buildCrash3[]=
		{
		};
		soundBuildingCrash[]=
		{
		};
		WoodCrash0[]=
		{
		};
		WoodCrash1[]=
		{
		};
		WoodCrash2[]=
		{
		};
		WoodCrash3[]=
		{
		};
		WoodCrash4[]=
		{
		};
		WoodCrash5[]=
		{
		};
		soundWoodCrash[]=
		{
		};
		ArmorCrash0[]=
		{
		};
		ArmorCrash1[]=
		{
		};
		ArmorCrash2[]=
		{
		};
		ArmorCrash3[]=
		{
		};
		soundArmorCrash[]=
		{
		};
		class Sounds
		{
			class Idle_ext // This is the idle sound hearable from outside (when not in cargo)
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class Idle_int  // This is the idle sound hearable from inside (when in cargo)
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
				};
				frequency="0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class TiresRockOut
			{
			};
			class TiresSandOut
			{
			};
			class TiresGrassOut
			{
			};
			class TiresMudOut
			{
			};
			class TiresGravelOut
			{
			};
			class TiresAsphaltOut
			{
			};
			class NoiseOut
			{
				sound[]=
				{
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
			};
			class TiresSandIn
			{
			};
			class TiresGrassIn
			{
			};
			class TiresMudIn
			{
			};
			class TiresGravelIn
			{
			};
			class TiresAsphaltIn
			{
			};
			class NoiseIn
			{
				sound[]=
				{
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
			};
			class acceleration_ext_road
			{
			};
			class turn_left_ext_road
			{
			};
			class turn_right_ext_road
			{
			};
			class breaking_ext_dirt
			{
			};
			class acceleration_ext_dirt
			{
			};
			class turn_left_ext_dirt
			{
			};
			class turn_right_ext_dirt
			{
			};
			class breaking_int_road
			{
			};
			class acceleration_int_road
			{
			};
			class turn_left_int_road
			{
			};
			class turn_right_int_road
			{
			};
			class breaking_int_dirt
			{
			};
			class acceleration_int_dirt
			{
			};
			class turn_left_int_dirt
			{
			};
			class turn_right_int_dirt
			{
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			/*	body="mainTurret";
				gun="mainGun";
				hasGunner=1;
				weapons[]=
				{
					"HMG_M2"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red",
					"100Rnd_127x99_mag_Tracer_Red"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				minElev=-25;
				maxElev=60;
				gunnerAction="HMMWV_Gunner01";
				viewGunnerInExternal="true";
				castGunnerShadow=1;
				stabilizedInAxes="StabilizedInAxesNone";
				gunnerRightHandAnimName="OtocHlaven_shake";
				gunnerLeftHandAnimName="OtocHlaven_shake";*/
			};
		};
 		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor=0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.1;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.38;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor=0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.38;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor=0.38;
			};
			class HitFuel
			{
				armor=1.4;
				material=-1;
				name="palivo";
				visual="";
				passThrough=1;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]={
			/* Here you define the rvmats for destruction
				"", //original material applied
				"", // material applied at 0.5 dammage
				"" // material applied at 1 dammage */
			};
		};
		class Reflectors
		{
			class Left
			{
/*				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="flash_L";
				direction="flash_L_dir";
				hitpoint="flash_L";
				selection="flash_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
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
*/
				color[] = {180,156,120};
				ambient[] = {0.9,0.78,0.6};
				intensity = 20;
				size = 1;
				innerAngle = 20;
				outerAngle = 80;
				coneFadeCoef = 5;
				position = "flash";
				direction = "flash dir";
				selection="flash_L";
				hitpoint="flash_L";
				useFlare = 1;
				flareSize = 1.4;
				flareMaxDistance = "100.0f";
				dayLight = 0;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1.1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		/*	class Right: Left
			{
				position="flash_R";
				direction="flash_R_dir";
				hitpoint="flash_R";
				selection="flash_R";
			};*/
		/*	class Right2: Right
			{
				useFlare=1;
				position="P svetlo";
			};
			class Left2: Left
			{
				useFlare=1;
				position="L svetlo";
			};*/
		};
		aggregateReflectors[]=
		{
			
			{
				"Left"//,
				//"Right",
			//	"Left2",
			//	"Right2"
			}
		
		};
		class RenderTargets //PIP
		{
		/*	class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
		*/
		};
	};
	class EOD9_HELMET_Lights_VEH: EOD9_HELMET_Lights_VEH_base
	{
		scope = 2;
		faction = BLU_F;
		side = 1;
		vehicleClass = "Car";
		model = "\EOD_SUIT\Models\EOD9_HELMET_Lights_VEH.p3d";
		displayname = "EOD9_HELMET_Lights_VEH";
		hasGunner = 0;
		transportSoldier=0;
		cargoAction[] = 
		{
		//"passenger_injured_medevac_truck01" // define the cargo action here
		};
		threat[]={0,0,0};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "pedal_thrust";
		armor=120;
		damageResistance=0.030990001;
		Picture = "";
		icon = "";
		//attendant=0; //this is the basic can heal variable from a3
		/*class Eventhandlers
		{
		};*/
		class Library
		{
			libTextDesc = "EOD9_HELMET_Lights_VEH";
		};
		class Turrets: Turrets
		{
		};
		class AnimationSources: AnimationSources
		{
		};
		class UserActions
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
			//once again dammage rvmat applied
			};
		};
		HiddenSelections[] =
		{
		/*
		//Related to named selection in model.
			"camo",
			"camo1",
			"camo2",
			"camo3"*/
		};
		HiddenSelectionsTextures[] = 
		{
		/*Path to textures applied to the related hiddenselection*/
		};
	};
};
class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
	};
	class VestItem: InventoryItem_Base_F
	{
		type=701;
		uniformType="Default";
		hiddenSelections[]={};
		armor=0;
		passThrough=1;
		hitpointName="HitBody";
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		allowedSlots[]={901,605};
		type=605;
		hiddenSelections[]={};
		armor=0;
		passThrough=1;
		hitpointName="HitHead";
	};
	class EOD9_HELMET_Base: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="EOD9_HELMET_Base";
		picture="\EOD_SUIT\UI\EOD9_Helmet_Icon_ca.paa";
		model="\EOD_SUIT\Models\EOD9_HELMET.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]={};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\EOD_SUIT\Models\EOD9_HELMET.p3d";
			modelSides[]={6};
			armor=4;
			passThrough=0.5;
			hiddenSelections[]=
			{
			};
		};
	};
	class EOD9_HELMET: EOD9_HELMET_Base
	{
		displayName="$STR_EOD9_HELMET";
		model="\EOD_SUIT\Models\EOD9_HELMET.p3d";
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		class ItemInfo: HeadgearItem
		{
			mass=800;
			uniformModel="\EOD_SUIT\Models\EOD9_HELMET.p3d";
			modelSides[]={6};
			armor=10000;
			passThrough=0.0;
			hiddenSelections[]=
			{
			};
		};
	};
	class Uniform_EOD_Base: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformModel="\EOD_SUIT\Models\EOD_Uniform.p3d";
			uniformClass="EOD_engineer";
			containerClass="Supply20";
			mass=0;
		};
	};
	class EOD_Uniform: Uniform_EOD_Base
	{
		scope=2;
		displayName="$STR_EOD_Uniform";
		picture="\EOD_SUIT\UI\EOD9_Uniform_Icon_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\EOD_SUIT\TexturesWIP\suitpack_EOD_Suit_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="EOD_engineer";
			containerClass="Supply20";
			mass=80;
		};
	};
	class EOD_SUIT_vest_base: ItemCore
	{
		scope=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		picture="\EOD_SUIT\UI\EOD9_Vest_Icon_ca.paa";
		model="\EOD_SUIT\Models\EOD_SUIT_vest.p3d";
		hiddenSelections[]={};
		class ItemInfo: VestItem
		{
			uniformmodel="\EOD_SUIT\Models\EOD_SUIT_vest.p3d";
			hiddenSelections[]={};
			containerClass="Supply0";
			mass=0;
			armor=0;
			passThrough=1;
		};
	};
	class EOD_SUIT_vest: EOD_SUIT_vest_Base
	{
		scope=2;
		displayName="$STR_Vest_EOD";
		picture="\EOD_SUIT\UI\EOD9_Vest_Icon_ca.paa";
		model="\EOD_SUIT\Models\EOD_SUIT_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformmodel="\EOD_SUIT\Models\EOD_SUIT_vest.p3d";
			containerClass="Supply40";
			mass=1000;
			armor=100000;
			passThrough=0.000001;
			class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8000; // addition to armor of referenced hitpoint
				passThrough	= 0.0005; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8000;
				passThrough	= 0.0005;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 8000; 
				passThrough	= 0.0001; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 8000;
				passThrough	= 0.0001;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 80000;
				passThrough	= 0.0001;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.0001;
			};
		};
		};
	};
};
class RscTitles
{
	class Default 
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
	class RscPicture
	{
		access = 0;
		idc = -1;
		type = 0;
		style = 48;
		colorBackground[] = {0,0,0,0};
		colorText[] = {1,1,1,1};
		font = "puristaMedium";
		sizeEx = 0;
		lineSpacing = 0;
		fixedWidth = 0;
		shadow = 0;
		text = "";
		x = "safezoneX";
		y = "safezoneY";
		w = "safezoneW";
		h = "safezoneH";
	};
	class RscEOD_Helmet_BaseTitle
	{
		idd = -1;
		text = "EOD_SUIT\UI\EODS_EOD_SUIT_OVERLAY2_ca.paa";
	//	onLoad = "uiNamespace setVariable ['EOD_Helmet_Display', _this select 0]";
	//	onUnload = "uiNamespace setVariable ['EOD_Helmet_Display', displayNull]";
		fadeIn = 0.5;
		fadeOut = 0.5;
		movingEnable = "false";
		duration = 1e+011;
		name = "RscEOD_Helmet_BaseTitle";
		class controls;
	};
	class RscEOD_Helmet: RscEOD_Helmet_BaseTitle
	{
		idd = 1044;
		name = "RscEOD_Helmet";
		class controls
		{
			class EOD_HelmetImage: RscPicture
			{
				text = "EOD_SUIT\UI\EODS_EOD_SUIT_OVERLAY2_ca.paa";
				idc = 10650;
			};
		};
	};
	class RscEOD_Helmet_Cracked: RscEOD_Helmet_BaseTitle
	{
		idd = 1045;
		name = "RscEOD_Helmet_Cracked";
		class controls
		{
			class EOD_CrackedHelmetImage: RscPicture
			{
				text = "EOD_SUIT\UI\EODS_EOD_SUIT_OVERLAY2_cracked_ca.paa";
				idc = 10651;
			};
		};
	};
	class RscEOD_Interface: RscEOD_Helmet_BaseTitle
	{
		idd = 1046;
		name = "RscEOD_Helmet_Cracked";
		class controls
		{
			class EOD_CrackedHelmetImage: RscPicture
			{
				text = "EOD_SUIT\UI\EOD_Suit_HandControl.paa";
				idc = 10652;
			};
		};
	};
};
class RscBackPicture
{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class HiddenButton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {
			0, 0, 0, 1
	};
	colorDisabled[] = {
			0, 0, 0, 0
	};
	colorBackground[] = {
			0, 0, 0, 0
	};
	colorBackgroundDisabled[] = {
			0, 0, 0, 0
	};
	colorBackgroundActive[] = {
			0, 0, 0, 0
	};
	colorFocused[] = {
			0, 0, 0, 0
	};
	colorShadow[] = {
			0, 0, 0, 0
	};
	colorBorder[] = {
			0, 0, 0, 0
	};

	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.5,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.5,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
/*		For Dialog Editor please do not delete....
$
[1.063,["EOD_helmet_GUI",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
[1200,"eod_overlay",[1,"\EOD_SUIT\UI\EODS_EOD_SUIT_OVERLAY2_ca.paa",["-0.0245075 * safezoneW + safezoneX","-0.00507435 * safezoneH + safezoneY","1.05214 * safezoneW","1.012 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

/*     For Dialog Editor please do not delete....
$
[1.063,["EOD_Suit_HandControl_Dialog",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
[1200,"EOD_Suit_HandControl_PIC",[1,"EOD_SUIT\UI\EOD_Suit_HandControl.paa",["-0.000281591 * safezoneW + safezoneX","-0.00125921 * safezoneH + safezoneY","1.00407 * safezoneW","1.00169 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
[1600,"EOD_Suit_HandControl_B1",[1,"",["0.243016 * safezoneW + safezoneX","0.599815 * safezoneH + safezoneY","0.0273986 * safezoneW","0.0321852 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Redbreather","-1"],[]],
[1601,"EOD_Suit_HandControl_B2",[1,"",["0.244775 * safezoneW + safezoneX","0.651223 * safezoneH + safezoneY","0.0251202 * safezoneW","0.0309259 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Sound system","-1"],[]],
[1602,"EOD_Suit_HandControl_B3",[1,"",["0.326254 * safezoneW + safezoneX","0.592519 * safezoneH + safezoneY","0.0282441 * safezoneW","0.0364815 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Redbreather (External system)","-1"],[]],
[1603,"EOD_Suit_HandControl_B5",[1,"",["0.326775 * safezoneW + safezoneX","0.644741 * safezoneH + safezoneY","0.0266822 * safezoneW","0.0346297 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Heat regulation system","-1"],[]],
[1604,"EOD_Suit_HandControl_B4",[1,"",["0.244254 * safezoneW + safezoneX","0.701593 * safezoneH + safezoneY","0.0256409 * safezoneW","0.0337038 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Lights","-1"],[]],
[1605,"EOD_Suit_HandControl_B_ON",[1,"",["0.16022 * safezoneW + safezoneX","0.542149 * safezoneH + safezoneY","0.0277234 * safezoneW","0.0540742 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"Power","-1"],[]]
]
*/


#define IDD_BACKGROUND	67676
#define IDC_EOD_Suit_HandControl_PIC	IDD_BACKGROUND
#define IDD_EOD_Suit_HandControl_Dialog 160791
#define IDD_REDBREATHER_LED	67677
#define IDC_EOD_Suit_REDBREATHER_LED	IDD_REDBREATHER_LED
#define IDD_POWER_LED	67678
#define IDC_EOD_Suit_Power_LED	IDD_POWER_LED
#define IDD_SOUND_LED	67679
#define IDC_EOD_Suit_Sound_LED	IDD_SOUND_LED
#define IDD_LIGHT_LED	67680
#define IDC_EOD_Suit_Light_LED	IDD_LIGHT_LED
#define IDD_ENERGY_LED	67681
#define IDC_EOD_Suit_Energy_LED	IDD_ENERGY_LED

////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////
#define IDD_SOUND_LED_R	67682
#define IDC_EOD_Suit_Sound_LED_R	IDD_SOUND_LED_R
#define IDD_LIGHT_LED_R	67683
#define IDC_EOD_Suit_Light_LED_R	IDD_LIGHT_LED_R
#define IDD_REDBREATHER_LED_R	67684
#define IDC_EOD_Suit_REDBREATHER_LED_R	IDD_REDBREATHER_LED_R
//#define IDD_ENERGY_LED_R	67685									Decommente Ici si tu veut utiliser la led Rouge pour l'energie
//#define IDC_EOD_Suit_Energy_LED_R	IDD_ENERGY_LED_R				Decommente Ici si tu veut utiliser la led Rouge pour l'energie
////////////////////////////////////////////////////////////////////////////////Led Rouges Fin ///////////////////////////////////////////////////////////////////

class EOD_Suit_HandControl_Dialog
{
	idd=IDD_EOD_Suit_HandControl_Dialog;
//	movingEnable = 1;
	enableSimulation = true ;
	controlsBackground[] = { };
	objects[] = { };	
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 67676) ctrlSetText '\EOD_SUIT\UI\EOD_Suit_HandControl_n.paa';};";
	controls[]=
	{
		background,
		REDBREATHER_LED,
		POWER_LED,
		SOUND_LED,
		LIGHT_LED,
		ENERGY_LED,
		////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////
		
		SOUND_LED_R,
		LIGHT_LED_R,
		REDBREATHER_LED_R,
		//ENERGY_LED_R,      Decommente Ici si tu veut utiliser la led Rouge pour l'energie
		
		////////////////////////////////////////////////////////////////////////////////Led Rouges Fin///////////////////////////////////////////////////////////////////
		EOD_Suit_HandControl_B1,
		EOD_Suit_HandControl_B2,
		EOD_Suit_HandControl_B3,
		EOD_Suit_HandControl_B4,
		EOD_Suit_HandControl_B5,
		EOD_Suit_HandControl_B_ON
	};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by MrEwok, v1.063, #Gydory)
////////////////////////////////////////////////////////
	class background: RscBackPicture
	{
		idc = IDC_EOD_Suit_HandControl_PIC;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl.paa";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class REDBREATHER_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_REDBREATHER_LED;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_RedbreatherLED.paa";
		onLoad = "ctrlShow [67677, False]; [] spawn Script_EOD_SUIT_Ouverture_Interface;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class POWER_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Power_LED;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_PowerLED.paa";
		onLoad = "ctrlShow [67678, False]; [] spawn Script_EOD_SUIT_Ouverture_Interface;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class SOUND_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Sound_LED;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_SoundLED.paa";
		onLoad = "ctrlShow [67679, False]; [] spawn Script_EOD_SUIT_Ouverture_Interface;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class LIGHT_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Light_LED;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_LightLED.paa";
		onLoad = "ctrlShow [67680, False]; [] spawn Script_EOD_SUIT_Ouverture_Interface;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	class ENERGY_LED: RscBackPicture
	{
		idc = IDC_EOD_Suit_Energy_LED;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_EnergyLED.paa";
		onLoad = "ctrlShow [67681, False]; [] spawn Script_EOD_SUIT_Ouverture_Interface;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	};
	////////////////////////////////////////////////////////////////////////////////Led Rouges ///////////////////////////////////////////////////////////////////
	class SOUND_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Sound_LED_R;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_SoundLED_R.paa";
		onLoad = "ctrlShow [67682, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	class LIGHT_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Light_LED_R;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_LightLED_R.paa";
		onLoad = "ctrlShow [67683, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	class REDBREATHER_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_REDBREATHER_LED_R;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_RedbreatherLED_R.paa";
		onLoad = "ctrlShow [67684, False];";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	/* Decommente Ici si tu veut utiliser la led Rouge pour l'energie
	class ENERGY_LED_R: RscBackPicture
	{
		idc = IDC_EOD_Suit_Energy_LED_R;
		text = "EOD_SUIT\UI\EOD_Suit_HandControl_EnergyLED_R.paa";
		onLoad = "ctrlShow [67685, False] ;";
		x = -0.000281591 * safezoneW + safezoneX;
		y = -0.00125921  * safezoneH + safezoneY;
		w = 1.00407 * safezoneW;
		h = 1.00169 * safezoneH;
	//	moving = 1;
	};
	*/
	////////////////////////////////////////////////////////////////////////////////Led Rouges Fin ///////////////////////////////////////////////////////////////////
	class EOD_Suit_HandControl_B1: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B1;
		x = 0.243016 * safezoneW + safezoneX;
		y = 0.599815 * safezoneH + safezoneY;
		w = 0.0273986 * safezoneW;
		h = 0.0321852 * safezoneH;
		tooltip = "$STR_Rebreather";
		action = "[""Respirateur""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
	class EOD_Suit_HandControl_B2: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B2;
		x = 0.244775 * safezoneW + safezoneX;
		y = 0.651223 * safezoneH + safezoneY;
		w = 0.0251202 * safezoneW;
		h = 0.0309259 * safezoneH;
		tooltip = "$STR_Sound_System";
		action = "[""Système sonore""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
	class EOD_Suit_HandControl_B3: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B3;
		x = 0.326254 * safezoneW + safezoneX;
		y = 0.592519 * safezoneH + safezoneY;
		w = 0.0282441 * safezoneW;
		h = 0.0364815 * safezoneH;
		tooltip = "$STR_Rebreather_External_System";
		action = "[""Respirateur externe""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
	class EOD_Suit_HandControl_B4: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B4;
		x = 0.244254 * safezoneW + safezoneX;
		y = 0.701593 * safezoneH + safezoneY;
		w = 0.0256409 * safezoneW;
		h = 0.0337038 * safezoneH;
		tooltip = "$STR_Lights";
		action = "[""Lumières""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
	class EOD_Suit_HandControl_B5: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B5;
		x = 0.326775 * safezoneW + safezoneX;
		y = 0.644741 * safezoneH + safezoneY;
		w = 0.0266822 * safezoneW;
		h = 0.0346297 * safezoneH;
		tooltip = "$STR_Heat_Regulation_System";
		action = "[""Ventilation""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
	class EOD_Suit_HandControl_B_ON: HiddenButton
	{
		idc = IDC_EOD_Suit_HandControl_B_ON;
		x = 0.16022 * safezoneW + safezoneX;
		y = 0.542149 * safezoneH + safezoneY;
		w = 0.0277234 * safezoneW;
		h = 0.0540742 * safezoneH;
		tooltip = "$STR_Power";
		action = "[""Alimentation""] spawn Script_EOD_SUIT_Action_Bouton;";
	};
};