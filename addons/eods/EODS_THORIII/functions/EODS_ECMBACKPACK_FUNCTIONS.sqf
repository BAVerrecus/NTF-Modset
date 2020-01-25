waitUntil { sleep 0.5; !(isNull player) };
waitUntil { sleep 1.271; time > 0 };


player addEventHandler ["Respawn", {
	player execVM '\EODS_THORIII\functions\EODS_ECMBACKPACK_FUNCTIONS.sqf';
}];


private ["_idaccionJammer","_idaccionCelular","_idaccionRemoverAntena","_backpack","_actionAvailable","_actionAvailableRemoveAntena","_player","_items","_ieds","_compararArrays","_iedsCheck","_textStructureRemoverAntena","_textStructure","_textStructureJammer"];
EODS_IEDS_ECM_ENABLED = true;


_player = player;

_items = [];

_ieds = [];

_iedsCheck = [];

_actionAvailable = true;

EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE = false;

EODS_IEDS_ECM_JAMMER_ACTIVE = false;

_actionAvailableRemoveAntena = false;

_textStructureJammer = "ACTIVATE ECM BACKPACK";

_idaccionJammer = _player addAction[_textStructureJammer, "\EODS_THORIII\functions\EODS_ECMBACKPACK_JAMMING_IED.sqf",[], 1, false, true, "", ""];

//_idaccionJammer = _player addAction[_textStructureJammer, "\EODS_THORIII\functions\EODS_ECMBACKPACK_JAMMING_IED.sqf",[], 1, false, true, "", ""];

	while {EODS_IEDS_ECM_ENABLED} do
		
	{
		_player = player;
		

		_backpack = unitBackpack _player;

		if (!(_backpack isKindOf "EODS_ECMBACKPACK")) then {

			_player removeAction _idaccionJammer;

			EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE = false;

			if (EODS_IEDS_ECM_JAMMER_ACTIVE) then {

				EODS_IEDS_ECM_JAMMER_ACTIVE = false;
			};


		} else {

			if (!EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE) then {

				_idaccionJammer = _player addAction[_textStructureJammer, "\EODS_THORIII\functions\EODS_ECMBACKPACK_JAMMING_IED.sqf",[], 1, false, true, "", ""];

				EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE = true;

				_iedsCheck = [];
			};

			
		};

		_items = items _player;

		if (vehicle _player != _player) then {


		sleep 1;

		if (not alive _player) then {


			_player removeAction _idaccionJammer;

			EODS_IEDS_ECM_JAMMER_ACTION_ACTIVE = false;

			if (EODS_IEDS_ECM_JAMMER_ACTIVE) then {

				EODS_IEDS_ECM_JAMMER_ACTIVE = false;
			};			
		};
	};

};





