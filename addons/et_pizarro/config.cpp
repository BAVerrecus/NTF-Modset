#include "script_component.hpp"

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
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
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

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						minTurn=-360;
						maxTurn=360;
					};
				};
			};
		};
	};
};