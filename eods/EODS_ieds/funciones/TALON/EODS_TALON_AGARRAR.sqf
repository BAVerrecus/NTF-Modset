/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

scopeName "main";

private ["_talon","_objetoAgarrado","_textoEstructurado","_idaccion","_bbr","_p1","_p2","_maxWidth","_maxLength","_maxHeight","_titulo","_mensaje"];

_talon = (_this select 3) select 0;

_objetoAgarrado = (_this select 3) select 1;

_bbr = boundingBoxReal _objetoAgarrado;

_p1 = _bbr select 0;

_p2 = _bbr select 1;

_maxWidth = abs ((_p2 select 0) - (_p1 select 0));

_maxLength = abs ((_p2 select 1) - (_p1 select 1));

_maxHeight = abs ((_p2 select 2) - (_p1 select 2));

if ((_maxWidth > 1) or (_maxLength > 1) or (_maxHeight > 1)) then {

	_titulo = localize "STR_EODS_Titulo_Hint_Generico";

	_mensaje =  "<t size='1'>" + localize "STR_EODS_TALON_OBJETO_MUY_GRANDE" + "</t>";

	if (EODS_IEDS_PCU_DISPLAY_HINT_ABIERTO) then {

		terminate EODS_IEDS_PCU_DISPLAY_FUNCION;
			
		uiNamespace getVariable ["Eods_Ieds_Display_hint_CHECK_VAR", displayNull] closeDisplay 1;

		("EODS_Hint_Layer" call BIS_fnc_rscLayer) cutText ["", "PLAIN"];
			
		sleep 1;
	};

	EODS_IEDS_PCU_DISPLAY_FUNCION = [_titulo,parseText (_mensaje),20,false] spawn FNC_EODS_DISPLAY_HINT;

	breakOut "main";		
};

_escondido = _objetoAgarrado getVariable "EODS_Ieds_HIDDEN_ESCONDIDO";

if (isNil "_escondido") then {

	_escondido = false;
};

if (_escondido) then {

	EODS_TALON_IED_EXPLO_CONTACTO =  _objetoAgarrado getVariable "EODS_Ieds_HIDDEN_ESCONDIDO_IED";

	publicVariable "EODS_TALON_IED_EXPLO_CONTACTO";

	[[_talon], "EODS_TALON_ADD_EVENT_COLLISION", true, false] spawn BIS_fnc_MP;
};

if (_objetoAgarrado isKindOf "EODS_base_ied_cellphone") then {

	EODS_TALON_IED_EXPLO_CONTACTO = _objetoAgarrado;

	publicVariable "EODS_TALON_IED_EXPLO_CONTACTO";

	[[_talon], "EODS_TALON_ADD_EVENT_COLLISION", true, false] spawn BIS_fnc_MP;
};

_objetoAgarrado attachTo [_talon,[0,0.16,0], "attachpoint"];

_objetoAgarrado setVectorDirAndUp [[1,0,0],[0,1,2]];

[[_talon], "FNC_EODS_TALON_REMOVE_ACTION_AGARRAR_MANO", true, false] spawn BIS_fnc_MP;

//--------------------------------------------------------------------

//(finddisplay 46) displayRemoveEventHandler ["KeyDown", EODSidHandlerBrazo];

//---------------------------------------------------------------------

_talon animate ["OpenLeftP_Hand", _maxWidth];

_talon animate ["OpenRightP_Hand", _maxWidth];

//---------------------------------------------------------------------

_talon animate ["ExtendARM_1", 0];

waitUntil {_talon animationPhase "ExtendARM_1" == 0};

_talon animate ["RotatArm3em10Deg", 0];

waitUntil {_talon animationPhase "RotatArm3em10Deg" == 0};

_talon animate ["RotatArm2nd10Deg", 0];

waitUntil {_talon animationPhase "RotatArm2nd10Deg" == 0};

_talon animate ["RotatArm10Deg", 0];

waitUntil {_talon animationPhase "RotatArm10Deg" == 0};

//--------------------------------------------------------------------

//EODSidHandlerBrazo = (findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call FNC_EODS_TALON_CONTROL_BRAZO_KEYS"];

//--------------------------------------------------------------------

EODS_Talon_Accion_Soltar_Objeto_terminada = false;

_textoEstructurado = "<img image='\EODS_ieds\data\logo_addaction.paa' size='1.5' shadow='false'/>" + " | " + localize "STR_EODS_TALON_SOLTAR_OBJETO";

_idaccion = _talon addAction[_textoEstructurado, "EODS_Talon_Accion_Soltar_Objeto_terminada = true;"];

waitUntil {EODS_Talon_Accion_Soltar_Objeto_terminada};

_talon removeAction _idaccion;

//--------------------------------------------------------------------

//(finddisplay 46) displayRemoveEventHandler ["KeyDown", EODSidHandlerBrazo];

//---------------------------------------------------------------------

_talon animate ["RotatArm10Deg", 1];

waitUntil {_talon animationPhase "RotatArm10Deg" >= 1};

_talon animate ["RotatArm2nd10Deg", 1];

waitUntil {_talon animationPhase "RotatArm2nd10Deg" >= 1};

_talon animate ["RotatArm3em10Deg", 1];

waitUntil {_talon animationPhase "RotatArm3em10Deg" >= 1};

_talon animate ["ExtendARM_1", 10];

waitUntil {_talon animationPhase "ExtendARM_1" >= 10};

_talon animate ["OpenLeftP_Hand", 1];

_talon animate ["OpenRightP_Hand", 1];

waitUntil {_talon animationPhase "OpenLeftP_Hand" >= 1};

detach _objetoAgarrado;

_objetoAgarrado setPos [(getPos _objetoAgarrado) select 0, (getPos _objetoAgarrado) select 1, 0];

_objetoAgarrado setVectorDirAndUp [[0,0,0],[0,0,0]];

//--------------------------------------------------------------------

//EODSidHandlerBrazo = (findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call FNC_EODS_TALON_CONTROL_BRAZO_KEYS"];

//--------------------------------------------------------------------