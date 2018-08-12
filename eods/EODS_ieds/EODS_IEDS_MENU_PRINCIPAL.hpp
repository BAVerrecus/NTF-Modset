class EODS_IEDS_MENU_PRINCIPAL {
	idd=-1;
	movingEnable = 1;
	enableSimulation = true;
	//onLoad="uiNamespace setVariable ['EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR', _this select 0];_nul = [] execvm '\EODS_ieds\funciones\PCU\Menus\EODS_IEDS_MENU_PRINCIPAL_CHECK.sqf';";
	onLoad="if (!EODS_IEDS_PCU_HABILITADO) then {closedialog 0;}; uiNamespace setVariable ['EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR', _this select 0]";
	onUnLoad="uiNamespace setVariable ['EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR', nil]";

class controls {

class EODS_IEDS_Picture_1200: EODS_Picture
{
	idc = 1200;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.390043 * safezoneH + safezoneY;
	w = 0.20625 * safezoneW;
	h = 0.164936 * safezoneH;
};
class EODS_IEDS_ButtonMenu_2401: EODS_Button
{
	idc = 1;
	text = "Armar"; //--- ToDo: Localize;
	x = 0.236458 * safezoneW + safezoneX;
	y = 0.42303 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0219914 * safezoneH;
};

class EODS_IEDS_ButtonMenu_2402: EODS_Button
{
	idc = 2;
	text = "Enterrar"; //--- ToDo: Localize;
	x = 0.236458 * safezoneW + safezoneX;
	y = 0.489004 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_ButtonMenu_2403: EODS_Button
{
	idc = 3;
	text = "Mover"; //--- ToDo: Localize;
	x = 0.631771 * safezoneW + safezoneX;
	y = 0.42303 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_ButtonMenu_2404: EODS_Button
{
	idc = 4;
	text = "Recoger"; //--- ToDo: Localize;
	x = 0.631771 * safezoneW + safezoneX;
	y = 0.489004 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_ButtonMenu_2405: EODS_Button
{
	idc = 5;
	text = "Inspeccionar"; //--- ToDo: Localize;
	x = 0.442708 * safezoneW + safezoneX;
	y = 0.565974 * safezoneH + safezoneY;
	w = 0.131771 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_Text_1000: EODS_Text
{
	idc = 21;
	text = "$STR_EODS_ieds_titulo_struct"; //--- ToDo: Localize;
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.599109 * safezoneH + safezoneY;
	w = 0.20625 * safezoneW;
	h = 0.0219914 * safezoneH;
	colorBackground[] = {EODS_COLOR_FONDO_ARMA3,0.5};
	colorText[] = {1,1,1,1};
	colorShadow[] = {0,0,0,0.5};
	SizeEx = "(((1 / 1.2) / 24) * 0.9)";
};
class EODS_IEDS_structuredText_1100: EODS_StructuredText
{
	idc = 22;
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.620952 * safezoneH + safezoneY;
	w = 0.20625 * safezoneW;
	h = 0.131949 * safezoneH;
	text = ""; //--- ToDo: Localize;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0.1,0.1,0.1,0.5};
};
class EODS_IEDS_Picture_1201: EODS_Picture
{
	idc = 1100;
	text = "\EODS_ieds\data\logo_menu.paa";
	x = 0.425521 * safezoneW + safezoneX;
	y = 0.280086 * safezoneH + safezoneY;
	w = 0.148958 * safezoneW;
	h = 0.109957 * safezoneH;
};
class EODS_IEDS_HELP_01_ButtonMenu_2410: EODS_Button
{
	idc = 11;
	text = "?"; //--- ToDo: Localize;
	x = 0.373958 * safezoneW + safezoneX;
	y = 0.42303 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_HELP_02_ButtonMenu_2411: EODS_Button
{
	idc = 12;
	text = "?"; //--- ToDo: Localize;
	x = 0.373958 * safezoneW + safezoneX;
	y = 0.489004 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_HELP_03_ButtonMenu_2412: EODS_Button
{
	idc = 13;
	text = "?"; //--- ToDo: Localize;
	x = 0.608854 * safezoneW + safezoneX;
	y = 0.42303 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class EODS_IEDS_HELP_04_ButtonMenu_2413: EODS_Button
{
	idc = 14;
	text = "?"; //--- ToDo: Localize;
	x = 0.608854 * safezoneW + safezoneX;
	y = 0.489004 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};

class EODS_IEDS_HELP_05_ButtonMenu_2414: EODS_Button
{
	idc = 15;
	text = "?"; //--- ToDo: Localize;
	x = 0.419792 * safezoneW + safezoneX;
	y = 0.565974 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};

};

};
