//AddRemoteDetails.sqf by MrEwok

 _Remote = _this select 0; 
 _DT1 = "Control_RemoteV2UVTestDT2";
 _DT2 = "Control_RemoteV2UVTestDT3";
 _DT3 = "Control_RemoteV2UVTestDT4";
 _DT4 = "Control_RemoteV2UVTestDT5";
// _posDT = getpos _Remote
// _DirDT = getdir _Remote
 
 
 
_Detail1 = createVehicle [_DT1, [0,0,0], [], 0, "CAN_COLLIDE"];
	/*_Detail1 setdir _DirDT;*/
_posDT1 = _Detail1 attachTo [_Remote, [0,0,0], "DT_Point"];



_Detail2 = createVehicle [_DT2, [0,0,0], [], 0, "CAN_COLLIDE"];
	/*_Detail2 setdir _DirDT;*/
_posDT2 = _Detail2 attachTo [_Remote, [0,0,0], "DT_Point"];




_Detail3 = createVehicle [_DT3, [0,0,0], [], 0, "CAN_COLLIDE"];
	/*_Detail3 setdir _DirDT;*/
_posDT3 = _Detail3 attachTo [_Remote, [0,0,0], "DT_Point"];




_Detail4 = createVehicle [_DT4, [0,0,0], [], 0, "CAN_COLLIDE"];
	/*_Detail4 setdir _DirDT;*/
_posDT4 = _Detail4 attachTo [_Remote, [0,0,0], "DT_Point4"];