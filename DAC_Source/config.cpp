class CfgPatches
{
	class DAC_Source
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Misc_F",
			"A3_Structures_F",
			"A3_Plants_F_Bush",
			"A3_Roads_F",
			"A3_Rocks_F",
			"A3_Signs_F",
			"A3_Soft_F",
			"A3_Structures_F_Wrecks",
			"A3_Structures_F_Mil",
			"A3_Structures_F_Ind",
			"A3_Structures_F_Households"
		};
	};
};
class CfgVehicleClasses
{
	class DAC_Source
	{
		displayName="DAC";
	};
	class DAC_EUPlants
	{
		displayName="DAC: EU-Plants";
	};
	class DAC_EURocks
	{
		displayName="DAC: EU-Rocks";
	};
};
class CfgVehicles
{
	class Logic;
	class DAC_Source_Intern: Logic
	{
		displayName="DAC_Intern";
		vehicleClass="DAC_Source";
		class EventHandlers
		{
			Init="_this execVM ""\DAC_Source\Init_Intern.sqf"" ";
		};
	};
	class DAC_Source_Extern: Logic
	{
		displayName="DAC_Extern";
		vehicleClass="DAC_Source";
		class EventHandlers
		{
			Init="_this execVM ""\DAC_Source\Init_Extern.sqf"" ";
		};
	};
	class Static;
	class DAC_Plants_Base: Static
	{
		displayName="";
		accuracy=0.1;
		vehicleClass="DAC_EUPlants";
		model="";
		nameSound="";
		animated=0;
		simulation="house";
		cost=0;
		armor=300;
		ladders[]={};
		placement="slope";
	};
	class DAC_Plants_DTr: DAC_Plants_Base
	{
		destrType="DestructTree";
		accuracy=1000;
		placement="vertical";
	};
	class DAC_Plants_DNo: DAC_Plants_Base
	{
		destrType="DestructNo";
		accuracy=1000;
	};
	class DAC_Plants_DTe: DAC_Plants_Base
	{
		destrType="DestructTent";
		accuracy=1000;
	};
	class DAC_Plants_DBu: DAC_Plants_Base
	{
		destrType="DestructBuilding";
		accuracy=1000;
		class DestructionEffects
		{
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class DAC_Rocks_Base: Static
	{
		displayName="";
		accuracy=0.1;
		vehicleClass="DAC_EURocks";
		model="";
		nameSound="";
		animated=0;
		simulation="house";
		cost=0;
		armor=1000;
		ladders[]={};
		placement="vertical";
	};
	class DAC_Rocks_DNo: DAC_Rocks_Base
	{
		destrType="DestructNo";
		accuracy=1000;
	};
	class DAC_Rocks_DTe: DAC_Rocks_Base
	{
		destrType="DestructTent";
		accuracy=1000;
	};
	class DAC_Rocks_DTr: DAC_Rocks_Base
	{
		destrType="DestructTree";
		accuracy=1000;
	};
	class DAC_Rocks_DBu: DAC_Rocks_Base
	{
		destrType="DestructBuilding";
		accuracy=1000;
		class DestructionEffects
		{
			class HouseDestr
			{
				simulation="destroy";
				type="DelayedDestruction";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
	};
	class DAC_c_bigFallenBranches_pine: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_bigFallenBranches_pine";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_bigFallenBranches_pine.p3d";
	};
	class DAC_c_bigFallenBranches_pine02: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_bigFallenBranches_pine02";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_bigFallenBranches_pine02.p3d";
	};
	class DAC_c_bigFallenBranches_pine03: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_bigFallenBranches_pine03";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_bigFallenBranches_pine03.p3d";
	};
	class DAC_c_BranchBig: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_BranchBig";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_BranchBig.p3d";
	};
	class DAC_c_Carduus: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Carduus";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Carduus.p3d";
	};
	class DAC_c_Coral_brain: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain.p3d";
	};
	class DAC_c_Coral_brain_flat_set1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_flat_set1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_flat_set1.p3d";
	};
	class DAC_c_Coral_brain_flat1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_flat1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_flat1.p3d";
	};
	class DAC_c_Coral_brain_flat2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_flat2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_flat2.p3d";
	};
	class DAC_c_Coral_brain_flat3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_flat3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_flat3.p3d";
	};
	class DAC_c_Coral_brain_flat4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_flat4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_flat4.p3d";
	};
	class DAC_c_Coral_brain_white: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_brain_white";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_brain_white.p3d";
	};
	class DAC_c_Coral_plant_set1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_plant_set1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_plant_set1.p3d";
	};
	class DAC_c_Coral_plant1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_plant1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_plant1.p3d";
	};
	class DAC_c_Coral_plant2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_plant2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_plant2.p3d";
	};
	class DAC_c_Coral_SPS_pink_set: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_SPS_pink_set";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_SPS_pink_set.p3d";
	};
	class DAC_c_Coral_SPS_pink_single: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral_SPS_pink_single";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral_SPS_pink_single.p3d";
	};
	class DAC_c_Coral1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral1.p3d";
	};
	class DAC_c_Coral2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral2.p3d";
	};
	class DAC_c_Coral3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral3.p3d";
	};
	class DAC_c_Coral4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral4.p3d";
	};
	class DAC_c_Coral5: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Coral5";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Coral5.p3d";
	};
	class DAC_c_Corals_set_t: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Corals_set_t";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Corals_set_t.p3d";
	};
	class DAC_c_Crack_Clutter1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Crack_Clutter1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Crack_Clutter1.p3d";
	};
	class DAC_c_Crack_Clutter2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Crack_Clutter2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Crack_Clutter2.p3d";
	};
	class DAC_c_Crack_Clutter3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Crack_Clutter3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Crack_Clutter3.p3d";
	};
	class DAC_c_Crack_Clutter4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Crack_Clutter4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Crack_Clutter4.p3d";
	};
	class DAC_c_Flower_BrushMedium_Blue: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_BrushMedium_Blue";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_BrushMedium_Blue.p3d";
	};
	class DAC_c_Flower_BrushMedium_White: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_BrushMedium_White";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_BrushMedium_White.p3d";
	};
	class DAC_c_Flower_Cakile: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Cakile";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Cakile.p3d";
	};
	class DAC_c_Flower_Low_Yellow1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Low_Yellow1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Low_Yellow1.p3d";
	};
	class DAC_c_Flower_Low_Yellow2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Low_Yellow2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
	};
	class DAC_c_Flower_Medium_White1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Medium_White1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Medium_White1.p3d";
	};
	class DAC_c_Flower_Medium_White2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Medium_White2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Medium_White2.p3d";
	};
	class DAC_c_Flower_Tansy: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Flower_Tansy";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Flower_Tansy.p3d";
	};
	class DAC_c_Grass_BrushHigh_Dry: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_BrushHigh_Dry";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_BrushHigh_Dry.p3d";
	};
	class DAC_c_Grass_BrushHigh_Green: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_BrushHigh_Green";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
	};
	class DAC_c_Grass_BrushLow_Sharp: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_BrushLow_Sharp";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_BrushLow_Sharp.p3d";
	};
	class DAC_c_Grass_Bunch_Small: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_Bunch_Small";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
	};
	class DAC_c_Grass_Dry: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_Dry";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_Dry.p3d";
	};
	class DAC_c_Grass_Green: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_Green";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_Green.p3d";
	};
	class DAC_c_Grass_Tall_Dead: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_Tall_Dead";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
	};
	class DAC_c_Grass_TuftDry: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Grass_TuftDry";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Grass_TuftDry.p3d";
	};
	class DAC_c_GrassCrooked: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassCrooked";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassCrooked.p3d";
	};
	class DAC_c_GrassDead_Tuft_Stony: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassDead_Tuft_Stony";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassDead_Tuft_Stony.p3d";
	};
	class DAC_c_GrassDesert_GroupHard: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassDesert_GroupHard";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassDesert_GroupHard.p3d";
	};
	class DAC_c_GrassGreen_GroupHard: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassGreen_GroupHard";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassGreen_GroupHard.p3d";
	};
	class DAC_c_GrassGreen_GroupSoft: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassGreen_GroupSoft";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
	};
	class DAC_c_GrassLong_DryBunch: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassLong_DryBunch";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
	};
	class DAC_c_GrassTall: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_GrassTall";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_GrassTall.p3d";
	};
	class DAC_c_Plant_Chicory: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Plant_Chicory";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Plant_Chicory.p3d";
	};
	class DAC_c_Plant_Dock: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Plant_Dock";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Plant_Dock.p3d";
	};
	class DAC_c_Plant_Green_Small: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Plant_Green_Small";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Plant_Green_Small.p3d";
	};
	class DAC_c_Plant_GreenBunch: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Plant_GreenBunch";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Plant_GreenBunch.p3d";
	};
	class DAC_c_Plant_Mullein: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Plant_Mullein";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Plant_Mullein.p3d";
	};
	class DAC_c_Rubble_Clutter1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter1.p3d";
	};
	class DAC_c_Rubble_Clutter2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter2.p3d";
	};
	class DAC_c_Rubble_Clutter3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter3.p3d";
	};
	class DAC_c_Rubble_Clutter4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter4.p3d";
	};
	class DAC_c_Rubble_Clutter5: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter5";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter5.p3d";
	};
	class DAC_c_Rubble_Clutter6: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Rubble_Clutter6";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Rubble_Clutter6.p3d";
	};
	class DAC_c_SeaDollar1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaDollar1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaDollar1.p3d";
	};
	class DAC_c_SeaDollar2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaDollar2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaDollar2.p3d";
	};
	class DAC_c_SeaDollar3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaDollar3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaDollar3.p3d";
	};
	class DAC_c_SeaDollar4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaDollar4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaDollar4.p3d";
	};
	class DAC_c_SeaDollars_set1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaDollars_set1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaDollars_set1.p3d";
	};
	class DAC_c_SeaWeed1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaWeed1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaWeed1.p3d";
	};
	class DAC_c_SeaWeed2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_SeaWeed2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_SeaWeed2.p3d";
	};
	class DAC_c_sharpStones_erosion: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_sharpStones_erosion";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_sharpStones_erosion.p3d";
	};
	class DAC_c_sharpStones_erosion_v2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_sharpStones_erosion_v2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_sharpStones_erosion_v2.p3d";
	};
	class DAC_c_Spong_tube_green1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_green1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_green1.p3d";
	};
	class DAC_c_Spong_tube_green2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_green2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_green2.p3d";
	};
	class DAC_c_Spong_tube_green3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_green3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_green3.p3d";
	};
	class DAC_c_Spong_tube_green4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_green4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_green4.p3d";
	};
	class DAC_c_Spong_tube_yellow1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_yellow1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_yellow1.p3d";
	};
	class DAC_c_Spong_tube_yellow2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_yellow2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_yellow2.p3d";
	};
	class DAC_c_Spong_tube_yellow3: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_yellow3";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_yellow3.p3d";
	};
	class DAC_c_Spong_tube_yellow4: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Spong_tube_yellow4";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Spong_tube_yellow4.p3d";
	};
	class DAC_c_StarFish1: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StarFish1";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StarFish1.p3d";
	};
	class DAC_c_StarFish2: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StarFish2";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StarFish2.p3d";
	};
	class DAC_c_StrFlowerWhiteSmall: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrFlowerWhiteSmall";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrFlowerWhiteSmall.p3d";
	};
	class DAC_c_StrGrassDry: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrGrassDry";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrGrassDry.p3d";
	};
	class DAC_c_StrGrassDry_group: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrGrassDry_group";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrGrassDry_group.p3d";
	};
	class DAC_c_StrGrassDryMedium_group: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrGrassDryMedium_group";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
	};
	class DAC_c_StrGrassGreen_group: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrGrassGreen_group";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
	};
	class DAC_c_StrPlantGermader_group: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrPlantGermader_group";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
	};
	class DAC_c_StrPlantGreenShrub: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrPlantGreenShrub";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
	};
	class DAC_c_StrPlantGreenSmall: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrPlantGreenSmall";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrPlantGreenSmall.p3d";
	};
	class DAC_c_StrPlantMullein: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrPlantMullein";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrPlantMullein.p3d";
	};
	class DAC_c_StrThistlePurple_small: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThistlePurple_small";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
	};
	class DAC_c_StrThistleSmallYellow: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThistleSmallYellow";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThistleSmallYellow.p3d";
	};
	class DAC_c_StrThistleYellowShrub: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThistleYellowShrub";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
	};
	class DAC_c_StrThornGray: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThornGray";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThornGray.p3d";
	};
	class DAC_c_StrThornGreen: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThornGreen";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThornGreen.p3d";
	};
	class DAC_c_StrThornKhaki: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrThornKhaki";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrThornKhaki.p3d";
	};
	class DAC_c_StrWeedBrownTall_group: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrWeedBrownTall_group";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
	};
	class DAC_c_StrWeedGreenTall: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_StrWeedGreenTall";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
	};
	class DAC_c_Thistle_High: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_High";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_High.p3d";
	};
	class DAC_c_Thistle_High_Dead: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_High_Dead";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
	};
	class DAC_c_Thistle_Medium: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Medium";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Medium.p3d";
	};
	class DAC_c_Thistle_Small: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Small";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Small.p3d";
	};
	class DAC_c_Thistle_Small_GreenYellow: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Small_GreenYellow";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Small_GreenYellow.p3d";
	};
	class DAC_c_Thistle_Small_Yellow: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Small_Yellow";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Small_Yellow.p3d";
	};
	class DAC_c_Thistle_Thorn_Brown: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Thorn_Brown";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
	};
	class DAC_c_Thistle_Thorn_Desert: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Thorn_Desert";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
	};
	class DAC_c_Thistle_Thorn_Gray: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Thorn_Gray";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Thorn_Gray.p3d";
	};
	class DAC_c_Thistle_Thorn_Green: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Thistle_Thorn_Green";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
	};
	class DAC_c_Urchin_black: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_black";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_black.p3d";
	};
	class DAC_c_Urchin_black_grp: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_black_grp";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_black_grp.p3d";
	};
	class DAC_c_Urchin_brown: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_brown";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_brown.p3d";
	};
	class DAC_c_Urchin_brown_grp: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_brown_grp";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_brown_grp.p3d";
	};
	class DAC_c_Urchin_red: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_red";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_red.p3d";
	};
	class DAC_c_Urchin_red_grp: DAC_Plants_DTe
	{
		scope=2;
		displayName="G c_Urchin_red_grp";
		icon="DAC_Source\icon\PG.paa";
		model="a3\plants_f\Clutter\c_Urchin_red_grp.p3d";
	};
	class DAC_p_Reeds_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="G p_Reeds_F";
		icon="DAC_Source\icon\PG.paa";
		model="\a3\plants_f\Plant\p_Reeds_F.p3d";
	};
	class DAC_b_ArundoD2s_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_ArundoD2s_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_ArundoD2s_F.p3d";
	};
	class DAC_b_ArundoD3s_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_ArundoD3s_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_ArundoD3s_F.p3d";
	};
	class DAC_b_FicusC1s_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_FicusC1s_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_FicusC1s_F.p3d";
	};
	class DAC_b_ficusC2d_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_ficusC2d_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_ficusC2d_F.p3d";
	};
	class DAC_b_FicusC2s_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_FicusC2s_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_FicusC2s_F.p3d";
	};
	class DAC_b_NeriumO2d_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_NeriumO2d_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_NeriumO2d_F.p3d";
	};
	class DAC_b_NeriumO2s_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_NeriumO2s_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_NeriumO2s_F.p3d";
	};
	class DAC_b_NeriumO2s_white_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_NeriumO2s_white_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_NeriumO2s_white_F.p3d";
	};
	class DAC_b_Thistle_Thorn_Green: DAC_Plants_DTe
	{
		scope=2;
		displayName="B b_Thistle_Thorn_Green";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\b_Thistle_Thorn_Green.p3d";
	};
	class DAC_bw_SetBig_Brains_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetBig_Brains_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetBig_Brains_F.p3d";
	};
	class DAC_bw_SetBig_corals_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetBig_corals_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetBig_corals_F.p3d";
	};
	class DAC_bw_SetBig_TubeG_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetBig_TubeG_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetBig_TubeG_F.p3d";
	};
	class DAC_bw_SetBig_TubeY_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetBig_TubeY_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetBig_TubeY_F.p3d";
	};
	class DAC_bw_SetSmall_Brains_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetSmall_Brains_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetSmall_Brains_F.p3d";
	};
	class DAC_bw_SetSmall_TubeG_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetSmall_TubeG_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetSmall_TubeG_F.p3d";
	};
	class DAC_bw_SetSmall_TubeY_F: DAC_Plants_DTe
	{
		scope=2;
		displayName="B bw_SetSmall_TubeY_F";
		icon="DAC_Source\icon\PB.paa";
		model="a3\plants_f\Bush\bw_SetSmall_TubeY_F.p3d";
	};
	class DAC_t_BroussonetiaP1s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_BroussonetiaP1s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_BroussonetiaP1s_F.p3d";
	};
	class DAC_t_FicusB1s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_FicusB1s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_FicusB1s_F.p3d";
	};
	class DAC_t_FicusB2s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_FicusB2s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_FicusB2s_F.p3d";
	};
	class DAC_t_FraxinusAV2s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_FraxinusAV2s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_FraxinusAV2s_F.p3d";
	};
	class DAC_t_OleaE1s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_OleaE1s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_OleaE1s_F.p3d";
	};
	class DAC_t_OleaE2s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_OleaE2s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_OleaE2s_F.p3d";
	};
	class DAC_t_PhoenixC1s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PhoenixC1s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PhoenixC1s_F.p3d";
	};
	class DAC_t_PhoenixC3s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PhoenixC3s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PhoenixC3s_F.p3d";
	};
	class DAC_t_PinusP3s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PinusP3s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PinusP3s_F.p3d";
	};
	class DAC_t_PinusS1s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PinusS1s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PinusS1s_F.p3d";
	};
	class DAC_t_PinusS2s_b_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PinusS2s_b_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PinusS2s_b_F.p3d";
	};
	class DAC_t_PinusS2s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PinusS2s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PinusS2s_F.p3d";
	};
	class DAC_t_poplar2f_dead_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_poplar2f_dead_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_poplar2f_dead_F.p3d";
	};
	class DAC_t_PopulusN3s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_PopulusN3s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_PopulusN3s_F.p3d";
	};
	class DAC_t_QuercusIR2s_F: DAC_Plants_DTr
	{
		scope=2;
		displayName="T t_QuercusIR2s_F";
		icon="DAC_Source\icon\PT.paa";
		model="a3\plants_f\Tree\t_QuercusIR2s_F.p3d";
	};
	class DAC_Decal_Crater: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Decal_Crater";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Decal_Crater.p3d";
	};
	class DAC_Decal_rock_dark: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Decal_rock_dark";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Decal_rock_dark.p3d";
	};
	class DAC_Decal_rock_layers: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Decal_rock_layers";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Decal_rock_layers.p3d";
	};
	class DAC_BluntRock_apart: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntRock_apart";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntRock_apart.p3d";
	};
	class DAC_BluntRock_monolith: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntRock_monolith";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntRock_monolith.p3d";
	};
	class DAC_BluntRock_spike: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntRock_spike";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntRock_spike.p3d";
	};
	class DAC_BluntRock_wallH: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntRock_wallH";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntRock_wallH.p3d";
	};
	class DAC_BluntRock_wallV: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntRock_wallV";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntRock_wallV.p3d";
	};
	class DAC_BluntStone_01: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_01";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_01.p3d";
	};
	class DAC_BluntStone_01_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_01_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_01_LC.p3d";
	};
	class DAC_BluntStone_02: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_02";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_02.p3d";
	};
	class DAC_BluntStone_02_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_02_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_02_LC.p3d";
	};
	class DAC_BluntStone_03: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_03";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_03.p3d";
	};
	class DAC_BluntStone_03_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStone_03_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStone_03_LC.p3d";
	};
	class DAC_BluntStones_erosion: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R BluntStones_erosion";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Blunt\BluntStones_erosion.p3d";
	};
	class DAC_sharpRock_apart: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpRock_apart";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpRock_apart.p3d";
	};
	class DAC_sharpRock_monolith: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpRock_monolith";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpRock_monolith.p3d";
	};
	class DAC_sharpRock_spike: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpRock_spike";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpRock_spike.p3d";
	};
	class DAC_sharpRock_wallH: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpRock_wallH";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpRock_wallH.p3d";
	};
	class DAC_sharpRock_wallV: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpRock_wallV";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpRock_wallV.p3d";
	};
	class DAC_sharpStone_01: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_01";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_01.p3d";
	};
	class DAC_sharpStone_01_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_01_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_01_LC.p3d";
	};
	class DAC_sharpStone_02: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_02";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_02.p3d";
	};
	class DAC_sharpStone_02_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_02_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_02_LC.p3d";
	};
	class DAC_sharpStone_03: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_03";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_03.p3d";
	};
	class DAC_sharpStone_03_LC: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStone_03_LC";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStone_03_LC.p3d";
	};
	class DAC_sharpStones_erosion: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R sharpStones_erosion";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Sharp\sharpStones_erosion.p3d";
	};
	class DAC_W_sharpRock_apart: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpRock_apart";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpRock_apart.p3d";
	};
	class DAC_W_sharpRock_monolith: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpRock_monolith";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpRock_monolith.p3d";
	};
	class DAC_W_sharpRock_spike: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpRock_spike";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpRock_spike.p3d";
	};
	class DAC_W_sharpRock_wallH: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpRock_wallH";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpRock_wallH.p3d";
	};
	class DAC_W_sharpRock_wallV: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpRock_wallV";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpRock_wallV.p3d";
	};
	class DAC_W_sharpStone_01: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpStone_01";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpStone_01.p3d";
	};
	class DAC_W_sharpStone_02: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpStone_02";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpStone_02.p3d";
	};
	class DAC_W_sharpStone_03: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpStone_03";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpStone_03.p3d";
	};
	class DAC_W_sharpStones_erosion: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R W_sharpStones_erosion";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\W_sharpStones_erosion.p3d";
	};
	class DAC_Small_Stone_01_F: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Small_Stone_01_F";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Small_Stone_01_F.p3d";
	};
	class DAC_Small_Stone_02_F: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Small_Stone_02_F";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Small_Stone_02_F.p3d";
	};
	class DAC_Stone_big_F: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_big_F";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Stone_big_F.p3d";
	};
	class DAC_Stone_medium_F: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_medium_F";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Stone_medium_F.p3d";
	};
	class DAC_Stone_small_F: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_small_F";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Stone_small_F.p3d";
	};
	class DAC_StoneSharp_big: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_big";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\StoneSharp_big.p3d";
	};
	class DAC_StoneSharp_medium: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_medium";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\StoneSharp_medium.p3d";
	};
	class DAC_StoneSharp_small: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_small";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\StoneSharp_small.p3d";
	};
	class DAC_StoneSharp_Wall: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_Wall";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\StoneSharp_Wall.p3d";
	};
	class DAC_Stone_big_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_big_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\Stone_big_W.p3d";
	};
	class DAC_Stone_medium_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_medium_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\Stone_medium_W.p3d";
	};
	class DAC_Stone_small_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R Stone_small_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\Stone_small_W.p3d";
	};
	class DAC_StoneSharp_big_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_big_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\StoneSharp_big_W.p3d";
	};
	class DAC_StoneSharp_medium_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_medium_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\StoneSharp_medium_W.p3d";
	};
	class DAC_StoneSharp_small_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_small_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\StoneSharp_small_W.p3d";
	};
	class DAC_StoneSharp_Wall_W: DAC_Rocks_DNo
	{
		scope=2;
		displayName="R StoneSharp_Wall_W";
		icon="DAC_Source\icon\R.paa";
		model="a3\rocks_f\Water\StoneSharp_Wall_W.p3d";
	};
};
class cfgMods
{
	author="B.A.Verrecus";
	timepacked="1527856069";
};
