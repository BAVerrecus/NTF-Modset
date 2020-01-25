class CfgAmmo {

class IEDLandBig_Remote_Ammo;
class ACE_IEDLandBig_Command_Ammo;
class ACE_IEDLandBig_Range_Ammo;


class EODS_IED_122mm_Range_Ammo: ACE_IEDLandBig_Range_Ammo {
  ace_explosives_explodeOnDefuseChance = 0.02;
  ace_explosives_magazine = "EODS_IED_122mm_Range_Magazine";
  ace_explosives_size = 1;
  ace_minedetector_detectable = 1;

  ace_frag_enabled = 1;  // Enable fragmentation (0-disabled, 1-enabled)
  ace_frag_metal = 8000;  // Amount of metal being fragmented (grams) - information below
  ace_frag_charge = 3000;  // Amount of explosive filler (grams) - information below
  ace_frag_gurney_c = 2700;  // Gurney velocity constant for explosive type - information below
  ace_frag_gurney_k = 1/2;  // Gurney shape factor - information below
  ace_frag_classes[] = {"ace_frag_medium","ace_frag_medium_HD"};  // Type of fragments - information below
  ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled) - information below
  ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled) - information below
  mineModelDisabled = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
  model = "\EODS_ieds\meshes\122mm_USSR_IED_PP.p3d";
  defaultMagazine = "EODS_IED_122mm_Range_Magazine";
  mineTrigger = "RangeTrigger";
  scope = 2;
  scopeCurator = 2;
  scopeArsenal = 2;
};

class EODS_IED_122mm_Command_Ammo: EODS_IED_122mm_Range_Ammo {
  mineTrigger = "RemoteTrigger";
  model = "\EODS_ieds\meshes\122mm_USSR_IED.p3d";
};

};
