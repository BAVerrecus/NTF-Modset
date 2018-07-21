//////////////////////////////
//    Dynamic-AI-Creator    //
//    Version 3.1b - 2014   //
//--------------------------//
//    DAC_Preprocess        //
//--------------------------//
//    Script by Silola      //
//    silola@freenet.de     //
//////////////////////////////

DAC_AI_AddOn = 1;DAC_Basic_Value = 0;DAC_Init_Zone = [];DAC_Obj_Init = [];DAC_CheckZones = [];
DAC_SayArrayE = [];DAC_SayArrayW = [];DAC_SayArrayD = [];DAC_RadioArrayE = [];DAC_RadioArrayW = [];
DAC_Radio_Settings = [1000,[0,0],5,2,objNull];
DAC_Marker_Val = [0,0,[],0,[],0,[],[],0,0,0,0,0,0,[],[]];

_userPath = [];
while{count _userPath < 11} do {_userPath set[(count _userPath),DAC_Path]};
	
	if(!isNil "DAC_Single_Config") then
	{
		if(count DAC_Single_Config > 0) then
		{
			while{count DAC_Single_Config > 0} do
			{
				switch (DAC_Single_Config select ((count DAC_Single_Config) - 1)) do
				{
					case "Arti":{_userPath set[0,""];DAC_Single_Config = DAC_Single_Config - ["Arti"]};
					case "Behaviour":{_userPath set[1,""];DAC_Single_Config = DAC_Single_Config - ["Behaviour"]};
					case "Camps":{_userPath set[2,""];DAC_Single_Config = DAC_Single_Config - ["Camps"]};
					case "Events":{_userPath set[3,""];DAC_Single_Config = DAC_Single_Config - ["Events"]};
					case "Marker":{_userPath set[4,""];DAC_Single_Config = DAC_Single_Config - ["Marker"]};
					case "Objects":{_userPath set[5,""];DAC_Single_Config = DAC_Single_Config - ["Objects"]};
					case "Sound":{_userPath set[6,""];DAC_Single_Config = DAC_Single_Config - ["Sound"]};
					case "Units":{_userPath set[7,""];DAC_Single_Config = DAC_Single_Config - ["Units"]};
					case "Waypoints":{_userPath set[8,""];DAC_Single_Config = DAC_Single_Config - ["Waypoints"]};
					case "Weapons":{_userPath set[9,""];DAC_Single_Config = DAC_Single_Config - ["Weapons"]};
					Default {DAC_Single_Config = []};
				};
			};
		};
	};
	
	DAC_fChangeZone      		= compile preprocessFile "\DAC_Source\Scripts\DAC_Change_Zone.sqf";
	DAC_fNewWaypoints   		= compile preprocessFile "\DAC_Source\Scripts\DAC_New_Waypoints.sqf";
	DAC_fAISpeak        		= compile preprocessFile "\DAC_Source\Scripts\DAC_AISpeak.sqf";
	DAC_fAIRadio        		= compile preprocessFile "\DAC_Source\Scripts\DAC_AIRadio.sqf";
	DAC_fClientSpeak    		= compile preprocessFile "\DAC_Source\Scripts\DAC_ClientSpeak.sqf";
	DAC_fClientRadio    		= compile preprocessFile "\DAC_Source\Scripts\DAC_ClientRadio.sqf";
	DAC_fClientSayer    		= compile preprocessFile "\DAC_Source\Scripts\DAC_ClientSayer.sqf";
	DAC_fClientCheck    		= compile preprocessFile "\DAC_Source\Scripts\DAC_ClientCheck.sqf";
	DAC_fServerCheck    		= compile preprocessFile "\DAC_Source\Scripts\DAC_ServerCheck.sqf";
	DAC_fSectorCheck    		= compile preprocessFile "\DAC_Source\Scripts\DAC_Sector_Check.sqf";
	DAC_fMoveToBuilding 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_to_Building.sqf",DAC_AI_AddOn];
	DAC_fMoveToWaypoint 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_to_WP.sqf",DAC_AI_AddOn];
	DAC_fMoveWithTank 			= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_with_TA.sqf",DAC_AI_AddOn];
	DAC_fMoveToEnemy    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_to_Enemy.sqf",DAC_AI_AddOn];
	DAC_fMoveRandom     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Random.sqf",DAC_AI_AddOn];
	DAC_fMoveToVH       		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_to_VH.sqf",DAC_AI_AddOn];
	DAC_fMoveToFriendly 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_to_Friendly.sqf",DAC_AI_AddOn];
	DAC_fMoveWithVH     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_with_VH.sqf",DAC_AI_AddOn];
	DAC_fMoveCamp	     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Camp.sqf",DAC_AI_AddOn];
	DAC_fMoveNear	     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Near_Pos.sqf",DAC_AI_AddOn];
	DAC_fMoveAround	     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Around.sqf",DAC_AI_AddOn];
	DAC_fMoveNot	     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Not.sqf",DAC_AI_AddOn];
	DAC_fMoveSimple     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Move_Simple.sqf",DAC_AI_AddOn];
	DAC_fAddBehaviour     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Add_Behaviour.sqf",DAC_AI_AddOn];
	DAC_fScanBuilding   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Scan_Buildings.sqf",DAC_AI_AddOn];
	DAC_fHoldBuilding   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Hold_Building.sqf",DAC_AI_AddOn];
	DAC_fHoldArtiGroup  		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Hold_ArtiGroup.sqf",DAC_AI_AddOn];
	DAC_fCallArti       		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Call_Arti.sqf",DAC_AI_AddOn];
	DAC_fHitByEnemy     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Hit_by_Enemy.sqf",DAC_AI_AddOn];
	DAC_fCheckTarget     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Check_Target.sqf",DAC_AI_AddOn];
	DAC_fCheckNewTarget    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Check_NewTarget.sqf",DAC_AI_AddOn];
	DAC_fWaitForHelp			= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Wait_for_Help.sqf",DAC_AI_AddOn];
	DAC_fSmokeGren				= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Smoke_Gren.sqf",DAC_AI_AddOn];
	DAC_fRouteMarker    		= compile preprocessFile "\DAC_Source\Marker\DAC_RouteMarker.sqf";
	DAC_fLeaderMarker   		= compile preprocessFile "\DAC_Source\Marker\DAC_LeaderMarker.sqf";
	DAC_fDelPlayer      		= compile preprocessFile "\DAC_Source\Scripts\DAC_Del_Player.sqf";
	DAC_fDeleteUnit     		= compile preprocessFile "\DAC_Source\Scripts\DAC_Delete_Unit.sqf";
	DAC_fSumWaypoints   		= compile preprocessFile "\DAC_Source\Scripts\DAC_Sum_Waypoints.sqf";
	DAC_fFindMClass     		= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_MClass.sqf";
	DAC_fCheckCargo     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Check_Cargo.sqf",DAC_AI_AddOn];
	DAC_fVehicleArray     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Vehicle_Array.sqf",DAC_AI_AddOn];
	DAC_fGroupGetin     		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Group_Getin.sqf",DAC_AI_AddOn];
	DAC_fCallHelp       		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Call_Help.sqf",DAC_AI_AddOn];
	DAC_fCheckCrew      		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Check_Crew.sqf",DAC_AI_AddOn];
	DAC_fLeaveVehicle   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Leave_Vehicle.sqf",DAC_AI_AddOn];
	DAC_fSetBehaviour   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Set_Behaviour.sqf",DAC_AI_AddOn];
	DAC_fFlashMarker    		= compile preprocessFile "\DAC_Source\Marker\DAC_FlashMarker.sqf";
	DAC_fResizeMarker   		= compile preprocessFile "\DAC_Source\Marker\DAC_ResizeMarker.sqf";
	DAC_fFindGroup      		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Find_Group.sqf",DAC_AI_AddOn];
	DAC_fFindVehicle    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Find_Vehicle.sqf",DAC_AI_AddOn];
	DAC_fEnterVehicle   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Enter_Vehicle.sqf",DAC_AI_AddOn];
	DAC_fEnterGun		   		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Enter_Gun.sqf",DAC_AI_AddOn];
	DAC_fWaitingForEnd  		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Waiting_For_End.sqf",DAC_AI_AddOn];
	DAC_fSomeConditions 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Some_Conditions.sqf",DAC_AI_AddOn];
	DAC_fSimpleConditions 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Simple_Conditions.sqf",DAC_AI_AddOn];
	DAC_fOtherConditions		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Other_Conditions.sqf",DAC_AI_AddOn];
	DAC_fHeliConditions	    	= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Heli_Conditions.sqf",DAC_AI_AddOn];
	DAC_fEnemyCond      		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Enemy_Conditions.sqf",DAC_AI_AddOn];
	DAC_fCommandUnit    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Command_Unit.sqf",DAC_AI_AddOn];
	DAC_fFindPos        		= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_Pos.sqf";
	DAC_fGetWaypoints      		= compile preprocessFile "\DAC_Source\Scripts\DAC_Get_Waypoints.sqf";
	DAC_fSetWaypoints      		= compile preprocessFile "\DAC_Source\Scripts\DAC_Set_Waypoints.sqf";
	DAC_fDeleteObject   		= compile preprocessFile "\DAC_Source\Scripts\DAC_Delete_Object.sqf";
	DAC_fRemoveGroup    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Remove_Group.sqf",DAC_AI_AddOn];
	DAC_fReduceGroup    		= compile preprocessFile "\DAC_Source\Scripts\DAC_Reduce_Group.sqf";
	DAC_fAddGroup	    		= compile preprocessFile "\DAC_Source\Scripts\DAC_Add_Group.sqf";
	DAC_fInsertGroup    		= compile preprocessFile "\DAC_Source\Scripts\DAC_Insert_Group.sqf";
	DAC_fReleaseGroup    		= compile preprocessFile "\DAC_Source\Scripts\DAC_Release_Group.sqf";
	DAC_fCreateCamp     		= compile preprocessFile "\DAC_Source\Scripts\DAC_Create_Camp.sqf";
	DAC_fUnitMarker     		= compile preprocessFile "\DAC_Source\Marker\DAC_UnitMarker.sqf";
	DAC_fGroupMarker     		= compile preprocessFile "\DAC_Source\Marker\DAC_GroupMarker.sqf";
	DAC_fInsertVehicle  		= compile preprocessFile "\DAC_Source\Scripts\DAC_Insert_Vehicle.sqf";
	DAC_fShowRadio      		= compile preprocessFile "\DAC_Source\Scripts\DAC_Show_Radio.sqf";
	DAC_fConfigUnits    		= compile preprocessFile format["%1DAC_Config_Units.sqf",(_userPath select 7)];
	DAC_fConfigWeapons    		= compile preprocessFile format["%1DAC_Config_Weapons.sqf",(_userPath select 9)];
	DAC_fConfigBehav    		= compile preprocessFile format["%1DAC_Config_Behaviour.sqf",(_userPath select 1)];
	DAC_fConfigCamps    		= compile preprocessFile format["%1DAC_Config_Camps.sqf",(_userPath select 2)];
	DAC_fConfigWP       		= compile preprocessFile format["%1DAC_Config_Waypoints.sqf",(_userPath select 8)];
	DAC_fConfigObj       		= compile preprocessFile format["%1DAC_Config_Objects.sqf",(_userPath select 5)];
	DAC_fConfigMarker   		= compile preprocessFile format["%1DAC_Config_Marker.sqf",(_userPath select 4)];
	DAC_fConfigArti		   		= compile preprocessFile format["%1DAC_Config_Arti.sqf",(_userPath select 0)];
	DAC_fConfigEvents       	= compile preprocessFile format["%1DAC_Config_Events.sqf",(_userPath select 3)];
	DAC_fConfigSound			= compile preprocessFile format["%1DAC_Config_Sound.sqf",(_userPath select 6)];
	DAC_fArtiConditions 		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Arti_Conditions.sqf",DAC_AI_AddOn];
	DAC_fArtiFire       		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Arti_Fire.sqf",DAC_AI_AddOn];
	DAC_fFireArti       		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Fire_Arti.sqf",DAC_AI_AddOn];
	DAC_fFindCover	    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Find_Cover.sqf",DAC_AI_AddOn];
	DAC_fForceSpeed	    		= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Force_Speed.sqf",DAC_AI_AddOn];
	DAC_fFindPolyLog			= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_PolyLog.sqf";
	DAC_fFindWpLog				= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_WpLog.sqf";
	DAC_fFindPolyPos			= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_PolyPos.sqf";
	DAC_fFindEllipsPos			= compile preprocessFile "\DAC_Source\Scripts\DAC_Find_EllipsPos.sqf";
	DAC_fNewZone 				= compile preprocessFile "\DAC_Source\Scripts\DAC_New_Zone.sqf";
	DAC_fClearZone 				= compile preprocessFile "\DAC_Source\Scripts\DAC_Clear_Zone.sqf";
	DAC_fDeleteZone 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Delete_Zone.sqf";
	DAC_fGetMovepoints 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Get_Movepoints.sqf";
	DAC_fFillArray 				= compile preprocessFile "\DAC_Source\Scripts\DAC_Fill_Array.sqf";
	DAC_fWritePosition			= compile preprocessFile "\DAC_Source\Scripts\DAC_Write_Position.sqf";
	DAC_fInitSector				= compile preprocessFile "\DAC_Source\Scripts\DAC_Init_Sector.sqf";
	DAC_fFindSpUnit				= compile preprocessFile format["\DAC_Source\AI_%1\DAC_Find_SpUnit.sqf",DAC_AI_AddOn];
	DAC_fShuffleArray 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Shuffle_Array.sqf";
	DAC_fReadMarkers 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Read_Markers.sqf";
	DAC_fGetZoneWaypoints 		= compile preprocessFile "\DAC_Source\Scripts\DAC_Get_Zone_Waypoints.sqf";
	DAC_fReplaceZoneWaypoints 	= compile preprocessFile "\DAC_Source\Scripts\DAC_Replace_Zone_Waypoints.sqf";
	DAC_fInsideOfZones 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Inside_Of_Zones.sqf";
	DAC_fReadAllCustomPoints 	= compile preprocessFile "\DAC_Source\Scripts\DAC_Read_AllCustom_Points.sqf";
	DAC_fApplyPointsWithinZone 	= compile preprocessFile "\DAC_Source\Scripts\DAC_Apply_Points_WithinZone.sqf";
	DAC_fSplitWPWay 			= compile preprocessFile "\DAC_Source\Scripts\DAC_Split_WP_Way.sqf";