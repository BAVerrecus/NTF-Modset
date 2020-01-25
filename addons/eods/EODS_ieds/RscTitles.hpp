class RscTitles
{
	class Eods_Ieds_Display_hint {

		idd = -1;
		onLoad = "uiNamespace setVariable ['Eods_Ieds_Display_hint_CHECK_VAR', _this select 0]; EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO = true;";
		onUnLoad = "uiNamespace setVariable ['Eods_Ieds_Display_hint_CHECK_VAR', displayNull]; EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO = false; EODS_IEDS_PCU_CHECK_ACCION_INTERRUMPIDA = false; terminate EODS_IEDS_PCU_DISPLAY_FUNCION;";
		fadeIn=0.2;
		fadeOut=0.2;
		movingEnable = false;
		duration = 10e10;
		name = "Eods_Ieds_Display_hint"; 

		class controls
		{

			class EODS_IEDS_Edit_1400: EODS_Text
			{
				idc = 1400;
				text = "BLAH BLAH"; //--- ToDo: Localize;
				x = 0.00729166 * safezoneW + safezoneX;
				y = 0.0161887 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.0219914 * safezoneH;
				colorBackground[] = {EODS_COLOR_FONDO_ARMA3,0.5};
				colorText[] = {1,1,1,1};
				colorShadow[] = {0,0,0,0.5};
			};

			class EODS_IEDS_Info_Text: EODS_StructuredText
			{
				idc = 1100;
				x = 0.00729166 * safezoneW + safezoneX;
				y = 0.0381801 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.109957 * safezoneH;			
				text = ""; //--- ToDo: Localize;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0.5};
			};

			class EODS_IEDS_fondo: EODS_StructuredText
			{
				idc = 1110;
				x = 0.00729166 * safezoneW + safezoneX;
				y = 0.0381801 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.0439828 * safezoneH;			
				text = ""; //--- ToDo: Localize;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.1,0.1,0.1,0.5};
			};

			class EODS_IEDS_ProgressBar: EODS_ProgressBar
			{
				idc = 1120;
				x = 0.0130208 * safezoneW + safezoneX;
				y = 0.057 * safezoneH + safezoneY;
				w = 0.120313 * safezoneW;
				h = 0.00549786 * safezoneH;			
			};

		};
	};

	class RscPicture;
	class Eods_Talon_Display_Camera {

		idd = -1;
		onLoad = "uiNamespace setVariable ['Eods_Talon_Display_Camera_CHECK_VAR', _this select 0];";
		onUnLoad = "uiNamespace setVariable ['Eods_Talon_Display_Camera_CHECK_VAR', displayNull];";
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		duration = 99999999;
		fadein = 0;
		fadeout = 0;

		class controls
		{

			class EODS_TALON_Camera: RscPicture {

				idc = 0;
				type = 0;
				style = 48;
				text = "";
				x = 0.80 * safezoneW + safezoneX;
				y = 0.68 * safezoneH + safezoneY;
				w = 0.18 * safezoneW;
				h = 0.15 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0, 0, 0, 0.3};
				font = "TahomaB";
					sizeEx = 0;
					lineSpacing = 0;
					fixedWidth = 0;
					shadow = 0;
			};
			class EODS_TALON_Text_1501: EODS_Text
			{
				idc = 1501;
				text = "BLAH BLAH"; //--- ToDo: Localize;
				x = 0.831102 * safezoneW + safezoneX;
				y = 0.774893 * safezoneH + safezoneY;
				w = 0.164584 * safezoneW;
				h = 0.0219914 * safezoneH;
				colorBackground[] = {EODS_COLOR_FONDO_ARMA3,0.5};
				colorText[] = {1,1,1,1};
				colorShadow[] = {0,0,0,0.5};
			};
		};
	};
};