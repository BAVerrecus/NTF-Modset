
class cfgVehicles
{

	class ThingX;

	class MineBase ;


	class EODS_Fake_Base: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_Fake_Base";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_FAKE_INIT.sqf'";
		};
	};
	class EODS_Fake_01: EODS_Fake_Base
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_Fake_01";
		scope = 1;
		displayName = "blah";
		model = "EODS_ieds\meshes\fake_point.p3d";
		vehicleClass = "EODS_ied_class";
	};
	class EODS_base_ied_cellphone: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_base_ied_cellphone";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf'";
		};
		class AnimationSources
		{
			class Battery_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Detonator_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	/*
	class EODS_base_ied_Pressure: ThingX
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_base_ied_Pressure";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
			class HitPP;
		};
		class Eventhandlers
		{
			//init = "_ok = _this execVM '\EODS_ieds\funciones\PRESSURE_IEDS\EODS_PRESSURE_INIT.sqf'";
		};
		class AnimationSources
		{
			class Battery_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Detonator_hide
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
	};
	*/
	class EODS_base_Uxo: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_base_Uxo";
		scope = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class HitPoints
		{
			class HitIed;
			class HitPP;
		};
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf'";
		};
	};
	class EODS_Uxo_1: EODS_base_Uxo
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_UXO_1";
		scope = 2;
		displayName = "UXO";
		model = "EODS_ieds\meshes\EODS_UXO_1.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied01_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied01: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied01";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied01";
		model = "EODS_ieds\meshes\ied01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied01_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied01_armed: EODS_ied01
	{
		displayName = "$STR_EODS_ieds_ied01_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied02: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied02";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied02";
		model = "EODS_ieds\meshes\ied02.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied02_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied02_armed: EODS_ied02
	{
		displayName = "$STR_EODS_ieds_ied02_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied03: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied03";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied03";
		model = "EODS_ieds\meshes\ied03.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied03_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied03_armed: EODS_ied03
	{
		displayName = "$STR_EODS_ieds_ied03_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied04: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied04";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied04";
		model = "EODS_ieds\meshes\ied04.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied04_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied04_armed: EODS_ied04
	{
		displayName = "$STR_EODS_ieds_ied04_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied05: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied05";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied05";
		model = "EODS_ieds\meshes\EWK_ied01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied05_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied05_armed: EODS_ied05
	{
		displayName = "$STR_EODS_ieds_ied05_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied06: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied06";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied06";
		model = "EODS_ieds\meshes\EWK_ied02.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied06_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied06_armed: EODS_ied06
	{
		displayName = "$STR_EODS_ieds_ied06_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_ied07: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_ied07";
		scope = 2;
		displayName = "$STR_EODS_ieds_ied07";
		model = "EODS_ieds\meshes\EWK_ied03.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};

	class EODS_ied07_armed: EODS_ied07
	{
		displayName = "$STR_EODS_ieds_ied07_armed";
		class Eventhandlers
		{

			init = "_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_GENERAL_INIT.sqf';_armed = _this execVM '\EODS_ieds\funciones\armIED.sqf'";
		};
	};

	class EODS_122mm_USSR_IED: EODS_base_ied_cellphone
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_122mm_USSR_RCIED";
		scope = 0;
		displayName = "EODS_122mm_USSR_RCIED";
		model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
		};
	};
	/*
	class EODS_Water_Container_IED: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container_IED";
		scope = 0;
		displayName = "EODS Water Container IED";
		model = "\EODS_ieds\meshes\WaterBomb.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers{};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	*/
	/*
	class EODS_FuelCan_IED: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FuelCan_IED";
		scope = 0;
		displayName = "EODS FuelCan IED";
		model = "\EODS_ieds\meshes\FuelCan.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers{};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	*/
/*
	class EODS_122mm_USSR_IED_PP: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_122mm_USSR_IED_PP";
		scope = 2;
		displayName = "EODS 122mm_USSR_IED_PP";
		model = "\EODS_ieds\meshes\122mm_USSR_IED_PP.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\PRESSURE_IEDS\EODS_PRESSURE_INIT.sqf'";
		};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};



	class EODS_ied_B_PressurePlate: EODS_base_ied_Pressure
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "ied_B_PressurePlate";
		scope = 0;
		displayName = "ied_B_PressurePlate";
		model = "EODS_ieds\meshes\Ied_PP01.p3d";
		vehicleClass = "EODS_ied_class";
		picture = "\EODS_ieds\data\ied07_menu.paa";
		class Eventhandlers
		{
			init = "_ok = _this execVM '\EODS_ieds\funciones\PRESSURE_IEDS\EODS_PRESSURE_INIT.sqf'";
		};
		class HitPoints: HitPoints
		{
			class HitIed: HitIed
			{
				armor = 1;
				material = -1;
				name = "HitIed";
				passThrough = 0;
			};
			class HitPP: HitPP
			{
				armor = 1;
				material = -1;
				name = "HitPP";
				passThrough = 0;
			};
		};
	};
	*/
	class EODS_FertilizerBag: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag";
		scope = 0;
		displayName = "EODS FertilizerBag";
		model = "\EODS_ieds\meshes\FertilizerBag.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag2_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag2_Pile";
		scope = 0;
		displayName = "EODS_FertilizerBag2_Pile";
		model = "\EODS_ieds\meshes\FertilizerBag2Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag3_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_FertilizerBag3_Pile";
		scope = 0;
		displayName = "EODS_FertilizerBag3_Pile";
		model = "\EODS_ieds\meshes\FertilizerBag3Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_FertilizerBag_2And3_Pile: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "FertilizerBag2And3Pile";
		scope = 0;
		displayName = "FertilizerBag2And3Pile";
		model = "\EODS_ieds\meshes\FertilizerBag2And3Pile.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_CocaCan: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_CocaCan";
		scope = 0;
		displayName = "EODS SodaCan (coca)";
		model = "\EODS_ieds\meshes\CocaCan.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Bullet_Case_Detonator: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Bullet_Case_Detonator";
		scope = 0;
		displayName = "EODS Bullet_Case_Detonator";
		model = "\EODS_ieds\meshes\Bullet_Case_Detonator.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_wire_spool: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_wire_spool";
		scope = 0;
		displayName = "EODS wire_spool";
		model = "\EODS_ieds\meshes\wire_spool.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Water_Container: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container";
		scope = 0;
		displayName = "EODS Water Container";
		model = "\EODS_ieds\meshes\WaterContainer.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class EODS_Water_Container2: ThingX
	{
		mapSize = 1;
		author = "MrEwok";
		_generalMacro = "EODS_Water_Container2";
		scope = 0;
		displayName = "EODS Water Container2";
		model = "\EODS_ieds\meshes\WaterContainer2.p3d";
		icon = "iconObject";
		vehicleClass = "EODS_ied_class";
		destrType = "DestructNo";
		cost = 100;
		class Eventhandlers{};
	};
	class House_F;
	class EODS_tierra_base: House_F
	{
		mapSize = 1;
		author = "Monovdd";
		_generalMacro = "EODS_tierra_base";
		scope = 0;
		displayName = "Tierra Ied Base";
		model = "\A3\Weapons_F\empty.p3d";
		vehicleClass = "EODS_ied_class";
		icon = "iconObject";
		keepHorizontalPlacement = 0;
		hiddenSelections[] = {"todo"};
		class DestructionEffects{};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\GENERAL\EODS_TIERRA_INIT.sqf';};";
		};
	};
	class EODS_tierra01_ied01: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied01";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_01";
		model = "EODS_ieds\meshes\tierra01_ied01.p3d";
	};
	class EODS_tierra02_ied01: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied01";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_02";
		model = "EODS_ieds\meshes\tierra02_ied01.p3d";
	};
	class EODS_tierra01_ied02: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied02";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_03";
		model = "EODS_ieds\meshes\tierra01_ied02.p3d";
	};
	class EODS_tierra02_ied02: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied02";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_04";
		model = "EODS_ieds\meshes\tierra02_ied02.p3d";
	};
	class EODS_tierra01_ied03: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied03";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_05";
		model = "EODS_ieds\meshes\tierra01_ied03.p3d";
	};
	class EODS_tierra02_ied03: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied03";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_06";
		model = "EODS_ieds\meshes\tierra02_ied03.p3d";
	};
	class EODS_tierra01_ied04: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra01_ied04";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_07";
		model = "EODS_ieds\meshes\tierra01_ied04.p3d";
	};
	class EODS_tierra02_ied04: EODS_tierra_base
	{
		mapSize = 1;
		_generalMacro = "EODS_tierra02_ied04";
		scope = 1;
		displayName = "$STR_EODS_Fake_IED_08";
		model = "EODS_ieds\meshes\tierra02_ied04.p3d";
	};
	class Logic;
	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class EODS_IED_HIDDEN_IN_OBJECT: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_HIDDEN_IN_OBJECT";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_hidden_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_OBJECT_INIT.sqf';};";
		};
	};
	class EODS_IED_CELLPHONE_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_CA";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_IED_CA_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\IED_CA\EODS_CA_INIT.sqf';};";
		};
	};
	class EODS_IED_HIDDEN_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_HIDDEN";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_bury_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\HIDDEN_IEDS\EODS_HIDDEN_INIT.sqf';};";
		};
	};
	class EODS_IED_CADENA_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_CADENA";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_Encadenar_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\CADENA\EODS_CADENA_INIT.sqf';};";
		};
	};
	class EODS_IED_ARMAR_MODULE: Module_F
	{
		Author = "Monovdd";
		scope = 2;
		category = "EODS_ieds_modules";
		side = 7;
		displayName = "$STR_EODS_ieds_modulos_ARMAR";
		IEmodICON_Module = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		picture = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		icon = "\EODS_ieds\data\EODS_modulo_Armar_icon.paa";
		mapsize = 20;
		class Arguments: ArgumentsBaseUnits
		{
			class Units: Units{};
		};
		class ModuleDescription
		{
			description = "";
			sync[] = {};
		};
		class Eventhandlers
		{
			init = "if (isServer) then {_ok = _this execVM '\EODS_ieds\funciones\ARMAR\EODS_ARMAR_INIT.sqf';};";
		};
	};

//ACE3 PP IEDS
class ACE_Explosives_Place_IEDUrbanBig;
class ACE_IEDUrbanBig_Range;

class EODS_IED_Place_122mm: ACE_Explosives_Place_IEDUrbanBig {
	displayName = "122MM IED";
	model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
};

class EODS_IED_122mm: ACE_IEDUrbanBig_Range {
	author = "Chr";
	ammo = "EODS_IED_122mm_Range_Ammo";
	displayName = "122 USSR IED";
	editorPreview = "";
	model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
};

};
