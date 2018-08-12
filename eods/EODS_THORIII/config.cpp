// 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
// 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

// 	Note: Do not modify this file without permission.
	
//	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/

class CfgPatches
{
	class EODS_THORIII_main
	{
		units[]={"EODS_THORIII_UCP"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {"CBA_XEH","CBA_MAIN","A3_UI_F","EODS_ieds_main"};
	};
};

class Extended_PostInit_EventHandlers
{
	EODS_ECMBACKPACK_Init="[] execVM '\EODS_THORIII\FUNCTIONS\EODS_ECMBACKPACK_FUNCTIONS.sqf'";
};

class CfgVehicles
{
	class ReammoBox;
	class ThingX;
	class ReammoBox_F: ThingX
	{
		animated=0;
		scope=0;
		icon="iconCrate";
		model="";
		displayName="$STR_A3_cfgVehicles_ReammoBox0";
		accuracy=0.2;
		typicalCargo[]={};
		vehicleClass="Ammo";
		destrType="DestructBuilding";
		explosionEffect="BasicAmmoExplosion";
		class DestructionEffects
		{
			class Smoke2
			{
				simulation="particles";
				type="AmmoSmokeParticles2";
				position="";
				intensity=1;
				interval=1;
				lifeTime=2;
			};
			class Bullets
			{
				simulation="particles";
				type="AmmoBulletCore";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1.2;
			};
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestructionAmmoBox";
				position="";
				intensity=1;
				interval=1;
				lifeTime=10;
			};
		};
		maximumLoad=2000;
		transportMaxWeapons=12;
		transportMaxMagazines=64;
		transportMaxBackpacks=12;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;
		cost=0;
		armor=200;
		mapSize=2;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
	};
	class ContainerSupply;
	class EODS_Bag_Base: ReammoBox
	{
		scope=1;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		isbackpack=1;
		reversed=1;
		mapSize=2;
		vehicleClass="Backpacks";
		allowedSlots[]={901};
		model="";
		displayName="$STR_A3_Bag_Base0";
		icon="iconBackpack";
		transportMaxWeapons=1;
		transportMaxMagazines=20;
		class DestructionEffects
		{
		};
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		maximumLoad=0;
		side=3;
	};
	class EODS_THORIII_Base: EODS_Bag_Base
	{
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad=0;
		mass=30;
	};
	class EODS_ECMBACKPACK_Base: EODS_Bag_Base
	{
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maximumLoad=0;
		mass=30;
	};
	class EODS_THORIII_SIN_ANTENA_BASE: EODS_THORIII_Base
	{
		mass=30;
	};
	class EODS_THORIII_LOW_BASE: EODS_THORIII_Base
	{
		mass=30;
	};
	class EODS_THORIII_MID_BASE: EODS_THORIII_Base
	{
		mass=30;
	};
	class EODS_THORIII_HIGH_BASE: EODS_THORIII_Base
	{
		mass=30;
	};
	class EODS_THORIII_UCP: EODS_THORIII_SIN_ANTENA_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_UCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_UCP";
		scope=2;
		displayName="THORIII UCP";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_UCP.paa";
	};
	class EODS_THORIII_LOW_UCP: EODS_THORIII_LOW_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_LOW_UCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_LOW_UCP";
		scope=2;
		displayName="THORIII UCP LowBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_UCP.paa";
	};
	class EODS_THORIII_MID_UCP: EODS_THORIII_MID_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_MID_UCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_MID_UCP";
		scope=2;
		displayName="THORIII UCP MidBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_UCP.paa";
	};
	class EODS_THORIII_HIGH_UCP: EODS_THORIII_HIGH_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_HIGH_UCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_HIGH_UCP";
		scope=2;
		displayName="THORIII UCP HighBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_UCP.paa";
	};
	class EODS_THORIII_OCP: EODS_THORIII_SIN_ANTENA_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_OCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_OCP";
		scope=2;
		displayName="THORIII OCP";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_OCP.paa";
	};
	class EODS_THORIII_LOW_OCP: EODS_THORIII_LOW_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_LOW_OCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_LOW_OCP";
		scope=2;
		displayName="THORIII OCP LowBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_OCP.paa";
	};
	class EODS_THORIII_MID_OCP: EODS_THORIII_MID_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_MID_OCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_MID_OCP";
		scope=2;
		displayName="THORIII OCP MidBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_OCP.paa";
	};
	class EODS_THORIII_HIGH_OCP: EODS_THORIII_HIGH_BASE
	{
		model="\EODS_THORIII\EODS_THORIII_HIGH_OCP.p3d";
		author="Monovdd - Lancaster Studio - MrEwok";
		_generalMacro="EODS_THORIII_HIGH_OCP";
		scope=2;
		displayName="THORIII OCP HighBand";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_OCP.paa";
	};
	class EODS_ECMBACKPACK: EODS_ECMBACKPACK_Base
	{
		model="\EODS_THORIII\EODS_ECMBackpack.p3d";
		author="Burnes";
		_generalMacro="EODS_THORIII_HIGH_OCP";
		scope=2;
		displayName="British ECM Backpack";
		hiddenSelectionsTextures[] = {};
		picture="\EODS_THORIII\UI\thor_OCP.paa";
		mass=30;
	};
};

class WeaponSlotsInfo;
class ItemInfo;
class SlotInfo;
class CowsSlot;
class PointerSlot;

class CfgWeapons
{

	class Default;
	class ItemCore;
	class EODS_item_general;

	class EODS_Inv_LowBandAntenna: EODS_item_general
	{
		scope = 2;
		displayName = "Low Band Antenna";
		class ItemInfo
		{
			mass = 1;
			type = 201;
		};
		descriptionShort = "";
		picture="\EODS_THORIII\UI\IconLowBand_ca.paa";
		model = "\EODS_THORIII\EODS_LowBandAntenna.p3d";
	};

	class EODS_Inv_MidBandAntenna: EODS_item_general
	{
		scope = 2;
		displayName = "Mid Band Antenna";
		class ItemInfo
		{
			mass = 1;
			type = 201;
		};
		descriptionShort = "";
		picture="\EODS_THORIII\UI\IconMidBand_ca.paa";
		model = "\EODS_THORIII\EODS_MidBandAntenna.p3d";
	};

	class EODS_Inv_HighBandAntenna: EODS_item_general
	{
		scope = 2;
		displayName = "High Band Antenna";
		class ItemInfo
		{
			mass = 1;
			type = 201;
		};
		descriptionShort = "";
		picture="\EODS_THORIII\UI\IconHighBand_ca.paa";
		model = "\EODS_THORIII\EODS_HighBandAntenna.p3d";
	};

};