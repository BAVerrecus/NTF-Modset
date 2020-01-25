/*
 	Name: [EODS] EXPLOSIVE ORDNANCE DISPOSAL SUITE
 	
 	Author(s): Monovdd (Carlos Alberto Arango Schütz)

 	Note: Do not modify this file without permission.
	
	Licence: http://creativecommons.org/licenses/by-nc-sa/4.0/
*/

private ["_nombreMenu","_ied","_nombreIed","_classname","_mensaje","_clase","_pclase","_cargaExplo","_pcargaExplo","_encadenado","_remarks","_premarks","_desenterrado"];

	disableSerialization;

	_nombreMenu = uiNamespace getVariable "EODS_IEDS_MENU_PRINCIPAL_CHECK_VAR";

	_jugador = player;

	_ied = _this select 0;

	_operador = vehicle (_this select 1);

	_classname = typeOf _ied;

	_nombreIed = getText (configFile >> "cfgVehicles" >> _classname >> "displayName");

	_clase = localize "STR_EODS_ieds_inspec_clase";

	_cargaExplo = localize "STR_EODS_ieds_inspec_CExplo";

	_encadenado = _ied getVariable "EODS_ieds_IED_ENCADENADO";

	_desenterrado = _ied getVariable "EODS_Ieds_PCU_DESENTERRADO_RECIENTEMENTE";

	if (isNil "_encadenado") then {

		_encadenado = false;

	};

	if (isNil "_desenterrado") then {

		_desenterrado = false;

	};

	_remarks = localize "STR_EODS_ieds_inspec_Remark";

	if (_ied isKindOf "EODS_base_ied_cellphone") then {

		_pclase = localize "STR_EODS_ieds_inspec_clase_RCIED";

		_pcargaExplo = _nombreIed;

		if (_encadenado) then {

			if (isNil "_premarks") then {

				_premarks = localize "STR_EODS_ieds_inspec_Remark_encadenado";

			} else {

				_premarks = _premarks + " " + localize "STR_EODS_ieds_inspec_Remark_encadenado";
			};			
		};

		if (_desenterrado) then {

			if (isNil "_premarks") then {

				_premarks = localize "STR_EODS_ieds_inspec_Remark_desenterradoReciente";

			} else {

				_premarks = _premarks + " " + localize "STR_EODS_ieds_inspec_Remark_desenterradoReciente";
			};
		};


		if ((!_encadenado) && (!_desenterrado)) then {

			_premarks = localize "STR_EODS_ieds_inspec_Remark_ninguna";
		};

	};
	
	_mensaje =  "<br/>" + "<t size='1'>" + _clase + " " + _pclase + "<br/>" + _cargaExplo + " " + _nombreIed + "<br/>" + _remarks + " " + _premarks + "</t>";

	ctrlShow [21, true];
	
	ctrlShow [22, true];

	(_nombreMenu displayCtrl 22) ctrlSetStructuredText parseText (_mensaje);

	ctrlShow [1, false];

	ctrlShow [2, false];

	ctrlShow [3, false];

	ctrlShow [4, false];

	ctrlShow [11, false];

	ctrlShow [12, false];

	ctrlShow [13, false];

	ctrlShow [14, false];

	if (_operador isKindOf "TALON_MARKII_Base") then {

		ctrlShow [5, false];

		ctrlShow [15, false];

	} else {

		(_nombreMenu displayCtrl 5) ctrlSetText localize "STR_EODS_ieds_Desactivar";

		buttonSetAction [5, "[EODS_ied_para_menu] spawn FNC_EODS_IEDS_PCU_CARGAR_MENU_DESACTIVAR;"];

		buttonSetAction [15, "['STR_EODS_Titulo_Hint_Ayuda_DesactivarManualmente'] spawn FNC_EODS_IEDS_PCU_AYUDA_HINT;"];
			
	};