class CfgMagazines {
  class IEDLandBig_Remote_Mag;
  class EODS_IED_122mm_Range_Magazine: IEDLandBig_Remote_Mag {
    ace_explosives_DelayTime = 1;
    ace_explosives_Placeable = 1;
    ace_explosives_SetupObject = "EODS_IED_Place_122mm";
    model = "EODS_ieds\meshes\122mm_USSR_IED.p3d";
    displayName = "122MM IED";
    ammo = "EODS_IED_122mm_Range_Ammo";
    author = "Chr";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    class ACE_Triggers {
        SupportedTriggers[] = {"PressurePlate","Cellphone"};
        class Command {
          FuseTime = 0.5;
          ammo = "EODS_IED_122mm_Command_Ammo";
        };
        class DeadmanSwitch: Command {};
        class Cellphone: Command {};
        class PressurePlate {
          digDistance = 0.14;
          ammo = "EODS_IED_122mm_Range_Ammo";
        };
    };
  };
class EODS_IED_122mm_Command_Magazine:EODS_IED_122mm_Range_Magazine {
    ammo = "EODS_IED_122mm_Command_Ammo";
    class ACE_Triggers {
        SupportedTriggers[] = {"PressurePlate","Cellphone"};
        class Command {
          FuseTime = 0.5;
          ammo = "EODS_IED_122mm_Command_Ammo";
        };
        class DeadmanSwitch: Command {};
          class Cellphone: Command {};
        class PressurePlate {
          digDistance = 0.14;
          ammo = "EODS_IED_122mm_Range_Ammo";
        };
    };
};

};
