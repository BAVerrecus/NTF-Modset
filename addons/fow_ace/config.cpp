#include "script_component.hpp"

class CfgPatches
{
	class bav_fow_ace
	{
		author="B.A.Verrecus";
		name="FoW ACE Compat";
		url="http://www.nato-taskforce.com";
		requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"fow_h_us_flight_helmet",
			"fow_h_ger_headset",
			"fow_h_hi_beret_headset",
			"fow_h_ija_flight_helmet",
			"fow_h_uk_beret_rtr_headset",
			"fow_h_uk_beret_rha_headset"
		};
		magazines[]={};
		ammo[]={};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class CfgWeapons
{
	class Default;
	class ItemCore;
	class fow_h_base;
	class fow_h_ger_feldmutze;
	class fow_h_uk_beret_rtr;
	class fow_h_us_flight_helmet: fow_h_base
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
	class fow_h_hi_beret_headset: fow_h_base
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
	class fow_h_ija_flight_helmet: fow_h_base
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
	class fow_h_ger_headset: fow_h_ger_feldmutze
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
	class fow_h_uk_beret_rtr_headset: fow_h_uk_beret_rtr
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
	class fow_h_uk_beret_rha_headset: fow_h_uk_beret_rtr_headset
	{
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.69999999;
	};
};
class cfgMods
{
	author="B.A.Verrecus";
	timepacked="1525019333";
};
