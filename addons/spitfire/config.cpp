#include "script_component.hpp"

class CfgPatches
{
	class bav_spitfire
	{
		author="7Y Loki";
		name="7Y spitfire";
		url="http://7panzerdivision.wordpress.com";
		units[]=
		{
			"spitfire_v",
			"spitfire_v_D",
			"spitfire_v_M",
			"spitfire_v_G"
		};
		weapons[]={};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F_Beta",
			"A3_Air_F_Gamma_Plane_Fighter_03",
			"A3_Sounds_F",
			"A3_Sounds_F_EPC",
			"A3_Sounds_F_Vehicles",
			"7Y_Decals",
			"A3_Data_F",
			"7y_spitfire"
		};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		spity_pilot="spity_pilot";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class spity_Pilot: Crew
		{
			file="\7y_spitfire\Data\Anim\spity_pilot.rtm";
			interpolateTo[]=
			{
				"KIA_spity_Pilot",
				1
			};
		};
		class KIA_spity_Pilot: DefaultDie
		{
			actions="DeadActions";
			file="\A3\Air_F_Gamma\Plane_Fighter_03\Data\Anim\Plane_Fighter_03_smrt.rtm";
			speed=1;
			looped=0;
			terminal=1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
	};
};
class Eventhandlers;
class DefaultVehicleSystemsDisplayManagerLeft
{
};
class DefaultVehicleSystemsDisplayManagerRight
{
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class AnimationSources;
		class Components;	
	};
	class Spitfire_Base_F: Plane
	{
		class Turrets;
		class ViewPilot;
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};
	class Spitfire_01_base_F: Spitfire_Base_F
	{
		crew="fow_s_us_pilot_green";
		getinAction="Pilot_Plane_Civil_01_Enter";
		getoutaction="Pilot_Plane_Civil_01_Exit";
		acre_hasInfantryPhone = 0;
		acreAttenuation = 0.6;
		insideSoundCoef = 0.0316228;
        class AcreIntercoms 
		{
        };		
		class AcreRacks 
		{
            class Rack_1 
			{
                displayName = "Dash";
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"driver"}; 
                disabledPositions[] = {};
                defaultComponents[] = {};             
                mountedRadio = "ACRE_PRC77";                    
                isRadioRemovable = 0;                 // Radio can be removed
                intercom[] = {};                      // Radio not wired to any intercom. All units in intercom can receive/send transmittions (ACE3 interaction menu) but they cannot manipulate the radio (GUI interface)
            };
		};	
		
	class Components : Components                   
    {
        class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
        {
componentType = "VehicleSystemsDisplayManager"; //mandatory
x = (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40));
y = (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
left = 1;
forcedDisplay = "EmptyDisplay";

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
        class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
        {
x = ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)));
left = 0;
right = 1;
forcedDisplay = "EmptyDisplay";

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
    };
	};
	class spitfire_v: Spitfire_01_base_F
	{
		faction="fow_uk";
		vehicleClass="RAF";
		crew="fow_s_us_pilot_green";
		acreAttenuation = 0.8;
	};
	class spitfire_v_M: Spitfire_01_base_F
	{
		side=2;
		faction="fow_uk";
		vehicleClass="RAF";
		crew="fow_s_us_pilot_green";
		acreAttenuation = 0.8;
	};
	class spitfire_v_G: Spitfire_01_base_F
	{
		faction="fow_uk";
		vehicleClass="RAF";
		crew="fow_s_us_pilot_green";
		acreAttenuation = 0.8;
	};
	class spitfire_v_D: Spitfire_01_base_F
	{
		faction="fow_uk";
		vehicleClass="RAF";
		crew="fow_s_us_pilot_green";
		acreAttenuation = 0.8;
	};

};
