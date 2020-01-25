class EODS_IEDS_MENU_CELULAR {
	idd=-1;
	movingEnable = 1;
	enableSimulation = true;
	//onLoad="uiNamespace setVariable ['EODS_IEDS_MENU_CELULAR_CHECK_VAR', _this select 0];_nul = [] execvm '\EODS_ieds\funciones\PCU\Menus\EODS_IEDS_MENU_PRINCIPAL_CHECK.sqf';";
	onLoad="uiNamespace setVariable ['EODS_IEDS_MENU_CELULAR_CHECK_VAR', _this select 0]";
	onUnLoad="uiNamespace setVariable ['EODS_IEDS_MENU_CELULAR_CHECK_VAR', nil]";

        controls[]=
            {
                EODS_IEDS_CELULAR_Picture_1201,
                EODS_IEDS_CELULAR_Picture_1200,
                EODS_IEDS_CELULAR_Button_1600,
                EODS_IEDS_CELULAR_Button_1601,
                EODS_IEDS_CELULAR_Button_1602,
                EODS_IEDS_CELULAR_Button_1603,
                EODS_IEDS_CELULAR_Button_1604,
                EODS_IEDS_CELULAR_Button_1605,
                EODS_IEDS_CELULAR_Button_1606,
                EODS_IEDS_CELULAR_Button_1607,
                EODS_IEDS_CELULAR_Button_1608,
                EODS_IEDS_CELULAR_Button_1609,
                EODS_IEDS_CELULAR_Button_1610,
                EODS_IEDS_CELULAR_Button_1611,
                EODS_IEDS_CELULAR_Button_1612,
                EODS_IEDS_CELULAR_Button_1613,
                EODS_IEDS_CELULAR_Button_1614,
                EODS_IEDS_CELULAR_Button_1615,
		EODS_IEDS_CELULAR_Edit_1401,
		EODS_IEDS_CELULAR_Edit_1402,
                EODS_IEDS_CELULAR_Edit_1400
            };

class EODS_IEDS_CELULAR_Picture_1201: EODS_Picture
{
	idc = 1201;
	text = "\EODS_ieds\data\logo_menu.paa";
	x = 0.425521 * safezoneW + safezoneX;
	y = 0.675931 * safezoneH + safezoneY;
	w = 0.148958 * safezoneW;
	h = 0.109957 * safezoneH;
};
class EODS_IEDS_CELULAR_Picture_1200: EODS_Picture
{
	idc = 1200;
	text = "\EODS_ieds\data\menu_celular.paa";
	x = 0.345313 * safezoneW + safezoneX;
	y = 0.214111 * safezoneH + safezoneY;
	w = 0.309375 * safezoneW;
	h = 0.494807 * safezoneH;
};

class EODS_IEDS_CELULAR_Button_1600: EODS_Button_celular
{
	idc = 11;
	text = "1"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '1'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_1",
		0.09,
		1
	};
	x = 0.454167 * safezoneW + safezoneX;
	y = 0.532987 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1601: EODS_Button_celular
{
	idc = 12;
	text = "2"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '2'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_2",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.543983 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1602: EODS_Button_celular
{
	idc = 13;
	text = "3"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '3'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_3",
		0.09,
		1
	};
	x = 0.522917 * safezoneW + safezoneX;
	y = 0.532987 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1603: EODS_Button_celular
{
	idc = 14;
	text = "4"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '4'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_4",
		0.09,
		1
	};
	x = 0.454167 * safezoneW + safezoneX;
	y = 0.565974 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1604: EODS_Button_celular
{
	idc = 15;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '5'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_5",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.57697 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1605: EODS_Button_celular
{
	idc = 16;
	text = "6"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '6'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_6",
		0.09,
		1
	};
	x = 0.522917 * safezoneW + safezoneX;
	y = 0.565974 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1606: EODS_Button_celular
{
	idc = 17;
	text = "7"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '7'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_7",
		0.09,
		1
	};
	x = 0.454167 * safezoneW + safezoneX;
	y = 0.598961 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1607: EODS_Button_celular
{
	idc = 18;
	text = "8"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '8'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_8",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.609957 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1608: EODS_Button_celular
{
	idc = 19;
	text = "9"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '9'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_9",
		0.09,
		1
	};
	x = 0.522917 * safezoneW + safezoneX;
	y = 0.598961 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1609: EODS_Button_celular
{
	idc = 20;
	text = "0"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_CELULAR_TEXTO = ctrlText 1400; EODS_IEDS_CELULAR_TEXTO = EODS_IEDS_CELULAR_TEXTO + '0'; ctrlSetText [1400, EODS_IEDS_CELULAR_TEXTO];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.642944 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1610: EODS_Button_celular
{
	idc = 21;
	text = "LL"; //--- ToDo: Localize;
	action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_CHECK_NUMERO_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = false;";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.454167 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1611: EODS_Button_celular
{
	idc = 22;
	text = "COL"; //--- ToDo: Localize;
	action = "if (!EODS_CELULAR_AGENDA_ACTIVA) then {ctrlSetText [1400, ''];};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.522917 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1612: EODS_Button_celular
{
	idc = 23;
	text = "SA"; //--- ToDo: Localize;
	action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_GUARDAR_NUMERO_CELULAR;";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.465625 * safezoneW + safezoneX;
	y = 0.456017 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1613: EODS_Button_celular
{
	idc = 24;
	text = "AGE"; //--- ToDo: Localize;
	action = "EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_CELULAR; EODS_CELULAR_AGENDA_ACTIVA = true;";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.511458 * safezoneW + safezoneX;
	y = 0.456017 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1614: EODS_Button_celular
{
	idc = 25;
	text = "UP"; //--- ToDo: Localize;
	action = "if (EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_SUBIR;};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.467013 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Button_1615: EODS_Button_celular
{
	idc = 26;
	text = "Down"; //--- ToDo: Localize;
	action = "if (EODS_CELULAR_AGENDA_ACTIVA) then {EODS_IEDS_NUMERO_ENVIADO = ctrlText 1400; [EODS_IEDS_NUMERO_ENVIADO] spawn FNC_EODS_PCU_AGENDA_BAJAR;};";
	soundClick[] = 
	{
		"\EODS_ieds\data\Sonidos\celu_tecla_0",
		0.09,
		1
	};
	x = 0.488542 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0229167 * safezoneW;
	h = 0.0329871 * safezoneH;
};
class EODS_IEDS_CELULAR_Edit_1401: EODS_Text
{
	idc = 1401;
	text = "$STR_EODS_ieds_Celular_Guardar"; //--- ToDo: Localize;
	x = 0.459301 * safezoneW + safezoneX;
	y = 0.425458 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
	style = ST_LEFT;
	sizeEx = "0.019 * safezoneH";
};
class EODS_IEDS_CELULAR_Edit_1402: EODS_Text
{
	idc = 1402;
	text = "$STR_EODS_ieds_Celular_Agenda"; //--- ToDo: Localize;
	x = 0.499182 * safezoneW + safezoneX;
	y = 0.425458 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
	style = ST_RIGHT;
	sizeEx = "0.019 * safezoneH";
};
class EODS_IEDS_CELULAR_Edit_1400: EODS_Text
{
	idc = 1400;
	text = ""; //--- ToDo: Localize;
	x = 0.471354 * safezoneW + safezoneX;
	y = 0.34606 * safezoneH + safezoneY;
	w = 0.0630208 * safezoneW;
	h = 0.0989614 * safezoneH;
	style = ST_CENTER;
	sizeEx = "0.019 * safezoneH";
};

};