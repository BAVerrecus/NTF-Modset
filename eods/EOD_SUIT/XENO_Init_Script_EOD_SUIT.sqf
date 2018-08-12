waitUntil {!isNull player;};


call compileFinal preprocessFileLineNumbers "\EOD_SUIT\Scripts\fn_AddEH_CBA.sqf";
call compileFinal preprocessFileLineNumbers "\EOD_SUIT\Scripts\EWK_rainfx.sqf";
call compileFinal preprocessFileLineNumbers "\EOD_SUIT\Scripts\fn_Interface_Suit.sqf";
call compileFinal preprocessFileLineNumbers "\EOD_SUIT\Scripts\fn_EOD_Helmet_EH_UI.sqf";
call compileFinal preprocessFileLineNumbers "\EOD_SUIT\Scripts\fn_Explosion.sqf";

[] spawn Script_EOD_SUIT_CBA;
[] spawn Script_EOD_SUIT_Init_EH;

if (hasInterface) then 
{
	[_this,"Spawn"] spawn EOD_SUIT_fnc_CameraCHECK;	
};	