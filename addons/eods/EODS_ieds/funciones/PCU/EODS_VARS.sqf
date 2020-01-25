/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE

 	Author(s): Monovdd (Carlos Alberto Arango Sch�tz)

 	Note: Do not modify this file without permission.

	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

EODS_ied_inventarios_disponibles = ["EODS_inventario_ied_01","EODS_inventario_ied_02","EODS_inventario_ied_03","EODS_inventario_ied_04","EODS_inventario_ied_05","EODS_inventario_ied_06","EODS_inventario_ied_07","EODS_Inv_LowBandAntenna","EODS_Inv_MidBandAntenna","EODS_Inv_HighBandAntenna","EODS_Uxo_01_Inv"];

EODS_ied_crear_falsos = ["EODS_inventario_ied_01","EODS_inventario_ied_02","EODS_inventario_ied_03","EODS_inventario_ied_04","EODS_inventario_ied_05","EODS_inventario_ied_06","EODS_inventario_ied_07","EODS_Uxo_01_Inv"];

EODS_ied_tierras = ["EODS_tierra01_ied01","EODS_tierra01_ied02","EODS_tierra01_ied03","EODS_tierra01_ied04"];

EODS_ied_pressureplate = ["EODS_122mm_USSR_IED_PP","EODS_ied_B_PressurePlate"];

EODS_id_acciones_guardadas = [];

EODS_accion_mover_ied_terminada = true;

EODS_ied_para_menu = objNull;

EODS_Operador_para_menu = objNull;

EODS_PCU_ENCADENANDO = false;

EODS_PCU_Celular_Numeros_Guardados = [];

EODS_CELULAR_AGENDA_ACTIVA = false;

EODS_IEDS_PCU_CHECK_ACCION = false;

EODS_IEDS_PCU_CHECK_ACCION_RESULTADO = false;

EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA = false;

EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO = false;

EODS_IEDS_PCU_JAMMER_ACTIVO = false;

EODS_IEDS_PCU_CHECK_NO_ACCION_KEY = true;

EODS_IEDS_PCU_OBJETOS_ESCONDER = ["Land_FishingGear_02_F","Land_FishingGear_01_F","Land_ScrapHeap_2_F","Land_ScrapHeap_1_F","Land_Scrap_MRAP_01_F","Land_PaperBox_open_full_F","Land_PaperBox_open_empty_F","Land_PaperBox_closed_F","Land_Pallet_MilBoxes_F","Land_Wreck_Van_F","Land_Wreck_Ural_F","Land_Wreck_UAZ_F","Land_Wreck_Truck_F","Land_Wreck_Truck_dropside_F","Land_Wreck_Traw2_F","Land_Wreck_Traw_F","Land_Wreck_T72_turret_F","Land_Wreck_T72_hull_F","Land_Wreck_Slammer_turret_F","Land_Wreck_Slammer_hull_F","Land_Wreck_Slammer_F","Land_Wreck_Skodovka_F","Land_Wreck_Plane_Transport_01_F","Land_Wreck_Offroad2_F","Land_Wreck_Offroad_F","Land_Wreck_Hunter_F","Land_Wreck_HMMWV_F","Land_Wreck_Heli_Attack_02_F","Land_Wreck_Heli_Attack_01_F","Land_Wreck_CarDismantled_F","Land_Wreck_Car3_F","Land_Wreck_Car2_F","Land_Wreck_Car_F","Land_Wreck_BRDM2_F","Land_Wreck_BMP2_F","Land_UWreck_MV22_F","Land_UWreck_Heli_Attack_02_F","Land_UWreck_FishingBoat_F","Plane_Fighter_03_wreck_F","Weapon_Bag_Base","Land_GarbageBin_01_F","Land_GarbageBarrel_01_F","Land_BarrelWater_grey_F","Land_BarrelTrash_grey_F","Land_BarrelSand_grey_F","Land_BarrelEmpty_grey_F","Land_Ammobox_rounds_F","Land_GarbageContainer_open_F","Land_GarbageContainer_closed_F","Land_Grave_dirt_F","Land_Grave_forest_F","Land_Grave_rocks_F","Land_WaterTank_F","Land_WaterBarrel_F","Land_MetalBarrel_F","MetalBarrel_burning_F","Land_MetalBarrel_empty_F","Land_CanisterPlastic_F","Land_CanisterOil_F","Land_CanisterFuel_F","Land_BucketNavy_F","Land_Bucket_painted_F","Land_Bucket_clean_F","Land_Bucket_F","Land_BarrelWater_F","Land_BarrelTrash_F","Land_BarrelSand_F","Land_BarrelEmpty_F","Land_Suitcase_F","Land_PowerGenerator_F","Land_Tank_rust_F","Land_fs_feed_F","Land_FuelStation_Feed_F","Land_Cargo40_military_ruins_F","Land_Cargo40_china_color_V2_ruins_F","Land_Cargo40_china_color_V1_ruins_F","Land_Cargo40_color_V3_ruins_F","Land_Cargo40_color_V2_ruins_F","Land_Cargo40_color_V1_ruins_F","Land_Cargo20_military_ruins_F","Land_Cargo20_china_color_V2_ruins_F","Land_Cargo20_china_color_V1_ruins_F","Land_Cargo20_color_V3_ruins_F","Land_Cargo20_color_V2_ruins_F","Land_Cargo20_color_V1_ruins_F","Land_Cargo40_yellow_F","Land_Cargo40_white_F","Land_Cargo40_sand_F","Land_Cargo40_red_F","Land_Cargo40_orange_F","Land_Cargo40_military_green_F","Land_Cargo40_light_green_F","Land_Cargo40_light_blue_F","Land_Cargo40_grey_F","Land_Cargo40_cyan_F","Land_Cargo40_brick_red_F","Land_Cargo40_blue_F","Land_Cargo20_yellow_F","Land_Cargo20_white_F","Land_Cargo20_sand_F","Land_Cargo20_red_F","Land_Cargo20_orange_F","Land_Cargo20_military_green_F","Land_Cargo20_light_green_F","Land_Cargo20_light_blue_F","Land_Cargo20_grey_F","Land_Cargo20_cyan_F","Land_Cargo20_brick_red_F","Land_Cargo20_blue_F","Land_CargoBox_V1_F","Land_LandMark_F","Land_cargo_house_slum_ruins_F","Land_TableDesk_F","Land_Rack_F","Land_Icebox_F","Land_HeatPump_F","Land_StallWater_F","Land_Sacks_heap_F","Land_Sacks_goods_F","Land_Sack_F","Land_CratesWooden_F","Land_CratesShabby_F","Land_CratesPlastic_F","Land_Cages_F","Land_Basket_F","Land_Tyres_F","Land_Tyre_F","Land_JunkPile_F","Land_GarbageWashingMachine_F","Land_GarbagePallet_F","Land_GarbageBags_F","Land_WheelCart_F","Land_Pipes_small_F","Land_Pipes_large_F","Land_IronPipes_F","Land_CinderBlocks_F","Land_ToiletBox_F","Land_TentDome_F","Land_TentA_F","Land_Sleeping_bag_folded_F","Land_Sleeping_bag_blue_folded_F","Land_Sleeping_bag_brown_folded_F","Land_Ground_sheet_folded_F","Land_Ground_sheet_folded_OPFOR_F","Land_Ground_sheet_folded_blue_F","Land_Ground_sheet_folded_khaki_F","Land_Ground_sheet_folded_yellow_F","Land_Sink_F","Land_Timbers_F","Land_TreeBin_F","Land_WoodPile_F","Car","Tank","Plane","Helicopter","Ship","ReammoBox_F","Wreck"];
