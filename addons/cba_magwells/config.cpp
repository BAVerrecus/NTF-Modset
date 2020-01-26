class CfgPatches
{
    class bav_cba_magwells
    {
        name = "CBA Mag Compat";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"SMA_Weapons", "ffaa_armas", "rhs_c_weapons", "rhsusf_c_weapons", "rhsgref_c_weapons", "rhssaf_c_weapons", "cba_main", "ace_common"};
        author = "B.A.Verrecus";
    };
};

#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"