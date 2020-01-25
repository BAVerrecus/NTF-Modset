class CfgWeapons
{
	class Rifle;
    class Rifle_Base_F;
    class Pistol_Base_F;
    class Rifle_Long_Base_F;
	class Launcher_Base_F;
	class SMA_AssaultBase;
	class SMA_M4_BASE;
	class SMA_MK16;
	class SMA_ACRREM_BASE;
	class SMA_MK18_BASE;
	class SMA_HK416_BASE;
	class SMA_A3_BASE_F;
		
	class SMA_556_RIFLEBASE: SMA_AssaultBase
	{
		scope = 1;
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D"};
	};
	class SMA_762_RIFLEBASE: SMA_AssaultBase
	{
		scope = 1;
        magazineWell[] = {};
	};

    //AAC 7.62x35 (.300 Blackout)
    class SMA_AAC_MPW_BASE: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_300BLK_STANAG"};
    };


    //ACR 6.8 SPC
    class SMA_ACRREM: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMAFG: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMAFBCQB: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMCQBGL: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class SMA_ACRREMCQBGL_B: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMGL: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMGL_B: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMMOE: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };
    class ACRREMMOECQB: SMA_ACRREM_BASE
    {
        magazineWell[] = {"CBA_68SPC_STANAG"};
    };


    //AUG
    class SMA_AUG_A3_F: SMA_A3_BASE_F
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_CTar_BASE_F: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_Tavor_BASE_F: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_STG_BASE_F: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_Steyr_AUG_BASE_F: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };
    class SMA_SAR21_BASE_F: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STEYR"};
    };


    //HK417
    class SMA_HK417: SMA_762_RIFLEBASE
    {
        magazineWell[] = {"CBA_762x51_HK417","CBA_762x51_HK417_L","CBA_762x51_HK417_XL"};
    };


    //L85
    class SMA_L85RIS_BASE: SMA_556_RIFLEBASE
    {
        magazineWell[] = {"CBA_556x45_STANAG"};
    };


    //Minimi
    class sma_minimi_762_base_F: Rifle_Long_Base_F
    {
        magazineWell[] = {"CBA_762x51_LINKS"};
    };


    //SCAR-H
	class SMA_Mk17: SMA_762_RIFLEBASE
	{
        magazineWell[] = {"CBA_762x51_SCAR"};
	};


    //SKS
    class SMA_SKS_BASE_F: SMA_762_RIFLEBASE
    {
        magazineWell[] = {"CBA_762x39_AK"};
    };
	
    //Ameli
    class ffaa_armas_ameli: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_MINIMI"};
    };
    //L96A1
    class ffaa_armas_aw: Rifle_Base_F
    {
        magazineWell[] += {"CBA_762x51_AICS"};
    };
    //Barrett M95, AW 50
    class ffaa_armas_m95: ffaa_armas_aw
    {
        magazineWell[] = {"CBA_50BMG_M107"}; //= instead of += because inheriting from other calibre weapon
    };
    //Cetme C
    class ffaa_armas_cetme_c: Rifle_Base_F
    {
        magazineWell[] += {"CBA_762x51_G3","CBA_762x51_G3_L","CBA_762x51_G3_XL"};
    };
    //Cetme L
    class ffaa_armas_cetme_l: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_STANAG"};
    };
    //Fabarm SDASS
    class ffaa_armas_sdass: Rifle_Base_F
    {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds","CBA_12g_7rnds","CBA_12g_8rnds"};
    };
    //HK G36
    class ffaa_armas_hkg36e_normal: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_G36"};
    };
    //HK MP5
    class ffaa_armas_hkmp510a3: Rifle_Base_F
    {
        magazineWell[] += {"CBA_9x19_MP5"};
    };
    //HK UMP
    class ffaa_armas_hkmp5a5;
    class ffaa_armas_ump: ffaa_armas_hkmp5a5
    {
        magazineWell[] += {"CBA_9x19_UMP"};
    };
    //HK USP, FNP 9, Sig Sauer P226
    class ffaa_armas_usp: Pistol_Base_F
    {
        magazineWell[] += {"CBA_9x19_P226"};
    };
    //MG4
    class ffaa_armas_mg4: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_MINIMI"};
    };
    //MG-42, MG-3
    class ffaa_armas_mg3: Rifle_Base_F
    {
        magazineWell[] += {"CBA_792x57_LINKS"};
    };
    //P90
    class ffaa_armas_p90: Rifle_Base_F
    {
        magazineWell[] += {"CBA_57x28_P90"};
    };


    //G36
    class rhs_weap_g36_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_G36"};
    };
    //M-70, M-92 Zastava
    class rhs_weap_m70_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
    };
    //M-21 Zastava
    class rhs_weap_m21_base: rhs_weap_m70_base
    {
        magazineWell[] = {"CBA_556x45_M21"}; //Inherits from rhs_weap_m70_base which is other calibre
    };
    //M-76 Zastava
    class rhs_weap_m76: rhs_weap_m70_base
    {
        magazineWell[] = {"CBA_792x57_M76"}; //Inherits from rhs_weap_m70_base which is other calibre
    };
    //M84
    class rhs_weap_m84: Rifle_Long_Base_F
    {
        magazineWell[] += {"CBA_762x54R_LINKS"};
    };
    //M84A Scorpion
    class SMG_01_F;
    class rhs_weap_scorpion: SMG_01_F
    {
        magazineWell[] = {"CBA_32ACP_Vz61"}; //Inherits from SMG_01_F which is other calibre
    };


    //Izh-18
    class rhs_weap_Izh18: Rifle_Base_F
    {
        magazineWell[] += {"CBA_12g_1rnds"};
    };
    //Kar98k
    class rhs_weap_kar98k_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_792x57_K98"};
    };
    //M1 Garand
    class rhs_weap_M1garand_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_3006_Garand"};
    };
    //M3 Grease Gun
    class rhs_weap_m3a1_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_45ACP_Grease"};
    };
    //MG42
    class rhs_weap_mg42_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_792x57_LINKS"};
    };
    //Mosin Nagant M38
    class rhs_weap_m38_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_762x54R_Mosin"};
    };
    //MP44
    class rhs_weap_MP44_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_792x33_StG"};
    };
    //Sa vz. 58
    class rhs_weap_savz58_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_762x39_VZ58"};
    };
    //Sa vz. 61
    class rhs_weap_savz61: SMG_01_F
    {
        magazineWell[] = {"CBA_32ACP_Vz61"};
    };
    //VHS
    class rhs_weap_vhs2_base: Rifle_Base_F
    {
        magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_G36"};
    };

    //Assault Rifles
    //AK-74, AK-105 (5,45x39)
    class rhs_weap_ak74m_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_545x39_AK","CBA_545x39_RPK"};
    };
    class rhs_weap_ak74m;
    //AKM, AK-103, AK-104 (7,62x39)
    class rhs_weap_akm : rhs_weap_ak74m
    {
        magazineWell[] += {"CBA_762x39_AK","CBA_762x39_RPK"};
    };
    //AS-VAL, VSS Vintorez
    class rhs_weap_asval: rhs_weap_ak74m
    {
        magazineWell[] += {"CBA_9x39_VSS"};
    };

    //LMGs
    //PKM, PKP
    class rhs_pkp_base: Rifle_Long_Base_F
    {
        magazineWell[] += {"CBA_762x54R_LINKS"};
    };

    //Sniper rifles
    //SVD
    class rhs_weap_svd: rhs_weap_ak74m
    {
        magazineWell[] += {"CBA_762x54R_SVD"};
    };
    //T-5000
    class rhs_weap_orsis_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_338LM_T5000"};
    };

    //Handguns
    //PP-2000, PP-2000 (Folded)
    class hgun_PDW2000_F;
    class rhs_weap_pp2000: hgun_PDW2000_F
    {
        magazineWell[] += {"CBA_9x19_PP2000"};
    };
    //MP-443
    class hgun_Rook40_F;
    class rhs_weap_pya: hgun_Rook40_F
    {
        magazineWell[] += {"CBA_9x19_MP443"};
    };
    //Makarov PM
    class rhs_weap_makarov_pm: rhs_weap_pya
    {
        magazineWell[] += {"CBA_9x18_PM"};
    };
    //6P53
    class rhs_weap_6p53: rhs_weap_makarov_pm
    {
        magazineWell[] += {"CBA_9x21_SR1M"};
    };

    //RPG-7
    class rhs_weap_rpg7: Launcher_Base_F
    {
        magazineWell[] += {"CBA_RPG7"};
    };
    //M4, HK416, M16 etc.
    class arifle_MX_Base_F;
    class rhs_weap_m4_Base: arifle_MX_Base_F
    {
        magazineWell[] += {"CBA_556x45_STANAG","CBA_556x45_STANAG_2D"};
    };

    //Sniper rifles
    //M14
    class srifle_EBR_F;
    class rhs_weap_m14ebrri: srifle_EBR_F
    {
        magazineWell[] += {"CBA_762x51_M14"};
    };
    //Mk11
    class rhs_weap_sr25: rhs_weap_m14ebrri
    {
        magazineWell[] += {"CBA_762x51_AR10"};
    };
    //M2010
    class rhs_weap_XM2010_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_300WM_AICS"};
    };
    //M24
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F
    {
        magazineWell[] += {"CBA_762x51_5rnds"};
    };
    //M40A5
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F
    {
        magazineWell[] += {"CBA_762x51_AICS"};
    };
    //M107
    class GM6_base_F;
    class rhs_weap_M107_Base_F: GM6_base_F
    {
        magazineWell[] += {"CBA_50BMG_M107"};
    };

    //LMGs
    //M249
    class rhs_weap_saw_base: Rifle_Base_F
    {
        magazineWell[] += {"CBA_556x45_MINIMI","CBA_556x45_STANAG","CBA_556x45_STANAG_2D"};
    };
    //M240
    class rhs_weap_M249_base;
    class rhs_weap_m240_base: rhs_weap_M249_base
    {
        magazineWell[] += {"CBA_762x51_LINKS"};
    };

    //Shotguns
    //M590 Short
    class rhs_weap_M590_5RD: Rifle_Base_F
    {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds"};
    };
    //M590 Long
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD
    {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds","CBA_12g_3rnds","CBA_12g_4rnds","CBA_12g_5rnds","CBA_12g_6rnds","CBA_12g_7rnds","CBA_12g_8rnds"};
    };

    //MP7 SMG
    class SMG_02_base_F;
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
    {
        magazineWell[] += {"CBA_46x30_MP7"};
    };

    //Handguns
    //M320 GL
    class rhs_weap_M320_Base_F: Pistol_Base_F
    {
        magazineWell[] += {"CBA_40mm_M203"};
    };
    //Glock 17
    class hgun_P07_F;
    class rhsusf_weap_glock17g4: hgun_P07_F
    {
        magazineWell[] += {"CBA_9x19_Glock_Full"};
    };
    //M9
    class rhsusf_weap_m9: rhsusf_weap_glock17g4
    {
        magazineWell[] += {"CBA_9x19_M9"};
    };
    //M1911
    class hgun_ACPC2_F;
    class rhsusf_weap_m1911a1: hgun_ACPC2_F
    {
        magazineWell[] += {"CBA_45ACP_1911"};
    };

    //M32 MGL
    class rhs_weap_m32_Base_F: Rifle_Base_F
    {
        magazineWell[] += {"CBA_40mm_M203","CBA_40mm_3GL","CBA_40mm_M203_6rnds"};
    };

    //MAAWS
    class rhs_weap_maaws: Launcher_Base_F
    {
        magazineWell[] += {"CBA_Carl_Gustaf"};
    };
    //SMAW
    class rhs_weap_smaw: Launcher_Base_F
    {
        magazineWell[] += {"CBA_SMAW"};
        //SMAW Spotting Rifle
        class rhs_weap_smaw_SR: Launcher_Base_F
        {
            magazineWell[] += {"CBA_SMAW_Spotting_Rifle"};
        };
    };
	
	
	
	
	
	
	
	
	
};
