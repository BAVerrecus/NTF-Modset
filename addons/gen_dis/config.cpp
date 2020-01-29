////////////////////////////////////////////////////////////////////
//DeRap: bwa3_comp_ace\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Oct 24 19:15:22 2017 : 'file' last modified on Wed Mar 29 22:42:10 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "script_component.hpp"

class CfgPatches
{
	class bav_gen_dis
	{
		name = "BAV_General_compat";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_weapons_f","A3_weapons_f_exp","ace_common", "bav_gen_comp"};
		versionAr[] = {1,0,0};
		author = "B.A.Verrecus";
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class CfgVehicles
{
	class All{};
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class Air: AllVehicles{};
	class LandVehicle: Land{};
	class Tank: LandVehicle{};
	class Tank_F: Tank{};
	class Plane: Air{};
	class Plane_Base_F: Plane{};
	class Plane_CAS_01_base_F: Plane_Base_F{};
	class Plane_Fighter_03_base_F: Plane_Base_F{};

};

class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol{};
	class Rifle_Base_F;
	class UGL_F;
	class Launcher;
	class Launcher_Base_F: Launcher{};
	
	class BWA3_Fliegerfaust: Launcher_Base_F
	{
		scope = 1;
	};
	class R3F_AT4CS: Launcher_Base_F
	{
		scope = 1;
	};
	class R3F_STINGER: Launcher_Base_F
	{
		scope = 1;
	};
	class UK3CB_BAF_AT4_CS_AP_Launcher: Launcher_Base_F
	{
		scope = 1;
	};
	class UK3CB_BAF_AT4_CS_AT_Launcher: Launcher_Base_F
	{
		scope = 1;
	};
	class UK3CB_BAF_NLAW_Launcher: Launcher_Base_F
	{
		scope = 1;
	};
	class rhs_weap_fgm148: Launcher_Base_F
	{
		scope = 1;
	};
	class BWA3_CarlGustaf: Launcher_Base_F
	{
		scope = 1;
	};
	
	
};