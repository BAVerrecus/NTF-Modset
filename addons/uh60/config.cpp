#include "script_component.hpp"

class CfgPatches
{
	class bav_uh60
	{
		units[]=
		{
			"bav_UH60nav_blue",
			"bav_UH60nav_blue_ar",
			"bav_UH60nav_black_camo",
			"bav_UH60nav_black_camo_ar",
			"bav_UH60nav_black",
			"bav_UH60nav_black_ar",
			"bav_UH60stalk_camo",
			"bav_UH60stalk_camo_ar",
			"bav_UH60stalk",
			"bav_UH60stalk_ar"
			
		};
		weapons[]={};
		requiredVersion=1.5599999;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Sounds_F",
			"A3_Weapons_F_beta",
			"A3Data",
			"A3_Data_F",
			"RHS_US_A2_AirImport"
		};
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateActiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitHull;
			class HitEngine;
			class HitAvionics;
		};
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitMissiles;
			class HitHull;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
		};
		class AnimationSources;
		class Eventhandlers;
		class CargoTurret;
		class ViewOptics;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
		class Sounds;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
			class CargoTurret_04;
			class MainTurret;
			class RightDoorGun;
			
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class Reflectors
		{
			class Right;
		};
		class SoundsExt;
		class HitPoints;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Sounds;
		class SoundsExt
		{
			class Sounds;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
	};
	class Heli_Transport_02_base_F: Helicopter_Base_H
	{
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H
	{
	};
	class Heli_Light_03_base_F: Helicopter_Base_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine1;
			class HitEngine2;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitGlass7;
			class HitGlass8;
		};
	};
	
	class RHS_UH60_Base: Heli_Transport_01_base_F
	{
	};
	
	class RHS_UH60M_base: RHS_UH60_Base
	{
	};
	
	class RHS_UH60M_US_base: RHS_UH60M_base
	{
		side=1;
	};
	class RHS_UH60M: RHS_UH60M_US_base
	{
	};	
		
		
	class bav_UH60nav_blue: RHS_UH60M
	{
		scope=2;
		model="\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M_ESSS.p3d";
		editorPreview="bav_uh60\data\20180902204201_1.jpg";
		displayName="UH-60M (Blue)(unarmed)";
		faction = "rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenSelectionsTextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_Navy_Blau.paa",
			"bav_uh60\data\uh60m_engine_Navy_Blau.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyIndex=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class fuelTanks_hide
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
		};
	};
	class bav_UH60nav_blue_ar: RHS_UH60M
	{
		scope=2;
		editorPreview="rhsusf\addons\rhsusf_editorPreviews\data\RHS_UH60M_d.paa";
		displayName="UH-60M (Blue)";
		faction="rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_Navy_Blau.paa",
			"bav_uh60\data\uh60m_engine_Navy_Blau.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="B_helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_helicrew_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};	
	class bav_UH60nav_black_camo: RHS_UH60M
	{
		scope=2;
		model="\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M_ESSS.p3d";
		editorPreview="bav_uh60\data\20180831235528_1.jpg";
		displayName="UH-60M (Black-Camo)(unarmed)";
		faction = "rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_navy_mit.paa",
			"bav_uh60\data\uh60m_engine_navy_mit.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyIndex=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class fuelTanks_hide
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
		};
	};
	class bav_UH60nav_black_camo_ar: RHS_UH60M
	{
		scope=2;
		editorPreview="bav_uh60\data\20180831235528_1.jpg";
		displayName="UH-60M (Black-Camo)";
		faction="rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_navy_mit.paa",
			"bav_uh60\data\uh60m_engine_navy_mit.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="B_helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_helicrew_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};		
	class bav_UH60nav_black: RHS_UH60M
	{
		scope=2;
		model="\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M_ESSS.p3d";
		editorPreview="bav_uh60\data\20180901000255_1.jpg";
		displayName="UH-60M (Black)(unarmed)";
		faction = "rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_navy_ohne.paa",
			"bav_uh60\data\uh60m_engine_navy_ohne.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyIndex=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class fuelTanks_hide
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
		};
	};
	class bav_UH60nav_black_ar: RHS_UH60M
	{
		scope=2;
		editorPreview="bav_uh60\data\20180901000255_1.jpg";
		displayName="UH-60M (Black)";
		faction="rhs_faction_usn";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_navy_ohne.paa",
			"bav_uh60\data\uh60m_engine_navy_ohne.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="B_helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_helicrew_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};		
	class bav_UH60stalk_camo: RHS_UH60M
	{
		scope=2;
		model="\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M_ESSS.p3d";
		editorPreview="bav_uh60\data\20180831231952_1.jpg";
		displayName="UH-60M (Night Stalker - Camo)(unarmed)";
		faction = "rhs_faction_socom";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_night_stalkers_mit.paa",
			"bav_uh60\data\uh60m_engine_night_stalkers_mit.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyIndex=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class fuelTanks_hide
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
		};
	};
	class bav_UH60stalk_camo_ar: RHS_UH60M
	{
		scope=2;
		editorPreview="bav_uh60\data\20180831231952_1.jpg";
		displayName="UH-60M (Night Stalker - Camo)";
		faction = "rhs_faction_socom";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_night_stalkers_mit.paa",
			"bav_uh60\data\uh60m_engine_night_stalkers_mit.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="B_helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_helicrew_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};			
	class bav_UH60stalk: RHS_UH60M
	{
		scope=2;
		model="\rhsusf\addons\rhsusf_a2port_air\UH60M\UH60M_ESSS.p3d";
		editorPreview="bav_uh60\data\20180831233255_1.jpg";
		displayName="UH-60M (Night Stalker)(unarmed)";
		faction = "rhs_faction_socom";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_night_ stalkers_ohne.paa",
			"bav_uh60\data\uh60m_engine_night_ stalkers_ohne.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				proxyIndex=1;
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class fuelTanks_hide
			{
				source="user";
				animPeriod=9.9999997e-005;
				initPhase=1;
			};
		};
	};
	class bav_UH60stalk_ar: RHS_UH60M
	{
		scope=2;
		editorPreview="bav_uh60\data\20180831233255_1.jpg";
		displayName="UH-60M (Night Stalker)";
		faction = "rhs_faction_socom";
		vehicleClass="rhs_vehclass_helicopter";
		crew="B_Helipilot_F";
		author="StephanP.";
		typicalCargo[]=
		{
			"B_helicrew_F"
		};
		class AnimationSources: AnimationSources
		{
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"filter"
		};
		hiddenselectionstextures[]=
		{
			"bav_uh60\data\uh60m_fuselage_night_ stalkers_ohne.paa",
			"bav_uh60\data\uh60m_engine_night_ stalkers_ohne.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
			"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="B_helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="B_helicrew_F";
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
	};
};
