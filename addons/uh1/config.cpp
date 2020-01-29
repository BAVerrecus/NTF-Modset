#include "script_component.hpp"

class CfgPatches
{
	class bav_uh1
	{
		units[]=
		{
			"bav_UH1_sar",
			"bav_UH1_ar",
			"bav_UH1_unar"
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
			"RHS_US_A2_AirImport",
			"rhsgref_c_air"
		};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
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
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class CargoTurret;
		class ViewOptics;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
		class Sounds;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class MainTurret;
			class RightDoorGun;
			
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class Reflectors
		{
			class Right;
		};
		class SoundsExt;
		class HitPoints;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Sounds;
		class SoundsExt
		{
			class Sounds;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
	};
	class rhs_uh1h_base: Helicopter_Base_H
	{
	};
	class rhs_uh1h_hidf: rhs_uh1h_base
	{
	};

	class rhs_uh1h_hidf_unarmed: rhs_uh1h_hidf
	{
	};
	class bav_UH1_sar: rhs_uh1h_hidf_unarmed
	{
		scope=2;
		editorPreview="bav_uh1\data\20180908122433_1.jpg";
		displayName="UH-1 (SAR)";
		faction = "BWA3_Faction_Fleck";
		crew="BWA3_Helipilot";
		author="StephanP.";
		typicalCargo[]=
		{
			"BWA3_Helipilot"
		};
		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class UserActions
		{
			class Open_Side_Doors
			{
				displayName="Open Side Doors";
				onlyforplayer = 1;
				position= "aimpoint";
				radius=2;
				priority = 1;
				condition="this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',0]";
				showWindow = 0;
			};

			class Close_Side_Doors: Open_Side_Doors
			{
				displayName="Close Side Doors";
				condition="this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',1]";
			};
		};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{
				gunnerType="BWA3_Helipilot";
			};
		};
		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};
		hiddenselectionstextures[]=
		{
			"bav_uh1\data\uh1h_black_co_BW_camo_sar.paa",
			"bav_uh1\data\uh1h_black_in_BW_camo_sar.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
			"bav_uh1\data\uh1h_idap_decals_sar.paa"
		};
	};
	class bav_UH1_unar: rhs_uh1h_hidf_unarmed
	{
		scope=2;
		editorPreview="bav_uh1\data\20180908122503_1.jpg";
		displayName="UH-1 (unarmed)";
		faction = "BWA3_Faction_Fleck";
		crew="BWA3_Helipilot";
		author="StephanP.";
		typicalCargo[]=
		{
			"BWA3_Helipilot"
		};
		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};

			class Hide_guns
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class UserActions
		{
			class Open_Side_Doors
			{
				displayName="Open Side Doors";
				onlyforplayer = 1;
				position= "aimpoint";
				radius=2;
				priority = 1;
				condition="this doorPhase 'close_cargo_doors' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',0]";
				showWindow = 0;
			};

			class Close_Side_Doors: Open_Side_Doors
			{
				displayName="Close Side Doors";
				condition="this doorPhase 'close_cargo_doors' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['close_cargo_doors',1]";
			};
		};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret{
				gunnerType="BWA3_Helipilot";
			};
		};
		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};
		hiddenselectionstextures[]=
		{
			"bav_uh1\data\uh1h_black_co_BW_camo.paa",
			"bav_uh1\data\uh1h_black_in_BW_camo.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
			"bav_uh1\data\uh1h_idap_decals_BW_camo.paa"
		};
	};
	class bav_UH1_ar: rhs_uh1h_hidf
	{
		scope=2;
		editorPreview="bav_uh1\data\20180908122503_1.jpg";
		displayName="UH-1 (armed)";
		faction = "BWA3_Faction_Fleck";
		crew="BWA3_Helipilot";
		author="StephanP.";
		typicalCargo[]=
		{
			"BWA3_Helipilot"
		};
		class AnimationSources: AnimationSources
		{
			class Hide_mid_doors
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
		};

		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 0;
				isCopilot = 1;
				hideWeaponsGunner = 0;
				gunnerAction = "RHS_UH1H_CoPilot";
				gunnerInAction = "RHS_UH1H_CoPilot";
				memoryPointsGetInGunner = "pos Codriver";
				memoryPointsGetInGunnerDir = "pos Codriver dir";
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
				preciseGetInOut = 1;
				GunnerDoor = "door_copilot";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				gunnerLeftLegAnimName = "PedalL";
				gunnerRightLegAnimName = "PedalR";
				gunBeg	= "muzzle_copilot";
				gunEnd	= "chamber_copilot";
				primaryGunner = 1;
				proxyIndex = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				gunnerCompartments = "Compartment2";

				weapons[]=
				{
					"rhs_weap_fcs_nolrf_ammo"
				};
				magazines[]=
				{
					"rhs_laserfcsmag","rhs_laserfcsmag"
				};
				class ViewGunner
				{
					minAngleX=-65;
					maxAngleX=85;
					initAngleX=0;
					minAngleY=-150;
					maxAngleY=150;
					initAngleY=0;
					minFov=0.25;
					maxFov=0.95;
					initFov=0.85;
				};
				class Hitpoints {};
			};
			class RightGunner: MainTurret
			{
				body="RightTurretBase";
				gun="RightTurretGun";
				animationSourceBody="RightTurretBase";
				animationSourceGun="RightTurretGun";
				CanEject = 1;
				isCopilot = 0;
				initelev = 0;
				initturn = -90;
				maxelev = 20;
				maxturn = -25;
				minelev = -55;
				minturn = -135;
				soundServo[]={,db-40,1.0};
				stabilizedInAxes = StabilizedInAxesNone;
				weapons[] = {"rhs_weap_m240H_2"};
				magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200"};
				gunBeg = "muzzle_2"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_2"; //gunEnd = chamber of the gun
				gunnerName = "$STR_A3_RIGHT_GUNNER";
				memoryPointsGetInGunner = "pos Gunner R";
				memoryPointsGetInGunnerDir = "pos Gunner R dir";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				memoryPointGunnerOptics="gunnerview_2";
				gunnerOutOpticsShowCursor=1;
				gunnerOpticsShowCursor=0;
				gunnerLeftHandAnimName="OtocHlaven_2";
				gunnerRightHandAnimName="OtocHlaven_2";
				gunnerLeftLegAnimName="gunner_2_leg_left";
				gunnerRightLegAnimName="gunner_2_legs";
				gunnerAction= "RHS_UH1H_Gunner_R";
				gunnerInAction= "RHS_UH1H_Gunner_R";
				selectionFireAnim="zasleh_2";
				primaryGunner=0;
				proxyIndex=3;

				class ViewOptics
				{
					initanglex = 0;
					initangley = 0;
					initfov = 0.7;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -30;
					minangley = -100;
					minfov = 0.25;
				};

				gunnerCompartments = "Compartment3";
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 0;
				class Hitpoints {};
			};
			class LeftGunner: RightGunner
			{
				body="LeftTurretBase";
				gun="LeftTurretGun";
				animationSourceBody="LeftTurretBase";
				animationSourceGun="LeftTurretGun";
				weapons[] = {"rhs_weap_m240H_1"};
				magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200"};
				gunBeg = "muzzle_1"; //gunBeg = endpoint of the gun
				gunEnd = "chamber_1"; //gunEnd = chamber of the gun
				gunnerLeftHandAnimName="OtocHlaven_1";
				gunnerRightHandAnimName="OtocHlaven_1";
				gunnerLeftLegAnimName="gunner_1_leg_left";
				gunnerRightLegAnimName="gunner_1_legs";
				gunnerAction= "RHS_UH1H_Gunner_L";
				gunnerInAction= "RHS_UH1H_Gunner_L";

				memoryPointsGetInGunner = "pos Gunner L";
				memoryPointsGetInGunnerDir = "pos Gunner L dir";
				primaryGunner=0;
				proxyIndex=2;
				memoryPointGunnerOptics="gunnerview_1";
				selectionFireAnim="zasleh_1";
				gunnerName = "$STR_A3_LEFT_GUNNER";
				initelev = 0;
				initturn = 90;
				maxelev = 20;
				maxturn = 125;
				minelev = -55;
				minturn = 30;
			};
			//gunnerType="BWA3_Helipilot";
			class CargoTurret_01: CargoTurret
			{
				gunnerAction				= "passenger_bench_1";
				gunnerGetInAction			= "GetInHeli_Light_01bench";
				gunnerCompartments			= "compartment3";
				memoryPointsGetInGunner		= "pos Gunner L";
				memoryPointsGetInGunnerDir	= "pos Gunner L dir";
				gunnerName					= "Passenger (Left Door)";
				gunBeg						= "muzzle_copilot";
				gunEnd						= "chamber_copilot";
				proxyIndex					= 7;
				maxElev						= 45;
				minElev						= -55;
				maxTurn						= 70;
				minTurn						= -10;
				isPersonTurret				= 1;
				ejectDeadGunner				= 0;
				playerPosition				= 4;
				soundAttenuationTurret		= "";
				disableSoundAttenuation		= 1;
				weapons[]					= {rhs_weap_DummyLauncher}; // fix for get in order
				class Hitpoints {};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments			= "compartment3";
				memoryPointsGetInGunner		= "pos Gunner R";
				memoryPointsGetInGunnerDir	= "pos Gunner R dir";
				gunnerName					= "Passenger (Right Door)";
				proxyIndex					= 8;
				maxTurn						= 35;
				minTurn						= -60;
			};
		};
		hiddenSelections[] ={"Camo1","Camo2","Camo_mlod","decals"};
		hiddenselectionstextures[]=
		{
			"bav_uh1\data\uh1h_black_co_BW_camo.paa",
			"bav_uh1\data\uh1h_black_in_BW_camo.paa",
			"rhsgref\addons\rhsgref_air\uh1h\data\mlod_hidf_grey_co.paa",
			"bav_uh1\data\uh1h_idap_decals_BW_camo.paa"
		};
	};
};
