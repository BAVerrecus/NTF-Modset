FNC_EODS_TOOLS_ADD_PlIERS = {		

		Pliers = "EODS_Pliers_Veh" createVehicle getPos player;
		Pliers attachTo [Player, [0.01,0,0], "granat"]; //Todo: adjust array..
		[Pliers, -90, 0] call BIS_fnc_setPitchBank;
		//Pliers setVectorDirAndUp [[0,0,-1],[0,1,0]];
		sleep 1;
		[Pliers, 0, 0] call BIS_fnc_setPitchBank;
		//Pliers setVectorDirAndUp [[0,0,-1],[0,1,0]];
		sleep 3;
		[Pliers, -90, 0] call BIS_fnc_setPitchBank;
		//Pliers setVectorDirAndUp [[0,0,-1],[0,1,0]];
		sleep 1;
		[Pliers, 0, 0] call BIS_fnc_setPitchBank;
		sleep 1;
		[Pliers, -90, 0] call BIS_fnc_setPitchBank;
};

FNC_EODS_TOOLS_RMV_PlIERS = {	

			detach Pliers;
			deleteVehicle Pliers;
};

FNC_EODS_TOOLS_ADD_MULTITOOL = {		

		MultiTool = "EODS_MultiTool_Veh" createVehicle getPos player;
		MultiTool attachTo [Player, [0.1,0,0], "granat"]; //Todo: adjust array..
		MultiTool setVectorDirAndUp [[0,0,-1],[0,1,0]];
};

FNC_EODS_TOOLS_RMV_MULTITOOL = {	

			detach MultiTool;
			deleteVehicle MultiTool;
};

FNC_EODS_TOOLS_ADD_SCREWDRIVER = {		

		Screwdriver = "EODS_Screwdriver_Veh" createVehicle getPos player;
		Screwdriver attachTo [Player, [0,0,0], "granat"]; //Todo: adjust array..
		Screwdriver setVectorDirAndUp [[0,0,-1],[0,1,0]];
};

FNC_EODS_TOOLS_RMV_SCREWDRIVER = {	

			detach Screwdriver;
			deleteVehicle Screwdriver;
};

FNC_EODS_TOOLS_ADD_MULTIMETER = {		

		Multimeter = "EODS_Multimeter_Veh" createVehicle getPos player;
		Multimeter attachTo [Player, [0,0,0], "granat"]; //Todo: adjust array..
		Multimeter setVectorDirAndUp [[0,0,-1],[0,1,0]];
};

FNC_EODS_TOOLS_RMV_MULTIMETER = {	

			detach Multimeter;
			deleteVehicle Multimeter;
};

FNC_EODS_TOOLS_ADD_MDFDKNIFE = {		

		Medford_Knife = "EODS_Medford_Knife_Veh" createVehicle getPos player;
		Medford_Knife attachTo [Player, [0,0,0], "granat"]; //Todo: adjust array..
		Medford_Knife setVectorDirAndUp [[0,0,-1],[0,1,0]];
};

FNC_EODS_TOOLS_RMV_MDFDKNIFE = {	

			detach Medford_Knife;
			deleteVehicle Medford_Knife;
};