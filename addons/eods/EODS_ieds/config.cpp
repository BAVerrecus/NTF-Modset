////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.45
//'now' is Thu May 21 11:11:27 2015 : 'file' last modified on Thu May 21 11:11:27 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#include "script_component.hpp"

//Class eods_ieds : config.bin{
class CfgPatches
{
	class EODS_ieds_main
	{
		units[] = {
		"EODS_ied01_armed","EODS_ied02_armed","EODS_ied03_armed","EODS_ied04_armed","EODS_ied05_armed","EODS_ied06_armed","EODS_ied07_armed","EODS_Fake_01","EODS_ied01","EODS_ied02","EODS_ied03","EODS_ied04","EODS_ied05","EODS_ied06","EODS_ied07","EODS_tierra01_ied01","EODS_tierra02_ied01","EODS_tierra01_ied02","EODS_tierra02_ied02","EODS_tierra01_ied03","EODS_tierra02_ied03","EODS_tierra01_ied04","EODS_tierra02_ied04",
		"EODS_IED_HIDDEN_IN_OBJECT","EODS_IED_CELLPHONE_MODULE","EODS_IED_HIDDEN_MODULE","EODS_IED_CADENA_MODULE","EODS_IED_ARMAR_MODULE","EODS_Uxo_1","EODS_122mm_USSR_IED","EODS_Water_Container_IED","EODS_FuelCan_IED","EODS_122mm_USSR_IED_PP","EODS_ied_B_PressurePlate","EODS_FertilizerBag","EODS_FertilizerBag2_Pile","EODS_FertilizerBag3_Pile","EODS_FertilizerBag_2And3_Pile","EODS_CocaCan","EODS_Bullet_Case_Detonator","EODS_wire_spool","EODS_Water_Container","EODS_Water_Container2"};

		weapons[] = {"EODS_cellphone_02","EODS_inventario_ied_01","EODS_inventario_ied_02","EODS_inventario_ied_03","EODS_inventario_ied_04","EODS_inventario_ied_05","EODS_inventario_ied_06","EODS_inventario_ied_07","EODS_Uxo_01_Inv","EODS_inventario_ied_B_PressurePlate","EODS_inventario_122mm_USSR_IED","EODS_inventario_Water_Container_IED","EODS_inventario_FuelCan_IED","EODS_inventario_122mm_USSR_IED_PP","EODS_IED_122mm_Range_Magazine"};
		requiredVersion = 1;
		requiredAddons[] = {"CBA_XEH","CBA_MAIN","A3_UI_F"};
		versionDesc = "[EODS] 0.0.1";
		version = "0.0.1";
		magazines[] = {};
		ammo[] = {};
	};
};
#include "CfgFunctions.hpp"
#include "CfgModels.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgSounds.hpp"
#include "UI.hpp"

class CfgFactionClasses
{
	class EODS_ieds_modules
	{
		displayName = "EODS";
		priority = 5000;
		side = 7;
	};
};
class CfgVehicleClasses
{
	class EODS_ied_class
	{
		displayName = "EODS IEDs";
	};
};

class WeaponSlotsInfo;
class ItemInfo;
class SlotInfo;
class CowsSlot;
class PointerSlot;


//};
