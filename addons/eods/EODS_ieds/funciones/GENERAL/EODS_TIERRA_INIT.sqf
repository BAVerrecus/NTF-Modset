/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

if (isServer) then {

	call compile preprocessFileLineNumbers "\EODS_ieds\funciones\GENERAL\KRON_Strings.sqf";

	EODS_tipos_de_tierra = ["Beach","Dead","Desert","Dirt","GrassDry","ForestPine","GrassGreen","Marsh","Mud","Rock","Soil","Stony","StratisBeach","StratisDirt","StratisDryGrass","StratisatisForestPine","StratisGreenGrass","StratisRocky","StratisThistles","StonyThistle","Thorn","Weed","GrassWild","WildField"];

	private ["_tierra","_superficie","_encontroCadena","_nombreTextura"];

		_tierra = _this select 0;

		switch (typeOf _tierra) do {

   			case "EODS_tierra01_ied01": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra02_ied01": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra01_ied02": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra02_ied02": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra01_ied03": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra02_ied03": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.04]};

   			case "EODS_tierra01_ied04": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.01]};

   			case "EODS_tierra02_ied04": {_tierra setPos [ getPos _tierra select 0, getPos _tierra select 1, -0.0001]};

			default { };

		};


		_superficie = surfaceType position _tierra;

		_encontroCadena = false;

		{
			_encontroCadena = [_superficie,_x] call KRON_StrInStr;

			if (_encontroCadena) then {

				_nombreTextura = _x;

				_encontroCadena = false;
			};

		} forEach EODS_tipos_de_tierra;


		if (isNil "_nombreTextura") then {

			_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_dirt_co.paa"];

		} else {

			switch (_nombreTextura) do {

   			case "Beach": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_beach_co.paa"];};
   			case "Dead": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_dead_co.paa"];};
   			case "Desert": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_desert_co.paa"];};
   			case "Dirt": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_dirt_co.paa"];};
   			case "GrassDry": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_dry_grass_co.paa"];};
   			case "ForestPine": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_forest_pine_co.paa"];};
   			case "GrassGreen": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_grass_green_co.paa"];};
   			case "Marsh": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_marsh_co.paa"];};
   			case "Mud": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_mud_co.paa"];};
   			case "Rock": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_rock_co.paa"];};
   			case "Soil": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_soil_co.paa"];};
   			case "Stony": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_stony_co.paa"];};
   			case "StratisBeach": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strbeach_co.paa"];};
   			case "StratisDirt": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strdirt_co.paa"];};
   			case "StratisDryGrass": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strdrygrass_co.paa"];};
   			case "StratisatisForestPine": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strforest_pine_co.paa"];};
   			case "StratisGreenGrass": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strgreengrass_co.paa"];};
   			case "StratisRocky": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strrocky_co.paa"];};
   			case "StratisThistles": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_strthistles_co.paa"];};
   			case "StonyThistle": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_thistle_stony_co.paa"];};
   			case "Thorn": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_thorn_co.paa"];};
   			case "Weed": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_weed_co.paa"];};
   			case "GrassWild": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_wild_grass_co.paa"];};
   			case "WildField": {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_wildfield_co.paa"];};
			case "VRsurface01": {_tierra setObjectTextureGlobal [0, "\a3\map_vr\data\l_middle_mco.paa"];};
			//Custom maps define....
															//Zargabad
			case "ZRHlina": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_hlina_co.paa"];};
			case "ZRPole": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_pole_co.paa"];}; 
			case "ZRBeton": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_beton_co.paa"];}; 
			case "ZRSterkNaDno": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_sterk_na_dno_co.paa"];}; 
			case "ZRAsfalt": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_asfalt_co.paa"];}; 
			case "ZRValouny": {_tierra setObjectTextureGlobal [0, "\zargabad\data\zr_valouny_co.paa"];};
			
															//Sangin
			case "smoke_GrassSurface": {_tierra setObjectTextureGlobal [0, "\smoke_hellskitchen_map_data\Data\smoke_trava_co.paa"];}; 
			case "smoke_sandSurface": {_tierra setObjectTextureGlobal [0, "\smoke_hellskitchen_map_data\Data\smoke_desert_co.paa"];}; 
			
															//UTES
			case "UTGrass": {_tierra setObjectTextureGlobal [0, "\utes\data\ut_plevel_detail_co.paa"];}; 
			case "UTConcrete": {_tierra setObjectTextureGlobal [0, "\utes\data\ut_beton_detail_co.paa"];}; 
			case "UTForest": {_tierra setObjectTextureGlobal [0, "\utes\data\ut_les_detail_co.paa"];}; 
			
															//Sarhani
			case "GrassSouth": {_tierra setObjectTextureGlobal [0, "\sara\Data\travajih_detail_co.paa"];}; 
			case "Grass": {_tierra setObjectTextureGlobal [0, "\sara\Data\trava_detail_co.paa"];}; 
			
															//Chernarus
			case "CRForest1": {_tierra setObjectTextureGlobal [0, "\chernarus\data\cr_les2_detail_co.paa"];}; 
			case "CRField2": {_tierra setObjectTextureGlobal [0, "\chernarus\data\cr_strniste_detail_co.paa"];}; 
			case "CRGrass": {_tierra setObjectTextureGlobal [0, "\chernarus\data\cr_trava2_detail_co.paa"];}; 
			
			default {_tierra setObjectTextureGlobal [0, "\a3\map_data\gdt_dirt_co.paa"];};
			};
		};
};