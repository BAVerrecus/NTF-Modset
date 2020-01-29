#include "script_component.hpp"

class CfgPatches {
    class bav_objects {
        name = BAV_Objects;
        units[] = {};
        weapons[] = {"bav_Item_money"};
		requiredVersion=0.1;
        requiredAddons[] = {"ace_main","ace_modules"};
        author = B.A.Verrecus;
        authors[] = {"B.A.Verrecus"};
		url="http://www.nato-taskforce.com";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class CfgVehicleClasses {
    class ACEX_Misc_Items {
        displayName = bav_objects;
    };
};

class CfgVehicles {

	class Item_Base_F;
	
    class bav_Item_wFoodSack_Item: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = FoodSack (white);
        author = BAVerrecus;
        vehicleClass = "Items";
        class TransportItems {
            class bav_Item_wFoodSack {
                name = "bav_Item_wFoodSack";
                count = 1;
            };
        };
	};

	
	
	class NATO_Box_Base;	
 
    class bav_Box_bottlestack: NATO_Box_Base {
        scope = 2;
        accuracy = 1;
        author = B.A.Verrecus;
        displayName = Water Bottle Stack;
        transportMaxWeapons = 19200;
        transportMaxMagazines = 19200;
        transportMaxItems = 19200;
        maximumload = 19200;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\WaterBottle_01_stack_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_WaterBottle_01_stack_F.jpg";
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
	{
		class _xx_ACE_WaterBottle
		{
			name = "ACE_WaterBottle";
			count = 9600; //Item Count Here
		};
	};

        class AnimationSources {
            class Ammo_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class AmmoOrd_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Grenades_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Support_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
	};	
	
    class bav_Box_bottlepack: NATO_Box_Base {
        scope = 2;
        accuracy = 1;
        author = B.A.Verrecus;
        displayName = Water Bottle Pack;
        transportMaxWeapons = 12;
        transportMaxMagazines = 12;
        transportMaxItems = 12;
        maximumload = 12;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\WaterBottle_01_pack_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_WaterBottle_01_pack_F.jpg";
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
	{
		class _xx_ACE_WaterBottle
		{
			name = "ACE_WaterBottle";
			count = 6; //Item Count Here
		};
	};

        class AnimationSources {
            class Ammo_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class AmmoOrd_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Grenades_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Support_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
	};		
	
	
    class bav_Box_sacksheap: NATO_Box_Base {
        scope = 2;
        accuracy = 1;
        author = B.A.Verrecus;
        displayName = Food Sacks (small heap);
        transportMaxWeapons = 60;
        transportMaxMagazines = 60;
        transportMaxItems = 60;
        maximumload = 924;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\FoodSacks_01_small_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FoodSacks_01_small_white_idap_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Props_F_Orange\Humanitarian\Supplies\Data\FoodSack_01_full_white_idap_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelections[] = {"Camo"};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
	{
		class _xx_bav_Item_wFoodSack
		{
			name = "bav_Item_wFoodSack";
			count = 6; //Item Count Here
		};
	};

        class AnimationSources {
            class Ammo_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class AmmoOrd_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Grenades_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Support_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
	};
	
	
    class bav_Box_sacklheap: NATO_Box_Base {
        scope = 2;
        accuracy = 1;
        author = B.A.Verrecus;
        displayName = Food Sacks (large heap);
        transportMaxWeapons = 300;
        transportMaxMagazines = 300;
        transportMaxItems = 300;
        maximumload = 4620;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\FoodSacks_01_large_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FoodSacks_01_large_white_idap_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Props_F_Orange\Humanitarian\Supplies\Data\FoodSack_01_full_white_idap_CO.paa","\A3\Props_F_Orange\Humanitarian\Supplies\Data\FoodSack_01_large_white_idap_mlod_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelections[] = {"Camo","Camo2"};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
	{
		class _xx_bav_Item_wFoodSack
		{
			name = "bav_Item_wFoodSack";
			count = 30; //Item Count Here
		};
	};

        class AnimationSources {
            class Ammo_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class AmmoOrd_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Grenades_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Support_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
	};
	
    class bav_Box_sacknheap: NATO_Box_Base {
        scope = 2;
        accuracy = 1;
        author = B.A.Verrecus;
        displayName = Food Sacks (Net);
        transportMaxWeapons = 300;
        transportMaxMagazines = 300;
        transportMaxItems = 300;
        maximumload = 4620;
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\FoodSacks_01_cargonet_F.p3d";
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FoodSacks_01_cargo_white_idap_F.jpg";
		hiddenSelectionsTextures[] = {"\A3\Props_F_Orange\Humanitarian\Supplies\Data\FoodSack_01_full_white_idap_CO.paa","\A3\Props_F_Orange\Humanitarian\Supplies\Data\FoodSack_01_cargo_white_idap_mlod_CO.paa"};
		hiddenSelectionsMaterials[] = {};
		hiddenSelections[] = {"Camo","Camo2"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3"};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportItems
	{
		class _xx_bav_Item_wFoodSack
		{
			name = "bav_Item_wFoodSack";
			count = 30; //Item Count Here
		};
	};

        class AnimationSources {
            class Ammo_source {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class AmmoOrd_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Grenades_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
            class Support_source {
                source = "user";
                animPeriod = 1;
                initPhase = 1;
            };
        };
	};
	
};

class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;
	class ACE_ItemCore: CBA_MiscItem {};

    class bav_Item_wFoodSack: ACE_ItemCore {
        author = BAVerrecus;
        scope = 2;
        displayName = FoodSack;
        descriptionShort = FoodSack;
		editorPreview = "\A3\EditorPreviews_F_Orange\Data\CfgVehicles\Land_FoodSack_01_full_white_idap_F.jpg";
		model = "\A3\Props_F_Orange\Humanitarian\Supplies\FoodSack_01_full_F.p3d";
        picture = "\bav_objects\data\sack.paa";
        icon = "iconObject_circle";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 154;
        };
	};

};