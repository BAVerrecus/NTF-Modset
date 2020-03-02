#include "script_component.hpp"

class CfgPatches
{
	class bav_churchill
	{
		author="7Y Loki";
		name="7Y Churchill";
		url="http://7panzerdivision.wordpress.com";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"7Y_weapons",
			"A3_Sounds_F_Vehicles",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Weapons_F",
			"A3_Data_F",
			"acre_sys_core",
			"7Y_churchill"
		};
		units[]=
		{
			"churchill_mkIII"
		};
		weapons[]={};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class DefaultVehicleSystemsDisplayManagerLeft
{
};
class DefaultVehicleSystemsDisplayManagerRight
{
};
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
		class Eventhandlers;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class churchill_base_F: Tank_F
	{

class Components
{
	class MinimapDisplay
	{
		componentType = "EmptyDisplayComponent";
	};
	
	class CrewDisplay
	{
		componentType = "EmptyDisplayComponent";
	};
	
	class EmptyDisplay
	{
		componentType = "EmptyDisplayComponent";
	};
};
	};
	class churchill_mkIII: churchill_base_F
	{
		displayName="Churchill MkIII";
		faction="fow_uk";
		crew="fow_s_uk_crewman";
		typicalCargo[]=
		{
			"fow_s_uk_crewman"
		};
	};
};
