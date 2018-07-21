////////////////////////////////////////////////////////////////////
//DeRap: bwa3_comp_ace\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Tue Oct 24 19:15:22 2017 : 'file' last modified on Wed Mar 29 22:42:10 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class bav_gen_dis
	{
		name = "BAV_General_compat";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_weapons_f","A3_weapons_f_exp","ace_common", "FIR_A10A_F","FIR_A10C_F","FIR_AV8B_F","FIR_F16_F","FIR_F16D_F","FIR_F16_RSSpecial_F","FLAN_EA18G_F","r3f_armes_c","r3f_armes","r3f_acc","bav_gen_comp"};
		versionAr[] = {1,0,0};
		author = "B.A.Verrecus";
	};
};
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

	class FIR_A10A_Base: Plane_CAS_01_base_F
	{
		scope =1;
	};
	class FIR_A10A: FIR_A10A_Base
	{
		scope =1;
	};
	class FIR_A10A_Standard: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_74fs: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_47fs: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_MD: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_Blank: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_Camo1: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10A_Camo2: FIR_A10A
	{
		scope =1;
	};
	class FIR_A10C_Base: Plane_CAS_01_base_F
	{
		scope =1;
	};
	class FIR_A10C: FIR_A10C_Base
	{
		scope =1;
	};
	class FIR_A10C_MD: FIR_A10C
	{
		scope =1;
	};
	class FIR_A10C_FT: FIR_A10C
	{
		scope =1;
	};
	class FIR_A10C_FR: FIR_A10C
	{
		scope =1;
	};
	class FIR_A10C_Blank: FIR_A10C
	{
		scope =1;
	};
	class FIR_A10C_OS: FIR_A10C
	{
		scope =1;
	};
	class FIR_A10C_Standard: FIR_A10C
	{
		scope =1;
	};
	class FIR_AV8B_Base: Plane_Fighter_03_base_F
	{
		scope=1;
	};
	class FIR_AV8B: FIR_AV8B_Base
	{
		scope=1;
	};
	class FIR_AV8B_Standard: FIR_AV8B_Base
	{
		scope=1;
	};
	class FIR_AV8B_VMA231_02: FIR_AV8B
	{
		scope=1;
	};
	class FIR_AV8B_VMA211_OLD: FIR_AV8B
	{
		scope=1;
	};
	class FIR_AV8B_VMA223: FIR_AV8B
	{
		scope=1;
	};
	class FIR_AV8B_VMA223_OLD: FIR_AV8B
	{
		scope=1;
	};
	class FIR_AV8B_NA_Base: Plane_Fighter_03_base_F	
	{
		scope=1;
	};
	class FIR_AV8B_NA: FIR_AV8B_NA_Base
	{
		scope=1;
	};
	class FIR_AV8B_NA_Standard: FIR_AV8B_NA
	{
		scope=1;
	};
	class FIR_AV8B_NA_VMA211: FIR_AV8B_NA
	{
		scope=1;
	};
	class FIR_AV8B_GR7_Base: Plane_Fighter_03_base_F
	{
		scope=1;
	};
	class FIR_AV8B_GR9A: FIR_AV8B_GR7_Base
	{
		scope=1;
	};
	class FIR_AV8B_GR9A_Standard: FIR_AV8B_GR7_Base
	{
		scope=1;
	};
	class FIR_AV8B_GR9A_2: FIR_AV8B_GR9A
	{
		scope=1;
	};
	class FIR_AV8B_GR7A_Lucy: FIR_AV8B_GR9A
	{
		scope=1;
	};
	class FIR_F16_Base: Plane_Fighter_03_base_F
	{
		scope=1;
	};
	class FIR_F16C: FIR_F16_Base
	{
		scope=1;
	};
	class FIR_F16C_Standard: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_AV: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_ROKAF: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_ROKAF_B32: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_WW: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Polish: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_HG: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_WP: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Osan: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Makos: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Blank: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Ag_arctic: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Ag_flanker: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Ag_lizard: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_ENEMY_TYPE_A: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_CFTTEST: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_Polish_CFT: FIR_F16C_CFTTEST
	{
		scope=1;
	};
	class FIR_F16C_RS_526TFS: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_RS_512TFS: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_RS_400: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_RS_86TFW: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_RS_86TFW2: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16C_RS_86WG: FIR_F16C
	{
		scope=1;
	};
	class FIR_F16D_Base: Plane_Fighter_03_base_F
	{
		scope=1;
	};
	class FIR_F16D: FIR_F16D_Base
	{
		scope=1;
	};
	class FIR_F16D_WP: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_Blank: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_Standard: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_AV: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_ROKAF: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_CFTTEST: FIR_F16D
	{
		scope=1;
	};
	class FIR_F16D_Polish_CFT: FIR_F16D_CFTTEST
	{
		scope=1;
	};
	class FLAN_EA18G_Base: Plane_Fighter_03_base_F
	{
		scope=1;
	};
	class FLAN_EA18G: FLAN_EA18G_Base
	{
		scope=1;
	};
	class EA18G_Standard: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_137CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_137LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_139CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_139LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_141CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_141LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_142CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_142LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_132LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_RAAF: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_129CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_129LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_209CAG: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_209LOW: FLAN_EA18G
	{
		scope=1;
	};
	class EA18G_VAQ131: FLAN_EA18G
	{
		scope=1;
	};
	class FIR_EA18G_VAQ130: FLAN_EA18G
	{
		scope=1;
	};
	class FIR_EA18G_VAQ136: FLAN_EA18G
	{
		scope=1;
	};
	class FIR_EA18G_VAQ138: FLAN_EA18G
	{
		scope=1;
	};
	class FIR_EA18G_NA: FLAN_EA18G
	{
		scope=1;
	};
};

class CfgWeapons
{
	class Pistol;
	class Pistol_Base_F: Pistol{};
	class Rifle_Base_F;
	class UGL_F;
	class Launcher;
	class Launcher_Base_F: Launcher{};
	
	class R3F_HK417M: Rifle_Base_F
	{
		scope = 1;	
	};
	class R3F_HK417S_HG: R3F_HK417M
	{
		scope = 1;
	};
	class R3F_HK417M_HG: R3F_HK417M
	{
		scope = 1;
	};
	class R3F_HK417L: R3F_HK417M
	{
		scope = 1;
	};
	class R3F_HK417S_HG_DES: R3F_HK417S_HG
	{
		scope = 1;
	};
	class R3F_HK417M_DES: R3F_HK417M
	{
		scope = 1;
	};
	class R3F_HK417M_HG_DES: R3F_HK417M_HG
	{
		scope = 1;
	};
	class R3F_HK417L_DES: R3F_HK417L
	{
		scope = 1;
	};
	class R3F_HK416M: Rifle_Base_F
	{
		scope = 1;
	};
	class R3F_HK416M_DES: R3F_HK416M
	{
		scope = 1;
	};
	class R3F_HK416M_M203: R3F_HK416M
	{
		scope = 1;
	};	
	class R3F_HK416M_M203_DES: R3F_HK416M_M203
	{
		scope = 1;
	};
	class R3F_HK416M_HG: R3F_HK416M
	{
		scope = 1;		
	};
	class R3F_HK416M_HG_DES: R3F_HK416M_HG
	{
		scope = 1;		
	};
	class R3F_HK416S_HG: R3F_HK416M_HG
	{
		scope = 1;
	};
	class R3F_HK416S_HG_DES: R3F_HK416S_HG
	{
		scope = 1;	
	};
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