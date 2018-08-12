/*
fn_Explosion.sqf
Author(s): MrEwok
Description:This Run EOD_SUIT Explosion protection
Note(s): None
*/

Dans_Une_Explosion = false;

EOD_Suit_fnc_EX_Protection = 
{
	_donnees = _this select 0;
	_unit = _donnees select 0;
	_selectionName = _donnees select 1;	
	_damage = _donnees select 2;	
	_source = _donnees select 3;	
	_projectile = _donnees select 4;	
	_liste_type_explosion = ["APERSBoundingMine_Range_Ammo","APERSMine_Range_Ammo","APERSTripMine_Wire_Ammo","AT_Mine_155mm_AMOS_range","ATMine_Range_Ammo",
	"DemoCharge_Remote_Ammo","DemoCharge_Remote_Ammo_Scripted","ClaymoreDirectionalMine_Remote_Ammo_Scripted","Bomb_04_F","Bomb_03_F",
	"GrenadeHand_stone","FuelExplosionBig","FuelExplosion","DirectionalBombCore","ClaymoreDirectionalMine_Remote_Ammo",
	"IEDUrbanSmall_Remote_Ammo","IEDUrbanBig_Remote_Ammo","IEDLandSmall_Remote_Ammo","IEDLandBig_Remote_Ammo","GrenadeHand","mini_Grenade",
	"UWMine_155mm_AMOS_range","SLAMDirectionalMine_Wire_Ammo","SatchelCharge_Remote_Ammo_Scripted","SatchelCharge_Remote_Ammo","PipeBombBase"];
	
	if (_projectile in _liste_type_explosion and {uniform player isEqualTo "EOD_Uniform"} and {vest player isEqualTo "EOD_SUIT_vest"} and {headgear player isEqualTo "EOD9_HELMET"} and {!Dans_Une_Explosion}) then 
	{
		Dans_Une_Explosion = true;
		_damage = (0.3 + random 0.5); systemchat "dans !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
		
		waituntil {isTouchingGround player};
		Dans_Une_Explosion = false;
	};	
	
	diag_log _projectile;		
	_damage
};


/*
unit: Object - Object the event handler is assigned to.
selectionName: String - Name of the selection where the unit was damaged. "" for over-all structural damage, "?" for unknown selections.
damage: Number - Resulting level of damage for the selection.
source: Object - The source unit that caused the damage.
projectile: String - Classname of the projectile that caused inflicted the damage. ("" for unknown, such as falling damage.)
*/