class CfgPatches
{
	class bav_et_pizarro
	{
		units[]=
		{
			"ffaa_et_pizarro_mauser"
		};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"ffaa_et_brilat",
			"ffaa_armas",
			"ffaa_data",
			"A3_Armor_F_EPB_APC_tracked_03",
			"A3_Sounds_F_EPB",
			"A3_Sounds_F",
			"A3_Weapons_F",
			"A3_Data_F",
			"ffaa_et_pizarro"
		};
		author="FFAA MOD Team";
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
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
		class Eventhandlers;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class ffaa_et_pizarro: Tank_F
	{
		dlc="FFAAMOD";
		side=1;
		faction="FFAA";
		editorSubcategory="EdSubcat_APCs";
		crew="ffaa_brilat_carrista_ds";
		typicalCargo[]=
		{
			"ffaa_brilat_carrista_ds"
		};
		maxOmega=276;
		peakTorque=4832;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		fuelCapacity=1885;
		simulation="tankX";
		enginePower=485;
		thrustDelay=0.1;
		clutchStrength=180;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=500000;
		idleRpm=610;
		redRpm=2300;
		engineLosses=25;
		transmissionLosses=15;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-2.2349999,
				"N",
				0,
				"D1",
				2.5899999,
				"D2",
				1.79,
				"D3",
				1.23,
				"D4",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				5.5
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
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
				MOI=16.5;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=10000;
				sprungMass=4000;
				springStrength=324000;
				springDamperRate=36000;
				dampingRate=1;
				dampingRateInAir=5355;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
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
		selectionLeftOffset="PasOffsetL";
		selectionRightOffset="PasOffsetP";
		memoryPointTrack1L="Stopa LL";
		memoryPointTrack1R="Stopa LR";
		memoryPointTrack2L="Stopa RL";
		memoryPointTrack2R="Stopa RR";
		scope=0;
		maxSpeed=70;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=2.8;
		predictTurnSimul=2.5999999;
		brakeDistance=15;
		precision=5;
		transportSoldier=7;
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		viewCargoInExternal=0;
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic02",
			"passenger_apc_narrow_generic02",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft"
		};
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		waterResistance=3;
		waterDamageEngine=0.1;
		wheelCircumference=1.95;
		tracksSpeed=1.27;
		driverAction="driver_apctracked3_out";
		driverInAction="driver_apctracked3_in";
		extCameraPosition[]={0,2.25,-9};
		forceHideDriver=0;
		driverOpticsModel="\ffaa_et_pizarro\data\reticles\optics_driver_pizarro.p3d";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal"
			};
			initFov=0.75;
			minFov=0.75;
			maxFov=0.75;
		};
		armor=400;
		armorLights=0.075000003;
		armorStructural=6;
		damageResistance=0.0054700002;
		cost=2500000;
		crewVulnerable=1;
		model="\ffaa_et_pizarro\ffaa_et_pizarro";
		picture="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\APC_Tracked_03_Base_ca.paa";
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=1;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.22;
				explosionShielding=1;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=0.80000001;
				material=-1;
				name="motor";
				passThrough=0.80000001;
				minimalHit=0.23999999;
				explosionShielding=1.5;
				radius=0.25;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.40000001;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.40000001;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1;
				radius=0.30000001;
			};
		};
		animationSourceHatch="hatchDriver";
		selectionFireAnim="";
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectBig";
			};
		};
		insideSoundCoef=0.89999998;
		threat[]={1,1,0.30000001};
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
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
		soundEngineOnExt[]=
		{
			"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_engine_start",
			2,
			1,
			150
		};
		soundEngineOffExt[]=
		{
			"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_engine_stop",
			2,
			1,
			150
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",
			0.63095737,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",
			0.63095737,
			1
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
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
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
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
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
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
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
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
			class Idle
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_idle",
					0.5,
					1.1,
					200
				};
				frequency="0.8 + (rpm factor[0, 500]) * 0.2";
				volume="engineOn * camPos * (0.2 + (rpm factor[800, 0]) * 0.4)";
			};
			class Engine
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_engine",
					1,
					0.75,
					200
				};
				frequency="(0.9 + (rpm factor[0, 1800])) * 1.1";
				volume="engineOn * camPos * (0.5 + (rpm factor[0, 800])) * 1.7";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_thrust",
					1,
					0.30000001,
					280
				};
				frequency="(rpm factor [0, 2900]) * 0.4";
				volume="engineOn * camPos * thrust * (rpm factor [0,2900])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_int_idle",
					1,
					1
				};
				frequency="0.4 + (rpm factor[0, 2930]) * 0.6";
				volume="engineOn * (1-camPos) * (0.6 + (rpm factor[500, 0]) * 0.4)";
			};
			class Engine_int
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_int_engine",
					1.5,
					1
				};
				frequency="0.5 + (rpm factor[0, 2930])";
				volume="engineOn * (1-camPos) * (0.2 + (rpm factor[0, 2900]) * 0.8)";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_int_thrust",
					1,
					1
				};
				frequency="0.6 + (rpm factor [500, 2900]) * 0.4";
				volume="engineOn * (1-camPos) * thrust * (rpm factor [500,2900])";
			};
			class Turbocharger_ext
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_turbolader",
					1,
					0.69999999,
					150
				};
				frequency="(0.9 * (rpm / 1100)) - 0.2";
				volume="engineOn * camPos";
			};
			class Tracks
			{
				sound[]=
				{
					"\ffaa_et_pizarro\sounds\ffaa_pizarro_ext_tracks",
					1,
					1,
					300
				};
				frequency="(rpm factor [0, 2900]) * 0.2";
				volume="engineOn * camPos * (rpm factor[0, 2900])";
			};
			class Noise
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.89125103,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class Noise_int
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118703,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",
					1.5,
					0.1,
					60
				};
				frequency="8";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",
					1.5,
					0.1,
					60
				};
				frequency="8";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",
					1.5,
					0.1,
					80
				};
				frequency="8";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",
					1.5,
					0.1,
					100
				};
				frequency="8";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",
					1.5,
					0.1,
					100
				};
				frequency="8";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",
					1.5,
					0.1,
					60
				};
				frequency="8";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",
					1.5,
					0.1,
					60
				};
				frequency="8";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",
					1.5,
					0.1,
					80
				};
				frequency="8";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",
					1.5,
					0.1,
					100
				};
				frequency="8";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",
					1.5,
					0.1,
					100
				};
				frequency="8";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.50118721,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.56234133,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.63095737,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.70794576,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.39810717,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-0) max 0)/ 95),(((-10) max 10)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/  95)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.44668359,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-20) max 20)/ 95),(((-35) max 35)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/  95)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.50118721,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-45) max 45)/ 95),(((-55) max 55)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/  95)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.63095737,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/  95) factor[(((-65) max 65)/ 95),(((-70) max 70)/  95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/  95)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.70794576,
					0.2
				};
				frequency="8";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/  95)])";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
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
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Right",
				"Right2"
			}
		};
		class RenderTargets
		{
			class mirror_l
			{
				renderTarget="mirror_l";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class mirror_r
			{
				renderTarget="mirror_r";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
		};
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=120;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						animationSourceHatch="hatchCommander";
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=10;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"ffaa_SafeWeapon",
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="commander_apctracked3_out";
						gunnerInAction="commander_apctracked3_in";
						gunnerGetInAction="GetInLow";
						gunnerGetOutAction="GetOutLow";
						turretInfoType="RscWeaponEmpty";
						gunnerOpticsModel="\ffaa_et_pizarro\data\reticles\optics_commander_pizarro";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-95;
						maxOutTurn=95;
						initOutTurn=0;
						class ViewGunner: ViewCargo
						{
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.25;
							minFov=0.083300002;
							maxFov=0.25;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						startEngine=0;
						gunnerHasFlares=1;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=0;
						class HitPoints
						{
							class HitTurret
							{
								armor=0.1;
								material=-1;
								name="vezVelitele";
								visual="";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.25;
							};
							class HitGun
							{
								armor=0.1;
								material=-1;
								name="zbranVelitele";
								visual="";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.25;
							};
						};
					};
				};
				animationSourceHatch="hatchGunner";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGun="usti hlavne2";
				gunnerAction="gunner_apctracked3_out";
				gunnerInAction="gunner_apctracked3_in";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				weapons[]=
				{
					"ffaa_SafeWeapon",
					"ffaa_VCI_30mm",
					"LMG_coax"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"140Rnd_30mm_MP_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
					"1000Rnd_762x51_Belt_Red",
					"1000Rnd_762x51_Belt_Green"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.17782794,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.17782794,
					1,
					30
				};
				forceHideGunner=0;
				turretInfoType="ffaa_RscOptics_pizarro_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-10;
				maxElev=20;
				initElev=10;
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-10;
				maxOutElev=25;
				initOutElev=0;
				minOutTurn=-95;
				maxOutTurn=95;
				initOutTurn=0;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				viewGunnerInExternal=0;
				selectionFireAnim="zasleh2";
				class OpticsIn
				{
					class Normal: ViewOptics
					{
						initAngleX=0;
						minAngleX=-10;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.25;
						minFov=0.25;
						maxFov=0.25;
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={2,3};
						opticsDisplayName="Normal";
						gunnerOpticsModel="\ffaa_et_pizarro\data\reticles\optics_gunner_pizarro.p3d";
						gunnerOpticsEffect[]={};
					};
					class Wide_TI: Normal
					{
						visionMode[]=
						{
							"TI",
							"Normal"
						};
						opticsDisplayName="Wide TI";
						gunnerOpticsModel="\ffaa_et_pizarro\data\reticles\optics_gunner_pizarro_ti_wide.p3d";
					};
					class Medium_TI: Wide_TI
					{
						initFov=0.082999997;
						minFov=0.082999997;
						maxFov=0.082999997;
						opticsDisplayName="Narrow TI";
						gunnerOpticsModel="\ffaa_et_pizarro\data\reticles\optics_gunner_pizarro_ti_medium.p3d";
					};
					class Narrow_TI: Wide_TI
					{
						initFov=0.041499998;
						minFov=0.041499998;
						maxFov=0.041499998;
						opticsDisplayName="Narrow TI";
						gunnerOpticsModel="\ffaa_et_pizarro\data\reticles\optics_gunner_pizarro_ti_narrow.p3d";
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.60000002;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.60000002;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.80000001;
						radius=0.25;
					};
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"ffaa_et_pizarro\data\pizarro.rvmat",
				"ffaa_et_pizarro\data\pizarro_damage.rvmat",
				"ffaa_et_pizarro\data\pizarro_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="ffaa_VCI_30mm";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="LMG_coax";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="LMG_coax";
			};
			class ani_red
			{
				displayName="$STR_FFAA_SHOWCAMONET";
				author="$STR_FFAA_AUTOR_FFAAMOD";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
		};
		class UserActions
		{
			class montar_red
			{
				displayName="$STR_FFAA_MONTAR_RED";
				position="driverview";
				radius=5;
				condition="(this animationSourcePhase ""ani_red"" == 0)&& ((player==(gunner this))||(player==(driver this))||(player==(commander this)))";
				statement="this animateSource [""ani_red"",1];";
				onlyforplayer="false";
				priority=4.6999998;
				showWindow=1;
			};
			class desmontar_red
			{
				displayName="$STR_FFAA_DESMONTAR_RED";
				position="driverview";
				radius=5;
				condition="(this animationSourcePhase ""ani_red"" == 1)&& ((player==(gunner this))||(player==(driver this))||(player==(commander this)))";
				statement="this animateSource [""ani_red"",0];";
				onlyforplayer="false";
				priority=4.6999998;
				showWindow=1;
			};
		};
		class Library
		{
			libTextDesc="$STR_FFAA_LIB_PIZARRO";
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=2;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=2;
			};
			class _xx_ffaa_556x45_g36
			{
				magazine="ffaa_556x45_g36";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_ffaa_armas_hkg36e_eo
			{
				weapon="ffaa_armas_hkg36e_eo";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"Random_1",
			"Random_2",
			"Random_3",
			"Random_4",
			"Random_5",
			"Random_6",
			"Random_7",
			"Random_8",
			"Random_9",
			"Random_10",
			"Random_11"
		};
		FFAA_numerales[]=
		{
			
			{
				"n",
				1,
				{0,1,4}
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1,
				"E"
			},
			
			{
				"n",
				1,
				"T"
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			},
			
			{
				"n",
				1
			}
		};
		hiddenSelectionsTextures[]=
		{
			"ffaa_et_pizarro\data\pizarro_co.paa"
		};
		class EventHandlers: Eventhandlers
		{
			init="[(_this select 0)] call FFAA_fnc_numerales;";
		};
	};
	class ffaa_et_pizarro_mauser: ffaa_et_pizarro
	{
		_generalMacro="ffaa_et_pizarro_mauser";
		author="$STR_FFAA_ET_PIZARRO_AUTOR";
		scope=2;
		displayname="$STR_FFAA_DN_PIZARRO";
		editorPreview="\ffaa_data\EditorPreview\ffaa_et_pizarro_mauser.jpg";
	};
};
class RscPicture;
class RscText;
class RscControlsGroup
{
	class VScrollbar;
	class HScrollbar;
};
class RscInGameUI
{
	class RscUnitInfo;
	class ffaa_RscOptics_pizarro_gunner: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_Zeroing",
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_Distance: RscText
				{
					idc=151;
					style=2;
					sizeEx="0.038*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="2456";
					x="24.3 * 		(0.01875 * SafezoneH)";
					y="7 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyRetex;
	class Proxyffaa_et_pizarro_exterior: ProxyRetex
	{
		hiddenSelections[]=
		{
			"camo"
		};
		model="\ffaa_et_pizarro\ffaa_et_pizarro_exterior.p3d";
	};
};
class CfgGroups
{
	class West
	{
		name="$STR_WEST";
		class ffaa
		{
			name="FFAA";
			side=1;
			class Mechanized
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Mechanized0";
				class ffaa_MechInfSquad
				{
					name="Peloton de fusiles mecanizada bs";
					side=1;
					faction="ffaa";
					class Unit0
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ffaa_brilat_jefe_peloton";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ffaa_brilat_granadero";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ffaa_brilat_granadero";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ffaa_brilat_c90";
						rank="PRIVATE";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ffaa_brilat_c90";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ffaa_brilat_tirador_ameli";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
				class ffaa_MechInfSquad_ds
				{
					name="Peloton de fusiles mecanizada ds";
					side=1;
					faction="ffaa";
					class Unit0
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="SERGEANT";
						position[]={0,5,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ffaa_brilat_jefe_peloton_ds";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ffaa_brilat_granadero_ds";
						rank="PRIVATE";
						position[]={5,0,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ffaa_brilat_granadero_ds";
						rank="PRIVATE";
						position[]={-5,0,0};
					};
					class Unit4
					{
						side=1;
						vehicle="ffaa_brilat_c90_ds";
						rank="PRIVATE";
						position[]={-10,-5,0};
					};
					class Unit5
					{
						side=1;
						vehicle="ffaa_brilat_c90_ds";
						rank="PRIVATE";
						position[]={10,-5,0};
					};
					class Unit6
					{
						side=1;
						vehicle="ffaa_brilat_tirador_ameli_ds";
						rank="PRIVATE";
						position[]={0,-5,0};
					};
				};
			};
			class Armored
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Armored0";
				class ffaa_TankPlatoon_pizarro
				{
					name="$STR_FFAA_TANK_PLATOON_PIZZARO";
					side=1;
					faction="ffaa";
					class Unit0
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="LIEUTENANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="SERGEANT";
						position[]={20,-30,0};
					};
					class Unit2
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="SERGEANT";
						position[]={-20,-30,0};
					};
					class Unit3
					{
						side=1;
						vehicle="ffaa_et_pizarro_mauser";
						rank="CORPORAL";
						position[]={-40,-60,1};
					};
				};
			};
		};
	};
};
class CfgWeapons
{
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
		class AP: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class medium;
			class far;
		};
	};
	class ffaa_VCI_30mm: autocannon_30mm_CTWS
	{
		displayName="$STR_FFAA_VCI_MK30";
		class HE: HE
		{
			displayName="$STR_FFAA_VCI_MK30";
			magazines[]=
			{
				"140Rnd_30mm_MP_shells",
				"140Rnd_30mm_MP_shells_Tracer_Red",
				"140Rnd_30mm_MP_shells_Tracer_Green",
				"140Rnd_30mm_MP_shells_Tracer_Yellow"
			};
			class player: player
			{
				dispersion=0.00060000003;
				reloadTime=0.092;
			};
			class close: close
			{
				dispersion=0.00060000003;
				reloadTime=0.092;
			};
			class short: short
			{
				dispersion=0.00060000003;
				reloadTime=0.092;
			};
			class medium: medium
			{
				dispersion=0.00060000003;
				reloadTime=0.092;
			};
			class far: far
			{
				dispersion=0.00060000003;
				reloadTime=0.092;
			};
		};
		class AP: AP
		{
			displayName="$STR_FFAA_VCI_MK30";
			magazines[]=
			{
				"60Rnd_30mm_APFSDS_shells",
				"60Rnd_30mm_APFSDS_shells_Tracer_Red",
				"60Rnd_30mm_APFSDS_shells_Tracer_Green",
				"60Rnd_30mm_APFSDS_shells_Tracer_Yellow"
			};
			class player: player
			{
				dispersion=0.00039999999;
				reloadTime=0.092;
			};
			class close: close
			{
				dispersion=0.00039999999;
				reloadTime=0.092;
			};
			class short: short
			{
				dispersion=0.00039999999;
				reloadTime=0.092;
			};
			class medium: medium
			{
				dispersion=0.00039999999;
				reloadTime=0.092;
			};
			class far: far
			{
				dispersion=0.00039999999;
				reloadTime=0.092;
			};
		};
	};
};
class cfgMods
{
	author="FFAAMOD";
	timepacked="1508796205";
};
