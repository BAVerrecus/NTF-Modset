#include "script_component.hpp"

class CfgPatches
{
	class sma_compat_rhs
	{
		units[]={};
		weapons[]=
		{
			"SMA_556_RIFLEBASE",
			"SMA_762_RIFLEBASE"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3",
			"SMA_StandardAmmo",
			"A3_Weapons_F",
			"ace_common",
			"SMA_Weapons"
		};
		author="Fischelsberger";
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"
class CfgWeapons
{
	class SMA_AssaultBase;
	class UGL_F;
	class SMA_M4_BASE;
	class SMA_MK16;
	class SMA_MK17;
	class SMA_ACRREM_BASE;
	class SMA_MK18_BASE;
	class SMA_HK416_BASE;
	class SMA_A3_BASE_F;
	class SMA_556_RIFLEBASE: SMA_AssaultBase
	{
	};
	class SMA_762_RIFLEBASE: SMA_AssaultBase
	{
	};
	class SMA_M4_GL: SMA_M4_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_M4_GL_SM: SMA_M4_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_Mk16_EGLM: SMA_MK16
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_Mk17_EGLM: SMA_MK17
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRGL: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRGL_B: SMA_ACRGL
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMGL: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMGL_B: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMCQBGL: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMCQBGL_B: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMGL_N: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMGL_B_N: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMCQBGL_N: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_ACRREMCQBGL_B_N: SMA_ACRREM_BASE
	{
		class ACR_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416GL: SMA_HK416_BASE
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416GLOD: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416CQBGLOD: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416_GL_ODPAINTED: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416GLCQB: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416GLCQB_B: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_HK416GLCQB_ODP: SMA_HK416GL
	{
		class HK_GL: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18TANBLK_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18TANBLK_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18TAN_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18TAN_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18BLK_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18BLK_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18ODBLK_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18ODBLK_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18OD_GL: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_MK18OD_GL_SM: SMA_MK18_BASE
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_AUG_EGLM: SMA_A3_BASE_F
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_AUG_EGLM_Olive: SMA_AUG_EGLM
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class SMA_AUG_EGLM_tan: SMA_AUG_EGLM
	{
		class EGLM: UGL_F
		{
			magazines[]+=
			{
				"rhs_mag_m4009",
				"rhs_mag_M397_HET",
				"rhs_mag_M433_HEDP",
				"rhs_mag_M441_HE",
				"rhs_mag_m576",
				"rhs_mag_M585_white",
				"rhs_mag_m661_green",
				"rhs_mag_m662_red",
				"rhs_mag_m713_Red",
				"rhs_mag_m714_White",
				"rhs_mag_m715_Green",
				"rhs_mag_m716_yellow",
				"rhs_mag_M781_Practice",
				"ACE_HuntIR_M203"
			};
		};
	};
	class arifle_MX_Base_F;
	class LMG_Mk200_F;
	class rhs_weap_saw_base;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
	};
	class rhs_weap_M249_base;
	class rhs_weap_m240_base: rhs_weap_M249_base
	{
	};
	class rhs_weap_lmg_minimipara: rhs_weap_saw_base
	{
	};
};