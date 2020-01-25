if(!isServer) exitwith {};


try
{
	_iedsInMap = (getMarkerPos "mapCenter") nearObjects ["EODS_base_ied_cellphone",20000];
	
	if (count _iedsInMap > 0) then 
			{

				{		
					_RND_number = 2;
					_RND_number = Ceil random 3;		
					[_x,_RND_number] execVM "iedInit.sqf";

				} forEach _iedsInMap;
			};	
	
	
}
 catch
{[" IED initialization failed - You need a map marker called 'mapCenter' in the middle of the map","hint",true,true] call BIS_fnc_MP; };



	
	

			
				
			