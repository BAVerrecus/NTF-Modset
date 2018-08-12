class CfgWeapons
{
	class Default;
	class ItemCore;
	class EODS_item_general: ItemCore
	{
		scope = 0;
	};
	class EODS_cellphone_02: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_celuar";
		class ItemInfo
		{
			mass = 1;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\iconocelular_03.paa";
		model = "EODS_ieds\meshes\celular02.p3d";
	};
	class EODS_Uxo_01_Inv: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_Uxo_01";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_01.paa";
		model = "EODS_ieds\meshes\EODS_UXO_1.p3d";
	};
	class EODS_inventario_ied_01: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied01";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_01.paa";
		model = "EODS_ieds\meshes\ied01.p3d";
	};
	class EODS_inventario_ied_02: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied02";
		class ItemInfo
		{
			mass = 90;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_02.paa";
		model = "EODS_ieds\meshes\ied02.p3d";
	};
	class EODS_inventario_ied_03: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied03";
		class ItemInfo
		{
			mass = 120;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_03.paa";
		model = "EODS_ieds\meshes\ied03.p3d";
	};
	class EODS_inventario_ied_04: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied04";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_04.paa";
		model = "EODS_ieds\meshes\ied04.p3d";
	};
	class EODS_inventario_ied_05: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied05";
		class ItemInfo
		{
			mass = 70;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_05.paa";
		model = "EODS_ieds\meshes\EWK_ied01.p3d";
	};
	class EODS_inventario_ied_06: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied06";
		class ItemInfo
		{
			mass = 120;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_06.paa";
		model = "EODS_ieds\meshes\EWK_ied02.p3d";
	};
	class EODS_inventario_ied_07: EODS_item_general
	{
		scope = 2;
		displayName = "$STR_EODS_ieds_ied07";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\EWK_ied03.p3d";
	};
	class EODS_inventario_ied_B_PressurePlate: EODS_item_general
	{
		scope = 1;
		displayName = "ied_B_PressurePlate";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\Ied_PP01.p3d";
	};
	class EODS_inventario_122mm_USSR_IED: EODS_item_general
	{
		scope = 2;
		displayName = "122mm_USSR_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
	};
	class EODS_inventario_Water_Container_IED: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_Water_Container_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\WaterBomb.p3d";
	};
	class EODS_inventario_FuelCan_IED: EODS_item_general
	{
		scope = 1;
		displayName = "EODS_FuelCan_IED";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\FuelCan.p3d";
	};
	class EODS_inventario_122mm_USSR_IED_PP: EODS_item_general
	{
		scope = 1;
		displayName = "122mm_USSR_IED_PP";
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
		descriptionShort = "";
		picture = "\EODS_ieds\data\icono_ied_07.paa";
		model = "EODS_ieds\meshes\122mm_USSR_IED_PP.p3d";
	};
};
