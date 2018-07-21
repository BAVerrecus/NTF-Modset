class CfgPatches
{
	class bav_nh90
	{
		units[]=
		{
			"bav_nh90_bw_transport",
			"bav_nh90_bw_armed",
			"bav_nh90_bw_cargo",
			"bav_nh90_bw_med"
		};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Sounds_F",
			"A3_Weapons_F_beta",
			"A3Data",
			"A3_Data_F",
			"ffaa_nh90"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateActiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
		class RotorLibHelicopterProperties;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitFuel;
			class HitGlass1;
		};
		class Eventhandlers;
		class Components;
	};
	class bav_nh90_base: Heli_Transport_02_base_F
	{
		dlc="FFAAMOD";
		author="$STR_FFAA_NH90_AUTOR";
		mapSize=16.01;
		type=2;
		side=1;
		model="\ffaa_nh90\ffaa_nh90.p3d";
		displayName="NH90";
		_generalMacro="ffaa_nh90_base";
		picture="\ffaa_nh90\data\ui\nh90_picture_ca.paa";
		icon="\ffaa_nh90\data\ui\nh90_ico.paa";
		crew="BWA3_Helipilot";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-2};
		LESH_WheelOffset[]={0,-2};
		typicalCargo[]=
		{
			"BWA3_Helipilot"
		};
		driverAction="pilot_Heli_Light_03";
		getInAction="ChopperLight_L_In_H";
		getOutAction="ChopperLight_L_Out_H";
		cargoGetInAction[]=
		{
			"GetInHelicopterCargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutHelicopterCargo"
		};
		transportSoldier=18;
		cargoPreciseGetInOut[]={0};
		cargoProxyIndexes[]={1,2,3,4,5,6,7,8,9,10,13,14,15,16,17,18,19,20};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanright",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanright",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		availableForSupportTypes[]=
		{
			"Transport"
		};
		cargoCompartments[]=
		{
			"Compartment2"
		};
		armor=30;
		sensitivity=2;
		altFullForce=4000;
		altNoForce=6000;
		cost=10000000;
		vehicleClass="Air";
		faction="BWA3_Faction";
		accuracy=0.5;
		maxSpeed=251;
		enableSweep=1;
		supplyRadius=2.5;
		selectionHRotorStill="main rotor static";
		selectionHRotorMove="main rotor blur";
		selectionVRotorStill="tail rotor static";
		selectionVRotorMove="tail rotor blur";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig="ffaa_nh90\RTD_ffaa_et_nh90.xml";
			autoHoverCorrection[]={4.6999998,3.8,0};
			defaultCollective=0.66500002;
			retreatBladeStallWarningSpeed=92.583;
			maxTorque=4014;
			stressDamagePerSec=0.0033333332;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=185000;
			maxTailRotorStress=30000;
		};
		maximumLoad=5000;
		cargoCanEject=1;
		driverCanEject=0;
		mainBladeRadius=9.1999998;
		tailBladeRadius=1.5;
		maxFordingDepth=1.65;
		bodyFrictionCoef=1.05;
		fuelCapacity=2500;
		fuelConsumptionRate=0.138;
		radarType=4;
		slingLoadMaxCargoMass=1000;
		slingLoadMemoryPoint="slingLoad0";
		extCameraPosition[]={0,3,-23};
		gearRetracting=1;
		gearUpTime=1;
		gearDownTime=1;
		damageResistance=0.0055499999;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo[]=
		{
			"pos_cargo_L",
			"pos_cargo_R",
			"pos_cargo_L",
			"pos_cargo_R",
			"pos_cargo_L",
			"pos_cargo_R",
			"pos_cargo_L",
			"pos_cargo_R",
			"pos_cargo_L",
			"pos_cargo_R",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos_cargo_L",
			"pos_cargo_R",
			"pos_cargo_L",
			"pos cargo_R"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir",
			"pos_cargo_L_dir",
			"pos_cargo_R_dir"
		};
		cargoDoors[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"Ramp",
			"Ramp",
			"Ramp",
			"Ramp",
			"Ramp",
			"Ramp",
			"",
			"",
			"",
			""
		};
		memoryPointsGetInCoDriver="pos codriver";
		memoryPointsGetInCoDriverDir="pos codriver dir";
		mainRotorSpeed=1;
		backRotorSpeed=1;
		minMainRotorDive=9;
		maxMainRotorDive=-14;
		neutralMainRotorDive=4;
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		LockDetectionSystem="1 + 2 + 4 + 8";
		incomingMissileDetectionSystem=16;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		transportMaxMagazines=150;
		transportMaxWeapons=30;
		viewCargoShadow=1;
		enableManualFire=0;
		threat[]={0.60000002,0.1,0};
		canfloat=1;
		waterLeakiness=20;
		numberPhysicalWheels=3;
		unitInfoTypeRTD="RscUnitInfoAirRTDFullDigital";
		driverLeftHandAnimName="lever_pilot";
		driverRightHandAnimName="stick_pilot";
		driverLeftLegAnimName="pedalL";
		driverRightLegAnimName="pedalR";
		cyclicAsideForceCoef=1.3;
		cyclicForwardForceCoef=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
					};
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=9000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="mainGun";
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=2000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=9000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=0;
						animDirection="mainGun";
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
			{
			};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
			{
			};
			class TransportPylonsComponent
			{
				uiPicture="\ffaa_nh90\data\ui\nh90_tth_eden_ca.paa";
				class Pylons
				{
					class PylonLeft
					{
						attachment="";
						priority=2;
						bay=-1;
						hardpoints[]=
						{
							"B_PYLON_NH90",
							"B_PYLON_NH90_LEFT"
						};
						turret[]={0};
						UIposition[]={0.60000002,0.40000001};
						maxweight=310;
					};
					class PylonRight: PylonLeft
					{
						attachment="";
						hardpoints[]=
						{
							"B_PYLON_NH90",
							"B_PYLON_NH90_RIGHT"
						};
						priority=1;
						UIposition[]={0.1,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_EMPTY";
						attachment[]={};
					};
					class ASW
					{
						displayName="ASW";
						attachment[]=
						{
							"PylonMissile_ffaa_1Rnd_marte_mk2_left",
							"PylonMissile_ffaa_1Rnd_marte_mk2_right"
						};
					};
				};
			};
		};
		class Exhausts
		{
			class Exhaust01
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliMed";
			};
			class Exhaust02
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliMed";
			};
		};
		class TransportBackpacks
		{
		};
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		attenuationEffectType="HeliAttenuation";
		insideSoundCoef=0.02;
		occludeSoundsWhenIn=0.56234097;
		obstructSoundsWhenIn=0.316228;
		emptySound[]=
		{
			"",
			0,
			1
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.33000001,
			"soundGeneralCollision2",
			0.33000001,
			"soundGeneralCollision3",
			0.33000001
		};
		soundLandCrashes[]=
		{
			"emptySound",
			0
		};
		soundBuildingCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundArmorCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundWoodCrash[]=
		{
			"soundGeneralCollision1",
			1,
			"soundGeneralCollision2",
			1,
			"soundGeneralCollision3",
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundWaterCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",
			1,
			1,
			100
		};
		soundWaterCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",
			1,
			1,
			100
		};
		soundWaterCrashes[]=
		{
			"soundWaterCollision1",
			0.5,
			"soundWaterCollision2",
			0.5
		};
		soundDammage[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",
			10,
			1
		};
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\open",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\close",
			1,
			1,
			50
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_start_v2",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"ffaa_nh90\sound\nh90_ext_startup",
			4,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\air\Heli_Light_02\Heli_Light_02_int_stop_v2",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"ffaa_nh90\sound\nh90_ext_stop",
			4,
			1,
			600
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",
			1,
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\opfor_lock_2",
			1,
			1
		};
		rotorDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_1",
			1,
			1
		};
		rotorDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_1",
			2.5118864,
			1,
			300
		};
		rotorDamage[]=
		{
			"rotorDamageInt",
			"rotorDamageOut"
		};
		tailDamageInt[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1
		};
		tailDamageOut[]=
		{
			"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",
			1,
			1,
			300
		};
		tailDamage[]=
		{
			"tailDamageInt",
			"tailDamageOut"
		};
		landingSoundInt0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",
			1,
			1,
			100
		};
		landingSoundInt1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",
			1,
			1,
			100
		};
		landingSoundInt[]=
		{
			"landingSoundInt0",
			0.5,
			"landingSoundInt1",
			0.5
		};
		landingSoundOut0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",
			1.7782794,
			1,
			100
		};
		landingSoundOut1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",
			1.7782794,
			1,
			100
		};
		landingSoundOut[]=
		{
			"landingSoundOut0",
			0.5,
			"landingSoundOut1",
			0.5
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class EngineExt
			{
				sound[]=
				{
					"ffaa_nh90\sound\nh90_ext_engine",
					2,
					1,
					700
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[]=
				{
					"ffaa_nh90\sound\nh90_ext_rotor_high",
					1,
					1,
					1500
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"ffaa_nh90\sound\nh90_ext_rotor_swist",
					6,
					1,
					500
				};
				frequency=1;
				volume="(camPos*(rotorThrust factor [0.6, 1]))";
				cone[]={0.69999999,1.3,1,0};
			};
			class EngineInt
			{
				sound[]=
				{
					"ffaa_nh90\sound\nh90_int_engine",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[]=
				{
					"ffaa_nh90\sound\nh90_int_rotor_high",
					0.70794576,
					1
				};
				frequency="rotorSpeed * (1-rotorThrust/5)";
				volume="(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
					1,
					1,
					150
				};
				frequency="0.66 + rotorSpeed / 3";
				volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
					0.2238721,
					1,
					20
				};
				frequency=1;
				volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wheelsInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[]=
				{
					"A3\Sounds_F\dummysound",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
					1,
					1,
					500
				};
				frequency=1;
				volume="camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
					1,
					1,
					500
				};
				frequency=1;
				volume="(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\air\noises\wind_closed",
					0.44668359,
					1,
					50
				};
				frequency=1;
				volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
					0.39810717,
					1,
					50
				};
				frequency=1;
				volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
		class SoundsExt
		{
			class SoundEvents
			{
			};
			class Sounds
			{
				class EngineExt
				{
					sound[]=
					{
						"ffaa_nh90\sound\nh90_ext_engine",
						2,
						1,
						700
					};
					frequency="rotorSpeed";
					volume="camPos*((rotorSpeed-0.72)*4)";
				};
				class RotorExt
				{
					sound[]=
					{
						"ffaa_nh90\sound\nh90_ext_rotor_high",
						1,
						1,
						1500
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[]={1.6,3.1400001,1.6,0.94999999};
				};
				class RotorNoiseExt
				{
					sound[]=
					{
						"ffaa_nh90\sound\nh90_ext_rotor_swist",
						6,
						1,
						400
					};
					frequency=1;
					volume="(camPos*(rotorThrust factor [0.6, 1]))";
					cone[]={0.69999999,1.3,1,0};
				};
				class EngineInt
				{
					sound[]=
					{
						"ffaa_nh90\sound\nh90_int_engine",
						1,
						1
					};
					frequency="rotorSpeed";
					volume="2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
				};
				class RotorInt
				{
					sound[]=
					{
						"ffaa_nh90\sound\nh90_int_rotor_high",
						0.70794576,
						1
					};
					frequency="rotorSpeed * (1-rotorThrust/5)";
					volume="(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",
						1,
						1,
						150
					};
					frequency="0.66 + rotorSpeed / 3";
					volume="(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.31622776,
						1
					};
					frequency=1;
					volume="engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",
						0.2238721,
						1,
						20
					};
					frequency=1;
					volume="engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wheelsInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[]=
					{
						"A3\Sounds_F\dummysound",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_ext",
						1,
						1,
						100
					};
					frequency=1;
					volume="camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\rain1_int",
						1,
						1,
						100
					};
					frequency=1;
					volume="(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",
						1,
						1,
						500
					};
					frequency=1;
					volume="camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",
						1,
						1,
						500
					};
					frequency=1;
					volume="(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\air\noises\wind_closed",
						0.44668359,
						1,
						50
					};
					frequency=1;
					volume="(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
				};
				class GStress
				{
					sound[]=
					{
						"A3\Sounds_F\vehicles\noises\vehicle_stress2e",
						0.39810717,
						1,
						50
					};
					frequency=1;
					volume="engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
			};
		};
		class MFD
		{
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction="copilot_Heli_Light_02";
				gunnerCompartments="Compartment1";
				proxyIndex=1;
				isCopilot=1;
				hideWeaponsGunner=1;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="pedalL";
				gunnerRightLegAnimName="pedalR";
				memoryPointsGetInGunner="pos codriver";
				memoryPointsGetInGunnerDir="pos codriver dir";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				stabilizedInAxes=3;
				gunBeg="muzzle_end";
				gunEnd="muzzle_beg";
				memoryPointGun="laserstart";
				memoryPointGunnerOptics="copilot_view";
				gunnerName="$STR_A3_COPILOT";
				gunnerType="BWA3_Helipilot";
				minElev=-40;
				maxElev=20;
				initElev=0;
				minTurn=-120;
				maxTurn=120;
				initTurn=0;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				weapons[]=
				{
					"Laserdesignator_mounted"
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1,
					30
				};
				magazines[]=
				{
					"Laserbatteries"
				};
				inGunnerMayFire=1;
				gunnerOpticsEffect[]={};
				gunnerOpticsModel="";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot
					{
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						opticsDisplayName="W";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="";
						passThrough=0.2;
						radius=0.1;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="";
						passThrough=0.2;
						radius=0.1;
					};
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				visual="";
				name="HitFuel";
				radius=0.25;
				explosionShielding=2;
				depends="0";
			};
			class HitHull: HitHull
			{
				name="HitHull";
				armor=999;
				visual="camo1";
				depends="Total";
				radius=1.5;
			};
			class HitEngine1: HitHull
			{
				armor=0.69999999;
				explosionShielding=3;
				name="HitEngine1";
				passThrough=1;
				visual="HitEngine1";
				radius=0.40000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitEngine2: HitEngine1
			{
				armor=0.69999999;
				minimalHit=0.1;
				name="HitEngine2";
			};
			class HitEngine: HitEngine2
			{
				armor=999;
				name="HitEngine";
				depends="0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitAvionics: HitAvionics
			{
				armor=1;
				name="HitAvionics";
				visual="";
				radius=0.5;
				explosionShielding=2;
			};
			class HitHRotor: HitHRotor
			{
				visual="main rotor static";
				armor=3;
				name="HitHRotor";
				radius=0.25;
				explosionShielding=2.5;
			};
			class HitVRotor_Lead: HitHull
			{
				visual="";
				name="HitVRotor_Lead";
				armor=2;
				radius=0.5;
				explosionShielding=2;
			};
			class HitVRotor: HitVRotor_Lead
			{
				visual="tail rotor static";
				armor=2;
				radius=0.1;
				name="HitVRotor";
				explosionShielding=6;
				depends="HitVRotor_Lead";
			};
			class Hitglass1: HitGlass1
			{
				name="glass1";
				convexComponent="glass1";
				visual="glass1";
				armor=5;
				radius=0.13;
			};
			class Hitglass2: Hitglass1
			{
				name="glass2";
				convexComponent="glass2";
				visual="glass2";
				armor=5;
				radius=0.13;
			};
			class Hitglass3: Hitglass1
			{
				name="glass3";
				convexComponent="glass3";
				visual="glass3";
				armor=5;
				radius=0.12;
			};
			class Hitglass4: Hitglass1
			{
				name="glass4";
				convexComponent="glass4";
				visual="glass4";
				armor=5;
				radius=0.11;
			};
			class Hitglass5: Hitglass1
			{
				name="glass5";
				convexComponent="glass5";
				visual="glass5";
				armor=5;
				radius=0.11;
			};
			class Hitglass6: Hitglass1
			{
				name="glass6";
				convexComponent="glass6";
				visual="glass6";
				armor=5;
				radius=0.11;
			};
			class Hitglass7: Hitglass1
			{
				name="glass7";
				convexComponent="glass7";
				visual="glass7";
				armor=5;
				radius=0.11;
			};
			class Hitglass8: Hitglass1
			{
				name="glass8";
				convexComponent="glass8";
				visual="glass8";
				armor=5;
				radius=0.11;
			};
			class Hitglass9: Hitglass1
			{
				name="glass9";
				convexComponent="glass9";
				visual="glass9";
				armor=5;
				radius=0.13;
			};
			class Hitglass10: Hitglass1
			{
				name="glass10";
				convexComponent="glass10";
				visual="glass10";
				armor=5;
				radius=0.13;
			};
			class Hitglass11: Hitglass1
			{
				name="glass11";
				convexComponent="glass11";
				visual="glass11";
				armor=5;
				radius=0.1;
			};
			class Hitglass12: Hitglass1
			{
				name="glass12";
				convexComponent="glass12";
				visual="glass12";
				armor=5;
				radius=0.1;
			};
			class Hitglass13: Hitglass1
			{
				name="glass13";
				convexComponent="glass13";
				visual="glass13";
				armor=5;
				radius=0.1;
			};
			class Hitglass14: Hitglass1
			{
				name="glass14";
				convexComponent="glass14";
				visual="glass14";
				armor=5;
				radius=0.1;
			};
			class Hitglass15: Hitglass1
			{
				name="glass15";
				convexComponent="glass15";
				visual="glass15";
				armor=5;
				radius=0.1;
			};
			class Hitglass16: Hitglass1
			{
				name="glass16";
				convexComponent="glass16";
				visual="glass16";
				armor=5;
				radius=0.1;
			};
		};
		class Reflectors
		{
			class Right
			{
				color[]={7000,7500,10000};
				ambient[]={70,75,100};
				intensity=50;
				size=1;
				innerAngle=15;
				outerAngle=65;
				coneFadeCoef=10;
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R_hitpoint";
				selection="Light_R";
				useFlare=1;
				flareSize=10;
				flareMaxDistance=250;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=1;
					hardLimitStart=100;
					hardLimitEnd=200;
				};
			};
			class Left: Right
			{
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L_hitpoint";
				selection="Light_L";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=50;
				name="PositionLight_Red_1_pos";
				drawLight=1;
				drawLightSize=0.60000002;
				drawLightCenterSize=0.050000001;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_Green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_White_1_pos";
			};
		};
		class RenderTargets
		{
			class NVCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="muzzle_beg";
					pointDirection="muzzle_end";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.001;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ffaa_nh90\data\ffaa_nh90_glass.rvmat",
				"ffaa_nh90\data\ffaa_nh90_glass_damage.rvmat",
				"ffaa_nh90\data\ffaa_nh90_glass_damage.rvmat",
				"ffaa_nh90\data\ffaa_nh90_ext_01.rvmat",
				"ffaa_nh90\data\ffaa_nh90_ext_01_damage.rvmat",
				"ffaa_nh90\data\ffaa_nh90_ext_01_destruct.rvmat"
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported=1;
			};
		};
		class AnimationSources
		{
			class Muzzle_rot_I
			{
				source="ammorandom";
				weapon="HMG_M2";
			};
			class Muzzle_reload_I
			{
				source="reload";
				weapon="HMG_M2";
			};
			class Muzzle_revolving_I
			{
				source="reloadMagazine";
				weapon="HMG_M2";
			};
			class Muzzle_rot_D
			{
				source="ammorandom";
				weapon="HMG_M2_2";
			};
			class Muzzle_reload_D
			{
				source="reload";
				weapon="HMG_M2_2";
			};
			class Muzzle_revolving_D
			{
				source="reloadMagazine";
				weapon="HMG_M2_2";
			};
			class PuertaIzquierda
			{
				source="Door";
				animPeriod=2;
				sound="RollDoorsSound";
			};
			class PuertaDerecha
			{
				source="Door";
				animPeriod=2;
				sound="RollDoorsSound";
			};
			class Ramp
			{
				source="user";
				animPeriod=4;
				sound="ServoRampSound_2";
			};
			class HideExtras
			{
				displayName="$STR_FFAA_HIDEEXTRAS";
				author="$STR_FFAA_AUTOR_FFAAMOD";
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint="HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint="HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint="HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint="HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint="HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint="HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint="HitGlass8";
			};
			class HitGlass9: HitGlass1
			{
				hitpoint="HitGlass9";
			};
			class HitGlass10: HitGlass1
			{
				hitpoint="HitGlass10";
			};
			class HitGlass11: HitGlass1
			{
				hitpoint="HitGlass11";
			};
			class HitGlass12: HitGlass1
			{
				hitpoint="HitGlass12";
			};
			class HitGlass13: HitGlass1
			{
				hitpoint="HitGlass13";
			};
			class HitGlass14: HitGlass1
			{
				hitpoint="HitGlass14";
			};
			class HitGlass15: HitGlass1
			{
				hitpoint="HitGlass15";
			};
			class HitGlass16: HitGlass1
			{
				hitpoint="HitGlass16";
			};
			class HideRadar
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
			class HideSeats
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=75;
			};
			class HideGunnerSeats
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
				mass=300;
			};
			class HideDoorSeats
			{
				source="user";
				animPeriod=1e-006;
				initPhase=1;
			};
		};
		class UserActions
		{
			class AbrirPuertaIzquierda
			{
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENLDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="pizq";
				radius=5;
				condition="(this doorPhase 'PuertaIzquierda' == 0)&& (alive this) && {(player in [driver this, this turretUnit [1]])||((-1<(this getCargoIndex player))&&((this getCargoIndex player)<10)&&{((this getCargoIndex player)%2)==0})}";
				statement="this animateDoor ['PuertaIzquierda',1];";
				onlyforplayer=1;
				priority=4.6999998;
				showWindow=1;
				hideOnUse=1;
			};
			class CerrarPuertaIzquierda: AbrirPuertaIzquierda
			{
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSELDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="pizq";
				condition="(this doorPhase 'PuertaIzquierda' == 1)&& (alive this) && (this animationSourcePhase 'HideGunnerSeats' > 0.5)  && {(player in [driver this, this turretUnit [1]])||((-1<(this getCargoIndex player))&&((this getCargoIndex player)<10)&&{((this getCargoIndex player)%2)==0})}";
				statement="this animateDoor ['PuertaIzquierda',0];";
			};
			class AbrirPuertaDerecha: AbrirPuertaIzquierda
			{
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_OPENRDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="pder";
				condition="(this doorPhase 'PuertaDerecha' == 0)&& (alive this) && {(player in [driver this, this turretUnit [2]])||((-1<(this getCargoIndex player))&&((this getCargoIndex player)<10)&&{((this getCargoIndex player)%2)==1})}";
				statement="this animateDoor ['PuertaDerecha',1];";
			};
			class CerrarPuertaDerecha: AbrirPuertaIzquierda
			{
				displayName="$STR_A3_CFGVEHICLES_USERACTIONS_CLOSERDOOR0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="pder";
				condition="(this doorPhase 'PuertaDerecha' == 1)&& (alive this) && (this animationSourcePhase 'HideGunnerSeats' > 0.5) && {(player in [driver this, this turretUnit [2]])||((-1<(this getCargoIndex player))&&((this getCargoIndex player)<10)&&{((this getCargoIndex player)%2)==1})}";
				statement="this animateDoor ['PuertaDerecha',0];";
			};
			class OpenRamp
			{
				displayName="$STR_ACTION_RAMP_OPEN0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position="ramp_botom";
				radius=15;
				onlyForPlayer=0;
				hideOnUse=1;
				condition="(this animationSourcePhase 'Ramp' < 0.5) && alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateSource ['Ramp',1];";
			};
			class CloseRamp: OpenRamp
			{
				displayName="$STR_ACTION_RAMP_CLOSE0";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				condition="(this animationSourcePhase 'Ramp' >= 0.5) && alive(this) && {(player in [driver this, this turretUnit [0], this turretUnit [3], this turretUnit [4]]) && ((this getVariable ['bis_disabled_Ramp',0]) != 1)}";
				statement="this animateSource ['Ramp',0];";
			};
		};
		class Library
		{
			libTextDesc="$STR_FFAA_LIB_NH90";
		};
		hiddenSelections[]=
		{
			"camo1",
			"Random_1",
			"Random_2",
			"Random_3",
			"Random_4",
			"Random_5",
			"Random_6"
		};
		FFAA_numerales[]=
		{
			
			{
				"n",
				2,
				"E"
			},
			
			{
				"n",
				2,
				"T"
			},
			
			{
				"n",
				2,
				8
			},
			
			{
				"n",
				2,
				{0,1,2}
			},
			
			{
				"n",
				2
			}
		};
		hiddenSelectionsTextures[]=
		{
			"ffaa_nh90\data\ffaa_et_nh90_ext_01_co.paa"
		};
		class TextureSources
		{
			class EJERCITODETIERRA
			{
				displayName="$STR_FFAA_PRESET_ET";
				author="$STR_FFAA_NH90_AUTOR";
				textures[]=
				{
					"ffaa_nh90\data\ffaa_et_nh90_ext_01_co.paa"
				};
				factions[]=
				{
					"FFAA"
				};
			};
			class EJERCITODELAIRE
			{
				displayName="$STR_FFAA_PRESET_EA";
				author="$STR_FFAA_NH90_AUTOR";
				textures[]=
				{
					"ffaa_nh90\data\ffaa_ea_nh90_ext_01_co.paa"
				};
				factions[]=
				{
					"FFAA"
				};
			};
		};
		textureList[]={};
		class Eventhandlers: Eventhandlers
		{
			init=" [_this select 0] call FFAA_fnc_nh90_init;";
		};
	};
	class bav_nh90_bw_armed: bav_nh90_base
	{
		_generalMacro="bav_nh90_tth";
		scope=2;
		editorPreview="\ffaa_data\EditorPreview\ffaa_nh90_tth_armed.jpg";
		displayName="NH90 (Armed)";
		author="$STR_FFAA_NH90_AUTOR";
		hiddenselectionstextures[]=
		{
			"bav_nh90\data\bav_nh90_bw.paa"
		};
		transportSoldier=8;
		cargoProxyIndexes[]={13,14,15,16,17,18,19,20};
		getInProxyOrder[]={11,12,13,14,15,16,17,18,19,20};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret_I: MainTurret
			{
				proxyIndex=2;
				dontCreateAI=1;
				CanEject=1;
				isCopilot=0;
				body="mainTurret_I";
				gun="mainGun_I";
				gunBeg="muzzle_I";
				gunEnd="chamber_I";
				animationSourceBody="mainTurret_I";
				animationSourceGun="mainGun_I";
				memoryPointGun="muzzle_I";
				memoryPointGunnerOptics="gunnerview_I";
				memoryPointsGetInGunner="pos_cargo_L";
				memoryPointsGetInGunnerDir="pos_cargo_L_dir";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerType="ffaa_crew_famet";
				gunnerAction="ffaa_afuste_m2_gunner";
				selectionFireAnim="zasleh_I";
				forceHideGunner=0;
				primaryGunner=0;
				initElev=-30;
				initTurn=90;
				minElev=-45;
				maxElev=25;
				minTurn=-360;
				maxTurn=360;
				stabilizedInAxes=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{15,-360},
						{15,360}
					};
					limitsArrayBottom[]=
					{
						{-45,144},
						{-45,36}
					};
				};
				gunnerCompartments="Compartment2";
				gunnerLeftHandAnimName="main_elev_I";
				gunnerRightHandAnimName="main_elev_I";
				gunnerLeftLegAnimName="main_trav_I";
				gunnerRightLegAnimName="main_trav_I";
				inGunnerMayFire=1;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"HMG_M2"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag_Tracer_red",
					"100Rnd_127x99_mag_Tracer_red",
					"100Rnd_127x99_mag_Tracer_red",
					"100Rnd_127x99_mag_Tracer_red",
					"100Rnd_127x99_mag_Tracer_red"
				};
				turretCanSee="2 + 4 + 8 + 16";
				canUseScanners=0;
				soundAttenuationTurret="HeliAttenuationGunner";
				soundServo[]=
				{
					"",
					1.41254,
					1,
					30
				};
				soundServoVertical[]=
				{
					"",
					1.41254,
					1,
					30
				};
				disableSoundAttenuation=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=20;
						material=-1;
						name="main_turret1_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.2;
					};
					class HitGun
					{
						armor=20;
						material=-1;
						name="main_gun1_hit";
						visual="gun";
						passThrough=0.2;
						radius=0.1;
					};
				};
			};
			class MainTurret_D: MainTurret_I
			{
				initTurn=-90;
				initOutTurn=-90;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{15,-360},
						{15,360}
					};
					limitsArrayBottom[]=
					{
						{-45,-36},
						{-45,-144}
					};
				};
				body="mainTurret_D";
				gun="mainGun_D";
				animationSourceBody="mainTurret_D";
				animationSourceGun="mainGun_D";
				selectionFireAnim="zasleh_D";
				gunnerLeftHandAnimName="main_elev_D";
				gunnerRightHandAnimName="main_elev_D";
				gunnerLeftLegAnimName="main_trav_D";
				gunnerRightLegAnimName="main_trav_D";
				proxyIndex=3;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				commanding=-3;
				weapons[]=
				{
					"HMG_M2_2"
				};
				gunBeg="muzzle_D";
				gunEnd="chamber_D";
				primaryGunner=0;
				memoryPointGun="muzzle_D";
				memoryPointGunnerOptics="gunnerview_D";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_R";
				memoryPointsGetInGunnerDir="pos_cargo_R_dir";
				gunnerDoor="";
				canUseScanners=0;
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						name="main_turret2_hit";
					};
					class HitGun: HitGun
					{
						name="main_gun2_hit";
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=12;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="Ramp";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuation";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-27.052,45.545799},
						{-13.4516,56.772701},
						{-4.4482999,65.123001},
						{-6.0514998,90.887703}
					};
					limitsArrayBottom[]=
					{
						{-30.783501,45.479801},
						{-33.051998,61.917099},
						{-38.3908,88.680901},
						{-9.3863001,89.137497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=11;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-2.8943,-89.789497},
						{0.26629999,-59.6968},
						{-8.4580002,-50.813801},
						{-21.2666,-35.517899},
						{-28.353901,-25.508699}
					};
					limitsArrayBottom[]=
					{
						{-3.8766,-89.885803},
						{-40.966999,-84.771896},
						{-31.8825,-53.919998},
						{-29.275801,-25.6078}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
	};
	class bav_nh90_bw_transport: bav_nh90_base
	{
		_generalMacro="bav_nh90_bw_transport";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		forceIngarage=1;
		editorPreview="\ffaa_data\EditorPreview\ffaa_nh90_tth_transport.jpg";
		displayName="NH90 (Transport)";
		author="$STR_FFAA_NH90_AUTOR";
		hiddenselectionstextures[]=
		{
			"bav_nh90\data\bav_nh90_bw.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=12;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="Ramp";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuation";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-27.052,45.545799},
						{-13.4516,56.772701},
						{-4.4482999,65.123001},
						{-6.0514998,90.887703}
					};
					limitsArrayBottom[]=
					{
						{-30.783501,45.479801},
						{-33.051998,61.917099},
						{-38.3908,88.680901},
						{-9.3863001,89.137497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=11;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-2.8943,-89.789497},
						{0.26629999,-59.6968},
						{-8.4580002,-50.813801},
						{-21.2666,-35.517899},
						{-28.353901,-25.508699}
					};
					limitsArrayBottom[]=
					{
						{-3.8766,-89.885803},
						{-40.966999,-84.771896},
						{-31.8825,-53.919998},
						{-29.275801,-25.6078}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideGunnerSeats: HideGunnerSeats
			{
				initPhase=1;
			};
		};
	};
	class bav_nh90_bw_med: bav_nh90_base
	{
		_generalMacro="bav_nh90_bw_med";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		forceIngarage=1;
		editorPreview="\ffaa_data\EditorPreview\ffaa_nh90_tth_transport.jpg";
		displayName="NH90 (Med)";
		author="$STR_FFAA_NH90_AUTOR";
		hiddenselectionstextures[]=
		{
			"bav_nh90\data\bav_nh90_med.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex=12;
				isPersonTurret=1;
				ejectDeadGunner=0;
				enabledByAnimationSource="Ramp";
				playerPosition=2;
				soundAttenuationTurret="HeliAttenuation";
				disableSoundAttenuation=0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-27.052,45.545799},
						{-13.4516,56.772701},
						{-4.4482999,65.123001},
						{-6.0514998,90.887703}
					};
					limitsArrayBottom[]=
					{
						{-30.783501,45.479801},
						{-33.051998,61.917099},
						{-38.3908,88.680901},
						{-9.3863001,89.137497}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex=11;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{-2.8943,-89.789497},
						{0.26629999,-59.6968},
						{-8.4580002,-50.813801},
						{-21.2666,-35.517899},
						{-28.353901,-25.508699}
					};
					limitsArrayBottom[]=
					{
						{-3.8766,-89.885803},
						{-40.966999,-84.771896},
						{-31.8825,-53.919998},
						{-29.275801,-25.6078}
					};
				};
				class TurnIn: TurnOut
				{
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideGunnerSeats: HideGunnerSeats
			{
				initPhase=1;
			};
		};
	};
	class bav_nh90_bw_cargo: bav_nh90_base
	{
		_generalMacro="ffaa_nh90_tth_cargo";
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		forceIngarage=1;
		editorPreview="\ffaa_data\EditorPreview\ffaa_nh90_tth_transport.jpg";
		displayName="NH90 (Cargo)";
		author="$STR_FFAA_NH90_AUTOR";
		transportSoldier=0;
		hiddenselectionstextures[]=
		{
			"bav_nh90\data\bav_nh90_bw.paa"
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"Cargo_limit_1",
					"Cargo_limit_2"
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
					"Cargo_exit_1"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
			};
			class Cargo
			{
				canBeTransported=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class HideGunnerSeats: HideGunnerSeats
			{
				initPhase=1;
			};
			class HideSeats: HideSeats
			{
				initPhase=1;
			};
		};
	};
	class HelicopterWreck;
	class bav_nh90Wreck: HelicopterWreck
	{
		scope=1;
		class Armory
		{
			disabled=1;
		};
		model="\ffaa_nh90\ffaa_nh90Wreck.p3d";
		typicalCargo[]={};
		irTarget=0;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		transportSoldier=14;
		class Eventhandlers
		{
		};
	};
};
class CfgMagazines
{
	class PylonMissile_1Rnd_LG_scalpel;
	class PylonMissile_ffaa_1Rnd_marte_mk2_right: PylonMissile_1Rnd_LG_scalpel
	{
		displayName="1Rnd Marte Mk2/S";
		displayNameShort="Marte";
		ammo="ffaa_marte_mk2s_ammo";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		model="\ffaa_nh90\proxy\ffaa_nh90_right_pylon.p3d";
		pylonWeapon="ffaa_marte_mk2s";
		hardpoints[]=
		{
			"B_PYLON_NH90_RIGHT"
		};
		count=1;
		initSpeed=0;
		mass=300;
	};
	class PylonMissile_ffaa_1Rnd_marte_mk2_left: PylonMissile_ffaa_1Rnd_marte_mk2_right
	{
		model="\ffaa_nh90\proxy\ffaa_nh90_left_pylon.p3d";
		hardpoints[]=
		{
			"B_PYLON_NH90_LEFT"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxyffaa_nh90_left_pylon: ProxyWeapon
	{
		model="\ffaa_nh90\proxy\ffaa_nh90_left_pylon.p3d";
		simulation="pylonpod";
	};
	class Proxyffaa_nh90_right_pylon: ProxyWeapon
	{
		model="\ffaa_nh90\proxy\ffaa_nh90_right_pylon.p3d";
		simulation="pylonpod";
	};
	class ProxyRetex;
	class proxyffaa_nh90_extras: ProxyRetex
	{
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		model="\ffaa_nh90\ffaa_nh90_extras.p3d";
	};
	class proxyffaa_nh90Wreck: ProxyRetex
	{
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		model="\ffaa_nh90\ffaa_nh90Wreck.p3d";
	};
};
class cfgMods
{
	author="B.A.Verrecus";
	timepacked="1522839633";
};
