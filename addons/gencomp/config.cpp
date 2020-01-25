////////////////////////////////////////////////////////////////////
//DeRap: bwa3_comp_ace\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Oct 24 19:15:22 2017 : 'file' last modified on Wed Mar 29 22:42:10 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bav_gen_comp
	{
		name = "BAV_General_compat";
		units[] = {"CSW_XM8_Box"};
		weapons[] = {"CSW_XM8_base_F","CSW_XM8_dmar_black"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_weapons_f","A3_weapons_f_exp","ace_common","BWA3_Common","BWA3_Eagle","BWA3_Weapons","BWA3_Units","BWA3_Puma","BWA3_Leopard2A6M","BWA3_Tiger","CSW_XM8","CSW_XM8_Ammo_Box","hlcweapons_core","hlcweapons_g3","hlcweapons_m14","hlcweapons_m60e4","rhs_c_weapons","rhsusf_weapons","rhsusf_weapons2","rhsusf_weapons3","r3f_armes_c","r3f_armes","r3f_acc","BWA3_Comp_ACE","bwa3_launchers","r3f_armes_c","rds_a2port_cman"};
		versionAr[] = {1,0,0};
		author = "B.A.Verrecus";
	};
};
class CfgVehicles
{
	class All
	{
		class Turrets;
	};
	class AllVehicles: All
	{
		class NewTurret
		{
			class Turrets;
		};
	};
	class Land: AllVehicles{};
	class Air: AllVehicles{};
	class LandVehicle: Land
	{
		class CommanderOptics: NewTurret{};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
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
	};
	class Car: LandVehicle{};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Quadbike_01_base_F : Car_F
	{
		LESH_canTow = 1;
		LESH_AxisOffsetTower[] = {0, -1.2, 0};
	};	
		class Tank_F: Tank{};
	class Helicopter: Air
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
		class Turrets
		{
			class MainTurret;
		};
	};
	class Helicopter_Base_F: Helicopter{};
	class BWA3_Puma_base: Tank_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,-1.0,1.3]";
			};
		};
		fuelCapacity = "600 * 0.165";
		ACE_refuel_fuelCapacity = 700;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Leopard_base: Tank_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,-1.5,1.3]";
			};
		};
		fuelCapacity = "500 * 0.165";
		ACE_refuel_fuelCapacity = 1160;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Tiger_base: Helicopter_Base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,1.5,0]";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 200;
				ACE_fcs_maxDistance = 9990;
				ACE_fcs_distanceInterval = 1;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	class BWA3_Eagle_Base: Car_F
	{
		fuelCapacity = "700 * 0.165";
		ACE_refuel_fuelCapacity = 180;
	};
	class BWA3_Eagle_flw100_base: BWA3_Eagle_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ACE_fcs_enabled = 1;
				ACE_fcs_minDistance = 50;
				ACE_fcs_maxDistance = 5000;
				ACE_fcs_distanceInterval = 5;
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
			};
		};
	};
	
	class Plane: Air
	{
	};
	
	class Plane_Base_F: Plane
	{
	};
	
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
		LESH_canBeTowed = 1;
		LESH_towFromFront = 1;
		LESH_AxisOffsetTarget[] = {0,10,-1.4};
		LESH_WheelOffset[] = {0,1.6};
	};
	
	class ReammoBox_F;
	class BWA3_Box_Base: ReammoBox_F
	{
		ACE_dragging_canCarry = 1;
		ACE_dragging_canDrag = 1;
	};
	class BWA3_Box_All: BWA3_Box_Base
	{
		ACE_dragging_canCarry = 0;
		ACE_dragging_canDrag = 0;
	};
	class BWA3_Box_Gear: BWA3_Box_Base
	{
		ACE_dragging_canCarry = 0;
		ACE_dragging_canDrag = 0;
	};
	class NATO_Box_Base;
	class CSW_XM8_Box: NATO_Box_Base
	{
		scope = 2;
		mapSize = 2.34;
		author = "CSW Team";
		dlc = "CSW";
		_generalMacro = "CSW_XM8_Box";
		model = "\CSW_XM8_Ammo_Box\BOX_XM8.p3d";
		icon = "iconCrateLarge";
		displayName = "CSW XM8 Box";
		maximumLoad = 90000;
		transportMaxWeapons = 20;
		transportMaxMagazines = 1000;
		transportMaxBackpacks = 20;
		armor = 500;
		class TransportMagazines
		{
			class _xx_CSW_XM8_30rnd_Mk318_SOST_mag
			{
				magazine = "CSW_XM8_30rnd_Mk318_SOST_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M193_Ball_mag
			{
				magazine = "CSW_XM8_30rnd_M193_Ball_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M855_FMJ_mag
			{
				magazine = "CSW_XM8_30rnd_M855_FMJ_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M855A1_LFS_mag
			{
				magazine = "CSW_XM8_30rnd_M855A1_LFS_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_Mk262_SPR_mag
			{
				magazine = "CSW_XM8_30rnd_Mk262_SPR_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M995_AP_mag
			{
				magazine = "CSW_XM8_30rnd_M995_AP_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M196_Tracer_Red_mag
			{
				magazine = "CSW_XM8_30rnd_M196_Tracer_Red_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M856_Tracer_Red_mag
			{
				magazine = "CSW_XM8_30rnd_M856_Tracer_Red_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_XM996_Dim_Tracer_mag
			{
				magazine = "CSW_XM8_30rnd_XM996_Dim_Tracer_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_Subsonic_mag
			{
				magazine = "CSW_XM8_30rnd_Subsonic_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M862_PPA_mag
			{
				magazine = "CSW_XM8_30rnd_M862_PPA_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_XM1037_SRTA_mag
			{
				magazine = "CSW_XM8_30rnd_XM1037_SRTA_mag";
				count = 100;
			};
			class _xx_CSW_XM8_30rnd_M200_Blank_mag
			{
				magazine = "CSW_XM8_30rnd_M200_Blank_mag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_Mk318_SOST_Cmag
			{
				magazine = "CSW_XM8_100rnd_Mk318_SOST_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M193_Ball_Cmag
			{
				magazine = "CSW_XM8_100rnd_M193_Ball_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M855_FMJ_Cmag
			{
				magazine = "CSW_XM8_100rnd_M855_FMJ_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M855A1_LFS_Cmag
			{
				magazine = "CSW_XM8_100rnd_M855A1_LFS_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_Mk262_SPR_Cmag
			{
				magazine = "CSW_XM8_100rnd_Mk262_SPR_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M995_AP_Cmag
			{
				magazine = "CSW_XM8_100rnd_M995_AP_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M196_Tracer_Red_Cmag
			{
				magazine = "CSW_XM8_100rnd_M196_Tracer_Red_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M856_Tracer_Red_Cmag
			{
				magazine = "CSW_XM8_100rnd_M856_Tracer_Red_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_XM996_Dim_Tracer_Cmag
			{
				magazine = "CSW_XM8_100rnd_XM996_Dim_Tracer_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_Subsonic_Cmag
			{
				magazine = "CSW_XM8_100rnd_Subsonic_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M862_PPA_Cmag
			{
				magazine = "CSW_XM8_100rnd_M862_PPA_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_XM1037_SRTA_Cmag
			{
				magazine = "CSW_XM8_100rnd_XM1037_SRTA_Cmag";
				count = 100;
			};
			class _xx_CSW_XM8_100rnd_M200_Blank_Cmag
			{
				magazine = "CSW_XM8_100rnd_M200_Blank_Cmag";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Green
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Green";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine = "30Rnd_556x45_Stanag_red";
				count = 100;
			};
			class _xx_30Rnd_556x45_Stanag_gren
			{
				magazine = "30Rnd_556x45_Stanag_green";
				count = 100;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_M995_AP_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_M995_AP_mag";
				count = 100;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk262_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk262_mag";
				count = 100;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Mk318_mag
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Mk318_mag";
				count = 100;
			};
			class _xx_ACE_30Rnd_556x45_Stanag_Tracer_Dim
			{
				magazine = "ACE_30Rnd_556x45_Stanag_Tracer_Dim";
				count = 100;
			};
			class _xx_CSW_XM26_5Rnd_Buck
			{
				magazine = "CSW_XM26_5Rnd_Buck";
				count = 100;
			};
			class _xx_CSW_XM26_5Rnd_Slug
			{
				magazine = "CSW_XM26_5Rnd_Slug";
				count = 100;
			};
			class _xx_CSW_XM26_5Rnd_PPA
			{
				magazine = "CSW_XM26_5Rnd_PPA";
				count = 100;
			};
			class _xx_CSW_XM26_5Rnd_Stun
			{
				magazine = "CSW_XM26_5Rnd_Stun";
				count = 100;
			};
			class _xx_CSW_XM26_5Rnd_HE
			{
				magazine = "CSW_XM26_5Rnd_HE";
				count = 100;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 100;
			};
			class _xx_CSW_1Rnd_Flechette_Cartridge_Grenade_shell
			{
				magazine = "CSW_1Rnd_Flechette_Cartridge_Grenade_shell";
				count = 100;
			};
			class _xx_UGL_FlareWhite_F
			{
				magazine = "UGL_FlareWhite_F";
				count = 100;
			};
			class _xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 100;
			};
			class _xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 100;
			};
			class _xx_UGL_FlareYellow_F
			{
				magazine = "UGL_FlareYellow_F";
				count = 100;
			};
			class _xx_UGL_FlareCIR_F
			{
				magazine = "UGL_FlareCIR_F";
				count = 100;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				magazine = "1Rnd_SmokeRed_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine = "1Rnd_SmokeYellow_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell
			{
				magazine = "1Rnd_SmokePurple_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 100;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 100;
			};
			class _xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 100;
			};
		};
		class TransportWeapons
		{
			class _xx_CSW_XM8_assault_black
			{
				weapon = "CSW_XM8_assault_black";
				count = 10;
			};
			class _xx_CSW_XM8_assault_tan
			{
				weapon = "CSW_XM8_assault_tan";
				count = 10;
			};
			class _xx_CSW_XM8_assault_green
			{
				weapon = "CSW_XM8_assault_green";
				count = 10;
			};
			class _xx_CSW_XM8_assault_ucp
			{
				weapon = "CSW_XM8_assault_ucp";
				count = 10;
			};
			class _xx_CSW_XM8_c_black
			{
				weapon = "CSW_XM8_c_black";
				count = 10;
			};
			class _xx_CSW_XM8_c_tan
			{
				weapon = "CSW_XM8_c_tan";
				count = 10;
			};
			class _xx_CSW_XM8_c_green
			{
				weapon = "CSW_XM8_c_green";
				count = 10;
			};
			class _xx_CSW_XM8_c_ucp
			{
				weapon = "CSW_XM8_c_ucp";
				count = 10;
			};
			class _xx_CSW_XM8_m320_black
			{
				weapon = "CSW_XM8_m320_black";
				count = 10;
			};
			class _xx_CSW_XM8_m320_tan
			{
				weapon = "CSW_XM8_m320_tan";
				count = 10;
			};
			class _xx_CSW_XM8_m320_green
			{
				weapon = "CSW_XM8_m320_green";
				count = 10;
			};
			class _xx_CSW_XM8_m320_ucp
			{
				weapon = "CSW_XM8_m320_ucp";
				count = 10;
			};
			class _xx_CSW_XM8_xm26_black
			{
				weapon = "CSW_XM8_xm26_black";
				count = 10;
			};
			class _xx_CSW_XM8_xm26_tan
			{
				weapon = "CSW_XM8_xm26_tan";
				count = 10;
			};
			class _xx_CSW_XM8_xm26_green
			{
				weapon = "CSW_XM8_xm26_green";
				count = 10;
			};
			class _xx_CSW_XM8_xm26_ucp
			{
				weapon = "CSW_XM8_xm26_ucp";
				count = 10;
			};
			class _xx_CSW_XM8_dmar_black
			{
				weapon = "CSW_XM8_dmar_black";
				count = 10;
			};
			class _xx_CSW_XM8_dmar_tan
			{
				weapon = "CSW_XM8_dmar_tan";
				count = 10;
			};
			class _xx_CSW_XM8_dmar_green
			{
				weapon = "CSW_XM8_dmar_green";
				count = 10;
			};
			class _xx_CSW_XM8_dmar_ucp
			{
				weapon = "CSW_XM8_dmar_ucp";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_CSW_XM8_Silencer_Black
			{
				name = "CSW_XM8_Silencer_Black";
				count = 10;
			};
			class _xx_CSW_XM8_Silencer_Black2
			{
				name = "CSW_XM8_Silencer_Black2";
				count = 10;
			};
			class _xx_CSW_XM8_Silencer_Tan
			{
				name = "CSW_XM8_Silencer_Tan";
				count = 10;
			};
			class _xx_CSW_XM8_Silencer_Tan2
			{
				name = "CSW_XM8_Silencer_Tan2";
				count = 10;
			};
			class _xx_CSW_XM8_Silencer_Green
			{
				name = "CSW_XM8_Silencer_Green";
				count = 10;
			};
			class _xx_CSW_XM8_Silencer_UCP
			{
				name = "CSW_XM8_Silencer_UCP";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_normal_Black
			{
				name = "CSW_XM8_Flashlight_normal_Black";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_glare_Black
			{
				name = "CSW_XM8_Flashlight_glare_Black";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_normal_Sand
			{
				name = "CSW_XM8_Flashlight_normal_Sand";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_glare_Sand
			{
				name = "CSW_XM8_Flashlight_glare_Sand";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Black_IR
			{
				name = "CSW_XM8_Laser_Black_IR";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Black_RED
			{
				name = "CSW_XM8_Laser_Black_RED";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Black_GREEN
			{
				name = "CSW_XM8_Laser_Black_GREEN";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Sand_IR
			{
				name = "CSW_XM8_Laser_Sand_IR";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Sand_RED
			{
				name = "CSW_XM8_Laser_Sand_RED";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Sand_GREEN
			{
				name = "CSW_XM8_Laser_Sand_GREEN";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Black_IR
			{
				name = "CSW_XM8_Laser_Flashlight_Black_IR";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Black_RED
			{
				name = "CSW_XM8_Laser_Flashlight_Black_RED";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Black_GREEN
			{
				name = "CSW_XM8_Laser_Flashlight_Black_GREEN";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_Laser_normal_Black
			{
				name = "CSW_XM8_Flashlight_Laser_normal_Black";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_Laser_glare_Black
			{
				name = "CSW_XM8_Flashlight_Laser_glare_Black";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Sand_IR
			{
				name = "CSW_XM8_Laser_Flashlight_Sand_IR";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Sand_RED
			{
				name = "CSW_XM8_Laser_Flashlight_Sand_RED";
				count = 10;
			};
			class _xx_CSW_XM8_Laser_Flashlight_Sand_GREEN
			{
				name = "CSW_XM8_Laser_Flashlight_Sand_GREEN";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_Laser_normal_Sand
			{
				name = "CSW_XM8_Flashlight_Laser_normal_Sand";
				count = 10;
			};
			class _xx_CSW_XM8_Flashlight_Laser_glare_Sand
			{
				name = "CSW_XM8_Flashlight_Laser_glare_Sand";
				count = 10;
			};
			class _xx_CSW_Eotech_552
			{
				name = "CSW_Eotech_552";
				count = 10;
			};
			class _xx_optic_Arco
			{
				name = "optic_Arco";
				count = 10;
			};
			class _xx_optic_Hamr
			{
				name = "optic_Hamr";
				count = 10;
			};
			class _xx_optic_Aco
			{
				name = "optic_Aco";
				count = 10;
			};
			class _xx_optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 10;
			};
			class _xx_optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name = "optic_ACO_grn_smg";
				count = 10;
			};
			class _xx_optic_MRCO
			{
				name = "optic_MRCO";
				count = 10;
			};
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
		};
	};
};
class PointerSlot;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		BWA3_acc_LLM01_laser = 1;
		BWA3_acc_VarioRay_laser = 1;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class BWA3_P8: Pistol_Base_F
	{
		ACE_barrelTwist = 248.92;
		ACE_barrelLength = 108;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"BWA3_acc_LLM01_irlaser","BWA3_acc_LLM01_flash","BWA3_acc_LLM01_laser"};
			};
		};
	};
	class BWA3_MP7: Pistol_Base_F
	{
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 180;
	};
	class R3F_PAMAS: Pistol_Base_F
	{
		ACE_barrelTwist = 250.0;
		ACE_barrelLength = 125.0;
		muzzles[] = {"this"};
		initSpeed = -1.0;
	};
	class R3F_HKUSP: Pistol_Base_F
	{
		ACE_barrelTwist = 250.0;
		ACE_barrelLength = 121.0;
		muzzles[] = {"this"};
		initSpeed = -1.0;
	};
	class Rifle_Base_F;
	class UGL_F;
	class CSW_XM8_base_F: Rifle_Base_F
	{
		magazines[] = {"CSW_XM8_30rnd_Mk318_SOST_mag","CSW_XM8_30rnd_M193_Ball_mag","CSW_XM8_30rnd_M855_FMJ_mag","CSW_XM8_30rnd_M855A1_LFS_mag","CSW_XM8_30rnd_Mk262_SPR_mag","CSW_XM8_30rnd_M995_AP_mag","CSW_XM8_30rnd_M196_Tracer_Red_mag","CSW_XM8_30rnd_M856_Tracer_Red_mag","CSW_XM8_30rnd_XM996_Dim_Tracer_mag","CSW_XM8_30rnd_Subsonic_mag","CSW_XM8_30rnd_M862_PPA_mag","CSW_XM8_30rnd_XM1037_SRTA_mag","CSW_XM8_30rnd_M200_Blank_mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		class CSW_M320: UGL_F
		{
			magazines[] += {"1Rnd_HE_Grenade_shell","CSW_1Rnd_Flechette_Cartridge_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class R3F_Famas_F1: Rifle_Base_F
	{
		class Lance_Grenades: UGL_F
		{
			magazines[] += {"ACE_HuntIR_M203"};
		};
	};
	class CSW_XM8_dmar_black: CSW_XM8_base_F
	{
		magazines[] = {"CSW_XM8_100rnd_Mk318_SOST_Cmag","CSW_XM8_100rnd_M193_Ball_Cmag","CSW_XM8_100rnd_M855_FMJ_Cmag","CSW_XM8_100rnd_M855A1_LFS_Cmag","CSW_XM8_100rnd_Mk262_SPR_Cmag","CSW_XM8_100rnd_M995_AP_Cmag","CSW_XM8_100rnd_M196_Tracer_Red_Cmag","CSW_XM8_100rnd_M856_Tracer_Red_Cmag","CSW_XM8_100rnd_XM996_Dim_Tracer_Cmag","CSW_XM8_100rnd_Subsonic_Cmag","CSW_XM8_100rnd_M862_PPA_Cmag","CSW_XM8_100rnd_XM1037_SRTA_Cmag","CSW_XM8_100rnd_M200_Blank_Cmag","CSW_XM8_30rnd_Mk318_SOST_mag","CSW_XM8_30rnd_M193_Ball_mag","CSW_XM8_30rnd_M855_FMJ_mag","CSW_XM8_30rnd_M855A1_LFS_mag","CSW_XM8_30rnd_Mk262_SPR_mag","CSW_XM8_30rnd_M995_AP_mag","CSW_XM8_30rnd_M196_Tracer_Red_mag","CSW_XM8_30rnd_M856_Tracer_Red_mag","CSW_XM8_30rnd_XM996_Dim_Tracer_mag","CSW_XM8_30rnd_Subsonic_mag","CSW_XM8_30rnd_M862_PPA_mag","CSW_XM8_30rnd_XM1037_SRTA_mag","CSW_XM8_30rnd_M200_Blank_mag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_green","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
	};
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		magazines[] += {"hlc_5rnd_300WM_FMJ_AWM","hlc_5rnd_300WM_mk248_AWM","hlc_5rnd_300WM_BTSP_AWM","hlc_5rnd_300WM_AP_AWM","hlc_5rnd_300WM_SBT_AWM","hlc_5rnd_300WM_T_AWM"};
	};
	class hlc_AWC_base: Rifle_Base_F
	{
		magazines[] += {"rhsusf_5Rnd_300winmag_xm2010"};
	};
	class mk20_base_F: Rifle_Base_F
	{
		magazines[] += {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		magazines[] += {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		magazines[] += {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		magazines[] += {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		magazines[] += {"rhs_mag_30Rnd_556x45_Mk318_Stanag","rhs_mag_30Rnd_556x45_Mk262_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green","rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow","rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	
	class BWA3_G36: Rifle_Base_F
	{
		ACE_overheating_dispersion[] = {0,0.001,0.003,0.005};
		ACE_overheating_slowdownFactor[] = {1,1,1,0.9};
		ACE_overheating_jamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 480;
		class AG40: UGL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class BWA3_G36K: BWA3_G36
	{
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 318;
	};
	class BWA3_G36_LMG: BWA3_G36
	{
		ACE_overheating_dispersion[] = {0,0.001,0.002,0.004};
	};
	class srifle_EBR_F;
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		magazines[] += {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_barrier_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_T_M14","hlc_20Rnd_762x51_Mdim_M14","hlc_20Rnd_762x51_Tdim_M14","hlc_50Rnd_762x51_B_M14","hlc_20Rnd_762x51_S_M14","hlc_50Rnd_762x51_MDIM_M14"};
	};
	class hlc_M14_base: Rifle_Base_F
	{
		magazines[] += {"rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
	};
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
		magazines[] += {"hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
	};
	class hlc_M60e4_base: Rifle_Base_F
	{
		magazines[] += {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"};
	};

	class R3F_Famas_F1: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 10.6;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 488.0;
		muzzles[] = {"this"};
	};
	class R3F_Famas_F1_M203: R3F_Famas_F1
	{
		muzzles[] = {"this","Lance_Grenades"};
	};
	class R3F_Famas_surb: R3F_Famas_F1
	{
		ACE_RailHeightAboveBore = 5.4;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 450.0;
	};
	class R3F_Famas_surb_M203: R3F_Famas_surb
	{
		muzzles[] = {"this","Lance_Grenades"};
	};
	class R3F_Famas_G2: R3F_Famas_F1
	{
		ACE_RailHeightAboveBore = 10.6;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 488.0;
	};
	class R3F_Famas_G2_M203: R3F_Famas_G2
	{
		muzzles[] = {"this","Lance_Grenades"};
	};
	class R3F_Famas_felin: R3F_Famas_G2
	{
		ACE_RailHeightAboveBore = 5.4;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 450.0;
	};
	class R3F_FRF2: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 2.2;
		ACE_barrelTwist = 294.6;
		ACE_barrelLength = 650.0;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00029;
		};
		muzzles[] = {"this"};
	};
	class R3F_PGM_Hecate_II: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 2.0;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 700.0;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00029;
		};
		muzzles[] = {"this"};
	};
	class R3F_M107: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.6;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 736.6;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00029;
		};
		muzzles[] = {"this"};
	};
	class R3F_TAC50: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.2;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 736.6;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00029;
		};
		muzzles[] = {"this"};
	};
	class R3F_Minimi: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 4.0;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 347.98;
		muzzles[] = {"this"};
		initSpeed = 915;
	};
	class R3F_Minimi_762: R3F_Minimi
	{
		ACE_RailHeightAboveBore = 4.0;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 502.92;
		initSpeed = 820;
	};
	class R3F_SIG551: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 4.2;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 363.0;
		muzzles[] = {"this"};
	};
	class R3F_HK417M: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.4;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 406.0;
		muzzles[] = {"this"};
	};
	class R3F_HK417S_HG: R3F_HK417M
	{
		ACE_RailHeightAboveBore = 3.4;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 305.0;
	};
	class R3F_HK417M_HG: R3F_HK417M
	{
	};
	class R3F_HK417L: R3F_HK417M
	{
		ACE_RailHeightAboveBore = 3.4;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 508.0;
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00029;
		};
	};
	class R3F_HK417S_HG_DES: R3F_HK417S_HG
	{
	};
	class R3F_HK417M_DES: R3F_HK417M
	{
	};
	class R3F_HK417M_HG_DES: R3F_HK417M_HG
	{
	};
	class R3F_HK417L_DES: R3F_HK417L
	{
	};
	class R3F_HK416M: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 3.4;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		muzzles[] = {"this"};
	};
	class R3F_HK416M_DES: R3F_HK416M
	{
	};
	
	class R3F_HK416M_M203: R3F_HK416M
	{
		muzzles[] = {"this","Lance_Grenades"};
	};
	class R3F_HK416M_M203_DES: R3F_HK416M_M203
	{
	};
	class R3F_HK416M_HG: R3F_HK416M
	{
	};
	class R3F_HK416M_HG_DES: R3F_HK416M_HG
	{
	};
	
	class R3F_HK416S_HG: R3F_HK416M_HG
	{
		ACE_RailHeightAboveBore = 3.4;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 279.4;
	};
	class R3F_HK416S_HG_DES: R3F_HK416S_HG
	{
	};
	
	class R3F_MP5SD: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 4.5;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 144.78;
		muzzles[] = {"this"};
	};
	class R3F_MP5A5: R3F_MP5SD
	{
		ACE_RailHeightAboveBore = 4.5;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 226.06;
		muzzles[] = {"this"};
	};
	class R3F_M4S90: Rifle_Base_F
	{
		ACE_RailHeightAboveBore = 2.2;
		ACE_twistDirection = 0;
		ACE_barrelTwist = 0;
		ACE_barrelLength = 144.78;
	};
	class Rifle_Long_Base_F;
	class BWA3_G28_Standard: Rifle_Long_Base_F
	{
		ACE_overheating_dispersion[] = {0,0.001,0.002,0.004};
		ACE_overheating_slowdownFactor[] = {1,1,1,0.9};
		ACE_overheating_jamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 421;
		ACE_gunbag_allowGunbag = 1;
	};
	class BWA3_G28_Assault: BWA3_G28_Standard
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 421;
		ACE_gunbag_allowGunbag = 0;
	};
	class BWA3_G27: BWA3_G28_Standard
	{
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 406;
		ACE_gunbag_allowGunbag = 0;
	};
	class BWA3_G27_AG: BWA3_G27
	{
		class AG40: UGL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","ACE_HuntIR_M203"};
		};
	};
	class BWA3_MG4: Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion[] = {0,0.001,0.002,0.004};
		ACE_overheating_slowdownFactor[] = {1,1,1,0.9};
		ACE_overheating_jamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 480;
	};
	class BWA3_MG5: Rifle_Long_Base_F
	{
		ACE_overheating_allowSwapBarrel = 1;
		ACE_overheating_dispersion[] = {0,-0.001,0.001,0.003};
		ACE_overheating_slowdownFactor[] = {1,1,1,0.9};
		ACE_overheating_jamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 550;
	};
	class BWA3_G82: Rifle_Long_Base_F
	{
		ACE_overheating_dispersion[] = {0,-0.001,0.001,0.003};
		ACE_overheating_slowdownFactor[] = {1,1,1,0.9};
		ACE_overheating_jamChance[] = {0,0.0003,0.0015,0.0075};
		ACE_barrelTwist = 381;
		ACE_barrelLength = 736.7;
		ACE_gunbag_allowGunbag = 1;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class BWA3_Pzf3: Launcher_Base_F
	{
		ACE_overpressure_angle = 60;
		ACE_overpressure_range = 10;
		ACE_overpressure_damage = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 320;
		};
	};
	class BWA3_Pzf3_Used: BWA3_Pzf3
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
		};
	};
	class BWA3_RGW90: Launcher_Base_F
	{
		ACE_overpressure_angle = 60;
		ACE_overpressure_range = 6;
		ACE_overpressure_damage = 0.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 198;
		};
	};
	class BWA3_RGW90_Used: BWA3_RGW90
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 58;
		};
	};
	class BWA3_Fliegerfaust: Launcher_Base_F
	{
		ACE_overpressure_angle = 40;
		ACE_overpressure_range = 5;
		ACE_overpressure_damage = 0.5;
	};
	class R3F_AT4CS: Launcher_Base_F
	{
	};
	class R3F_STINGER: Launcher_Base_F
	{
	};
	class UK3CB_BAF_AT4_CS_AP_Launcher: Launcher_Base_F
	{
	};
	class UK3CB_BAF_AT4_CS_AT_Launcher: Launcher_Base_F
	{
	};
	class UK3CB_BAF_NLAW_Launcher: Launcher_Base_F
	{
	};
	class rhs_weap_fgm148: Launcher_Base_F
	{
	};
	class BWA3_CarlGustaf: Launcher_Base_F
	{
		ACE_overpressure_angle = 60;
		ACE_overpressure_range = 6;
		ACE_overpressure_damage = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 187;
		};
	};
	class BWA3_CrewmanKSK_Fleck;
	class BWA3_CrewmanKSK_Fleck_Headset: BWA3_CrewmanKSK_Fleck
	{
		ace_hearing_protection = 1;
		ace_hearing_lowerVolume = 0.8;
	};
	class ItemCore;
	class BWA3_Knighthelm: ItemCore
	{
		ace_hearing_protection = 0.85;
		ace_hearing_lowerVolume = 0.75;
	};
	class BWA3_acc_LLM01_irlaser: ItemCore
	{
		BWA3_nextModeClass = "BWA3_acc_LLM01_laser";
	};
	class BWA3_acc_LLM01_flash: BWA3_acc_LLM01_irlaser
	{
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser";
	};
	class BWA3_acc_LLM01_laser: BWA3_acc_LLM01_irlaser
	{
		ACE_laserpointer = 1;
		BWA3_nextModeClass = "BWA3_acc_LLM01_flash";
		scope = 1;
	};
	class BWA3_acc_LLM01_irlaser_underbarrel: BWA3_acc_LLM01_irlaser
	{
		BWA3_nextModeClass = "BWA3_acc_LLM01_flash_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_LLM01_flash_underbarrel: BWA3_acc_LLM01_flash
	{
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_LLM01_laser_underbarrel: BWA3_acc_LLM01_laser
	{
		BWA3_nextModeClass = "BWA3_acc_LLM01_irlaser_underbarrel";
		model = "\bwa3_attachments\bwa3_llm01_underbarrel.p3d";
	};
	class BWA3_acc_VarioRay_irlaser: ItemCore
	{
		BWA3_nextModeClass = "BWA3_acc_VarioRay_laser";
	};
	class BWA3_acc_VarioRay_flash: BWA3_acc_VarioRay_irlaser
	{
		BWA3_nextModeClass = "BWA3_acc_VarioRay_irlaser";
	};
	class BWA3_acc_VarioRay_laser: BWA3_acc_VarioRay_irlaser
	{
		ACE_laserpointer = 1;
		BWA3_nextModeClass = "BWA3_acc_VarioRay_flash";
		scope = 1;
	};
	class InventoryOpticsItem_Base_F;
	class R3F_AIMPOINT: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.0;
	};
	class R3F_EOTECH: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.8;
	};
	class R3F_J4: ItemCore
	{
		ACE_ScopeHeightAboveRail = 3.0;
		ACE_ScopeAdjust_Vertical[] = {-8,8};
		ACE_ScopeAdjust_Horizontal[] = {-8,8};
		ACE_ScopeAdjust_VerticalIncrement = 0.2;
		ACE_ScopeAdjust_HorizontalIncrement = 0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class J4
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_FELIN: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.2;
	};
	class R3F_FELIN_FRF2: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.0;
	};
	class R3F_J8: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.4;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class J8
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_J8_MILDOT: R3F_J8
	{
		ACE_ScopeHeightAboveRail = 4.4;
		ACE_ScopeAdjust_Vertical[] = {-2,18};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class J8_MILDOT
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_J10: ItemCore
	{
		ACE_ScopeZeroRange = 1400;
		ACE_ScopeHeightAboveRail = 4.4;
		ACE_ScopeAdjust_Vertical[] = {-10,10};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class J10
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_J10_MILDOT: R3F_J10
	{
		ACE_ScopeZeroRange = 100;
		ACE_ScopeHeightAboveRail = 4.4;
		ACE_ScopeAdjust_Vertical[] = {-2,18};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class J10_MILDOT
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_ZEISS: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.6;
		ACE_ScopeAdjust_Vertical[] = {0,23};
		ACE_ScopeAdjust_Horizontal[] = {-7,7};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class ZEISS_MILDOT
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_NF: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.2;
		ACE_ScopeAdjust_Vertical[] = {0,30};
		ACE_ScopeAdjust_Horizontal[] = {-11,11};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NF_MILDOT
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_NF42: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.2;
		ACE_ScopeAdjust_Vertical[] = {0,24};
		ACE_ScopeAdjust_Horizontal[] = {-9,9};
		ACE_ScopeAdjust_VerticalIncrement = 0.1;
		ACE_ScopeAdjust_HorizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class NF42_MILDOT
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class R3F_OB50: ItemCore
	{
		ACE_ScopeHeightAboveRail = 4.0;
	};
	class InventoryMuzzleItem_Base_F;
	class R3F_SILENCIEUX_HK416: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class R3F_SILENCIEUX_HK417: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class R3F_SILENCIEUX_FRF2: ItemCore
	{
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			class MagazineCoef
			{
				initSpeed = 1.0;
			};
			class AmmoCoef
			{
				hit = 1.0;
				visibleFire = 0.5;
				audibleFire = 0.1;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1.0;
				typicalSpeed = 1.0;
				airFriction = 1.0;
			};
			class MuzzleCoef
			{
				dispersionCoef = "0.95f";
				artilleryDispersionCoef = "1.0f";
				fireLightCoef = "0.5f";
				recoilCoef = "0.95f";
				recoilProneCoef = "0.95f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
		};
	};
	class BWA3_optic_ZO4x30: ItemCore
	{
		ACE_scopeadjust_vertical[] = {-10,10};
		ACE_scopeadjust_verticalIncrement = 0.2;
		ACE_scopeadjust_horizontal[] = {-10,10};
		ACE_scopeadjust_horizontalIncrement = 0.2;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {200};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_Shortdot: ItemCore
	{
		ACE_scopeadjust_vertical[] = {-0.1,10.1};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-5.1,5.1};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_20x50: ItemCore
	{
		ACE_scopeadjust_vertical[] = {0,26};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-6,6};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class BWA3_optic_24x72: ItemCore
	{
		ACE_scopeadjust_vertical[] = {0,16};
		ACE_scopeadjust_verticalIncrement = 0.1;
		ACE_scopeadjust_horizontal[] = {-7,7};
		ACE_scopeadjust_horizontalIncrement = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Scope
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
		class optic_dms;
	class HLC_Optic_ZFSG1: optic_dms
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class Uniform_Base;
	class BWA3_Uniform_Helipilot: Uniform_Base
	{
		ACE_GForceCoef = 0.8;
	};
	class RocketPods;
	class BWA3_PARS: RocketPods
	{
		canLock = 2;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class BWA3_200Rnd_556x45: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class BWA3_120Rnd_762x51: CA_Magazine
	{
		ACE_isBelt = 1;
	};
	class R3F_securite_mag: CA_magazine
	{
		scope = 0;
	};
	class R3F_15Rnd_9x19_PAMAS: CA_magazine
	{
		initSpeed = 350;
	};
	class R3F_15Rnd_9x19_HKUSP: CA_magazine
	{
		initSpeed = 350;
	};
	class R3F_30Rnd_9x19_MP5: CA_magazine
	{
		initSpeed = 400;
	};
	class R3F_25Rnd_556x45_FAMAS: CA_magazine
	{
		initSpeed = 960;
	};
	class R3F_25Rnd_556x45_TRACER_FAMAS: R3F_25Rnd_556x45_FAMAS{};
	class R3F_30Rnd_556x45_FAMAS: CA_magazine
	{
		initSpeed = 925;
	};
	class R3F_30Rnd_556x45_TRACER_FAMAS: R3F_30Rnd_556x45_FAMAS{};
	class R3F_30Rnd_556x45_HK416: CA_magazine
	{
		initSpeed = 850;
	};
	class R3F_30Rnd_556x45_TRACER_HK416: R3F_30Rnd_556x45_HK416{};
	class R3F_30Rnd_556x45_SIG551: CA_magazine
	{
		initSpeed = 850;
	};
	class R3F_30Rnd_556x45_TRACER_SIG551: R3F_30Rnd_556x45_SIG551{};
	class R3F_10Rnd_762x51_FRF2: CA_magazine
	{
		initSpeed = 850;
	};
	class R3F_200Rnd_556x45_MINIMI: CA_magazine
	{
		initSpeed = 915;
	};
	class R3F_100Rnd_762x51_MINIMI: CA_magazine
	{
		initSpeed = 820;
	};
	class R3F_20Rnd_762x51_HK417: CA_magazine
	{
		initSpeed = 820;
	};
	class R3F_20Rnd_762x51_TRACER_HK417: R3F_20Rnd_762x51_HK417{};
	class R3F_7Rnd_127x99_PGM: CA_magazine
	{
		initSpeed = 780;
	};
	class R3F_7Rnd_127x99_PEI_PGM: R3F_7Rnd_127x99_PGM
	{
		initSpeed = 780;
	};
	class R3F_10Rnd_127x99_M107: CA_magazine
	{
		initSpeed = 850;
	};
	class R3F_10Rnd_127x99_PEI_M107: R3F_10Rnd_127x99_M107
	{
		initSpeed = 850;
	};
	class R3F_5Rnd_127x99_TAC50: CA_magazine
	{
		initSpeed = 820;
	};
};
class CfgAmmo
{
	class B_556x45_Ball_Tracer_Red;
	class BWA3_B_556x45_Ball: B_556x45_Ball_Tracer_Red
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[] = {210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6};
	};
	class BWA3_B_556x45_Ball_SD: BWA3_B_556x45_Ball
	{
		ACE_ballisticCoefficients[] = {};
		ACE_velocityBoundaries[] = {};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class BWA3_B_556x45_Ball_AP: BWA3_B_556x45_Ball
	{
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.5359235;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.31};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820,865,880};
		ACE_barrelLengths[] = {254,393.7,508};
	};
	class B_762x51_Tracer_Red;
	class BWA3_B_762x51_Ball: B_762x51_Tracer_Red
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254,406.4,508,609.6,660.4};
	};
	class BWA3_B_762x51_Ball_SD: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 34.036;
		ACE_bulletMass = 12.96;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.235};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {305,325,335,340};
		ACE_barrelLengths[] = {406.4,508,609.6,660.4};
	};
	class BWA3_B_762x51_Ball_AP: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 8.229462;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.359};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {875,910,930};
		ACE_barrelLengths[] = {330.2,406.4,508};
	};
	class BWA3_B_762x51_Ball_LR: BWA3_B_762x51_Ball
	{
		ACE_caliber = 7.823;
		ACE_bulletLength = 31.496;
		ACE_bulletMass = 11.34;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.243};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {750,780,790,794};
		ACE_barrelLengths[] = {406.4,508,609.6,660.4};
	};
	class B_127x99_Ball_Tracer_Red;
	class BWA3_B_127x99_Ball: B_127x99_Ball_Tracer_Red
	{
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class BWA3_B_127x99_Ball_SD: BWA3_B_127x99_Ball
	{
		ACE_ballisticCoefficients[] = {};
		ACE_velocityBoundaries[] = {};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class BWA3_B_127x99_Ball_AP: BWA3_B_127x99_Ball
	{
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {900};
		ACE_barrelLengths[] = {736.6};
	};
	class BulletBase;
	class R3F_9x19_Ball: BulletBase
	{
		typicalSpeed = 350;
		airFriction = -0.00201185;
		ACE_caliber = 9.017;
		ACE_bulletLength = 15.494;
		ACE_bulletMass = 8.0352;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.165};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {340,370,400};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
	class R3F_556x45_Ball: BulletBase
	{
		typicalSpeed = 930;
		airFriction = -0.00130094;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21.0,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[] = {210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508.0,609.6};
	};
	class R3F_762x51_Ball: BulletBase
	{
		typicalSpeed = 820;
		airFriction = -0.00103711;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {700,800,820,833,845};
		ACE_barrelLengths[] = {254.0,406.4,508.0,609.6,660.4};
	};
	class R3F_762x51_Ball2: R3F_762x51_Ball
	{
		typicalSpeed = 850;
		airFriction = -0.00103711;
		ACE_caliber = 7.823;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.4608;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {850};
		ACE_barrelLengths[] = {650};
	};
	class R3F_762x51_Minimi_Ball: R3F_762x51_Ball
	{
		airFriction = -0.00103711;
	};
	class R3F_127x99_Ball: BulletBase
	{
		typicalSpeed = 780;
		airFriction = -0.00058679;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {780};
		ACE_barrelLengths[] = {700};
	};
	class R3F_127x99_PEI: R3F_127x99_Ball
	{
		typicalSpeed = 780;
		airFriction = -0.00058679;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {780};
		ACE_barrelLengths[] = {700};
	};
	class R3F_127x99_Ball2: BulletBase
	{
		typicalSpeed = 850;
		airFriction = -0.00058679;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {850};
		ACE_barrelLengths[] = {736.6};
	};
	class R3F_127x99_PEI2: R3F_127x99_Ball2
	{
		typicalSpeed = 850;
		airFriction = -0.00058679;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {850};
		ACE_barrelLengths[] = {736.6};
	};
	class R3F_127x99_Ball3: BulletBase
	{
		typicalSpeed = 820;
		airFriction = -0.00058679;
		ACE_caliber = 12.954;
		ACE_bulletLength = 58.674;
		ACE_bulletMass = 41.9256;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.67};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {736.6};
	};
	class BWA3_B_46x30_Ball: BulletBase
	{
		ACE_caliber = 4.902;
		ACE_bulletLength = 13.005;
		ACE_bulletMass = 2.0088;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_ballisticCoefficients[] = {0.1455};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {680,720,730,740};
		ACE_barrelLengths[] = {101.6,177.8,228.6,304.8};
	};
	class BWA3_B_46x30_Ball_SD: BWA3_B_46x30_Ball
	{
		ACE_ballisticCoefficients[] = {};
		ACE_velocityBoundaries[] = {};
		ACE_muzzleVelocities[] = {};
		ACE_barrelLengths[] = {};
	};
	class GrenadeHand;
	class BWA3_G_DM51A1: GrenadeHand
	{
		ace_frag_metal = 296;
		ace_frag_charge = 180;
		ace_frag_gurney_c = 2930;
		ace_frag_gurney_k = "1/2";
	};
};
class CfgGlasses
{
	class None
	{
		identityTypes[] += {"rds_rockerHair",10};
	};
	class BWA3_G_Combat_Orange: None
	{
		ACE_color[] = {1,0.5,0};
		ACE_tintAmount = 8;
		ACE_resistance = 1;
	};
	class BWA3_G_Combat_Black: None
	{
		ACE_color[] = {0,0,0};
		ACE_tintAmount = 16;
		ACE_resistance = 1;
	};
	class BWA3_G_Combat_Clear: None
	{
		ACE_color[] = {0,0,-1};
		ACE_tintAmount = 8;
		ACE_resistance = 1;
	};
	class G_Balaclava_blk;
	class rds_long_hair_01: G_Balaclava_blk
	{
    scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	};
	class rds_long_hair_02: rds_long_hair_01
	{
    scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	};
	class rds_long_hair_03: rds_long_hair_01
	{
    scope = 1;
	scopeCurator = 1;
	scopeArsenal = 1;
	};
};
class CfgRecoils
{
	class recoil_default;
	class BWA3_recoil_P8: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.0*1","0.2*1","0.3*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.03*1.2";
	};
	class BWA3_recoil_MP7: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","1.0*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G36: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.2*1","0.3*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.01*1.2";
	};
	class BWA3_recoil_G36K: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.8*1","0.3*1","0.3*1"};
		kickBack[] = {"0.02*1.4","0.04*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_G36_LMG: recoil_default
	{
		muzzleOuter[] = {"0.2*0.2","0.6*1","0.3*1","0.2*1"};
		kickBack[] = {"0.01*1.4","0.03*1.4"};
		temporary = "0.005*1.2";
	};
	class BWA3_recoil_G28: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.4*1","0.6*1","0.4*1"};
		kickBack[] = {"0.03*1.4","0.07*1.4"};
		temporary = "0.01*1.2";
	};
	class BWA3_recoil_G27: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","1.6*1","0.6*1","0.4*1"};
		kickBack[] = {"0.04*1.4","0.08*1.4"};
		temporary = "0.015*1.2";
	};
	class BWA3_recoil_MG4: recoil_default
	{
		muzzleOuter[] = {"0.4*0.2","0.6*1","0.6*1","0.2*1"};
		kickBack[] = {"0.03*1.4","0.06*1.4"};
		temporary = "0.005*1.2";
	};
	class BWA3_recoil_MG5: recoil_default{};
	class BWA3_recoil_G82: recoil_default
	{
		muzzleOuter[] = {"1.4*0.2","3.5*1","0.7*1","0.8*1"};
		kickBack[] = {"0.1*1.4","0.12*1.4"};
		temporary = "0.025*1.2";
	};
};