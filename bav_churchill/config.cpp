class CfgPatches
{
	class bav_churchill
	{
		author="7Y Loki";
		name="7Y Churchill";
		url="";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"7Y_weapons",
			"A3_Sounds_F_Vehicles",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Weapons_F",
			"A3_Data_F",
			"7Y_churchill"
		};
		units[]=
		{
			"churchill_mkIII"
		};
		weapons[]={};
	};
};
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
        class AcreIntercoms 
		{
            class Intercom_1 
			{
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 1;
                masterPositions[] = {"gunner"};
                connectedByDefault = 1;
            };
        };
		acre_hasInfantryPhone = 1; // 1 - enabled, 0 - disabled
		acre_infantryPhoneDisableRinging = 0;
//		acre_infantryPhonePosition[] = {-1, 0, 0};
		acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"intercom_1"};
		acreAttenuation = 0.6;
         class AcreRacks {
            class Rack_1 {
                displayName = Dash; // Name is displayed in the interaction menu.
                shortName = Dash;
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver", "commander", "gunner"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";
                isRadioRemovable = 0;
                intercom[] = {"intercom_1"};
            };
        };	
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
	class fow_v_m4a2: Tank_F
	{
        class AcreIntercoms 
		{
            class Intercom_1 
			{
                displayName = "Crew intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {};
                numLimitedPositions = 1;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };
		acre_hasInfantryPhone = 1; // 1 - enabled, 0 - disabled
		acre_infantryPhoneDisableRinging = 0;
//        acre_infantryPhonePosition[] = {1.1, 4.86, 1};
		acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"intercom_1"};
		acreAttenuation = 0.6;
		
        class AcreRacks {
            class Rack_1 {
                displayName = DASH; // Name is displayed in the interaction menu.
                shortName = DASH;
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"crew"}; // Who has access "inside" - anyone inside, "external" - provides access upto 10m away, "driver", "gunner", "copilot", "commander"
                disabledPositions[] = {"driver","gunner","commander", [2]};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC77";
                isRadioRemovable = 0;
                intercom[] = {"intercom_1"};
            };
        };
	};
};
