
#define _ARMA_
#include "script_component.hpp"

class CfgPatches
{
	class bav_gen_comp
	{
		name = "BAV_General_compat";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_weapons_f","A3_weapons_f_exp","ace_common","rds_a2port_cman"};
		versionAr[] = {1,0,0};
		author = "B.A.Verrecus";
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
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

	class BWA3_Tiger_base: Helicopter_Base_F
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position = "[0,1.5,0]";
			};
		};
		LESH_canBeTowed = 1;
		LESH_towFromFront = 0;
		LESH_AxisOffsetTarget[] = {0,-8,-1};
		LESH_WheelOffset[] = {0,1.6};
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


};

class CfgGlasses
{
	class None
	{
		identityTypes[] += {"rds_rockerHair",10};
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
