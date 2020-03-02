class CfgPatches
{
	class BAV_WWII_ACRE
	{
		author="B.A.Verrecus";
		authors[]=
		{
			"B.A.Verrecus"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"acre_main",
			"acre_sys_rack",
			"acre_sys_intercom",
			"WW2_Core_c_WW2_Core_c",
			"ww2_core_c_if_zzz_lastloaded_c",
			"acre_main",
			"acre_sys_rack",
			"acre_sys_intercom",
			"fow_main",
			"fow_weapons_c",
			"fow_characters_c",
			"fow_characters_items_c",
			"fow_air_c",
			"fow_boats_c",
			"fow_cars_c",
			"fow_tanks_c",
			"fow_tracked_c",
			"fow_trucks_c",
			"csa38ii_tracked_c",
			"CSA38II_tracked2_c"
		};
		units[]=
		{
			"LIB_Crusader_Command",
			"LIB_Cromwell_Command",
			"LIB_JS2_43_Com",
			"LIB_M3A3_Stuart_Com",
			"LIB_M4A2_SOV_Com",
			"LIB_M4A3_75_Com",
			"LIB_M4A3_75_Tubes_Com",
			"LIB_M4A3_76_Com",
			"LIB_M4A3_76_HVSS_Com",
			"LIB_M4A4_FIREFLY_Com",
			"LIB_M5A1_Stuart_Com",
			"LIB_M8_Greyhound_Com",
			"LIB_PzBefWgIV",
			"LIB_PzBefWgV",
			"LIB_PzBefWgVI_B",
			"LIB_PzBefWgVI_E",
			"LIB_SdKfz234_1_Com",
			"LIB_SdKfz234_2_Com",
			"LIB_SdKfz234_3_Com",
			"LIB_SdKfz234_4_Com",
			"LIB_SdKfz251_Com",
			"LIB_T34_76_Com",
			"LIB_T34_85_Com",
			"csa38_cromwell_command",
			"csa38_valentineMkII_command",
			"csa38_t34cz1_commmand"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class CBA_Extended_EventHandlers_base;
class cfgVehicles
{
	class B_LIB_AssaultPack_Base;
	class Boat_F;
	class Plane_Base_F;
	class LIB_GER_Plane_base;
	class LIB_SU_Plane_base;
	class LIB_US_Plane_base;
	class Strategic;
	class NonStrategic;
	class LIB_PzKpfwIV_H;
	class LIB_PzKpfwV;
	class LIB_PzKpfwVI_B;
	class LIB_PzKpfwVI_E;
	class LIB_M4A3_75_Tubes;
	class LIB_M4A2_SOV;
	class LIB_JS2_43;
	class LIB_T34_76;
	class LIB_T34_85;
	class Car_F;
	class LIB_Car_base;
	class Truck_F;
	class LIB_Truck_base;
	class Wheeled_Apc_F;
	class LIB_SdKfz234_1;
	class LIB_SdKfz234_2;
	class LIB_SdKfz234_3;
	class LIB_SdKfz234_4;
	class LIB_M8_Greyhound;
	class LIB_SdKfz251;
    class Tank;
    class Tank_F;
	class CSA38_pzbfwI_FR;
	class CSA38_pzbfwI_DE;
	class CSA38_pzbfwI_W;
	class Bicycle;
	class CSA38Wheeled_APC;

	class LIB_Tank_base: Tank_F
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]=
		{
			"all"
		};
		acre_infantryPhoneIntercom[]=
		{
			"all"
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set";
				shortName="Radio";
				componentname="ACRE_VRC64";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]=
				{
					
					{
						"turnedout",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class Turrets;
	};
	class csa38_tank_base: Tank_F
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneCustomRinging[]=
		{
			"\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		acre_infantryPhoneControlActions[]=
		{
			"all"
		};
		acre_infantryPhoneIntercom[]=
		{
			"all"
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set";
				shortName="Radio";
				componentname="ACRE_VRC64";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]=
				{
					
					{
						"turnedout",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
	};
	class CSA38_pzkpfwI: csa38_tank_base
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={0,-2.447,-1};
		acre_infantryPhoneCustomRinging[]=
		{
			"\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzbfwI: CSA38_pzkpfwI
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.32100001,-2.4519999,-1.302};
		acre_infantryPhoneCustomRinging[]=
		{
			"\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class CSA38_pzkpfwIA: CSA38_pzkpfwI
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.377,-1.859,-1.24};
		acre_infantryPhoneCustomRinging[]=
		{
			"\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class CSA38_pzbfwIA: CSA38_pzkpfwIA
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class CSA38_pzbfwIamb_W: CSA38_pzbfwI_W
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzbfwIamb: CSA38_pzbfwI_FR
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzbfwIamb_DE: CSA38_pzbfwI_DE
	{
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzII: csa38_tank_base
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.44,-2.2720001,1};
		acre_infantryPhoneCustomRinging[]=
		{
			"Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class CSA38_pzIIID: csa38_tank_base
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.759,-3.47,-0.773};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzIIIB: CSA38_pzIIID
	{
		acre_infantryPhonePosition[]={-0.56400001,-2.7460001,0.84500003};
	};
	class CSA38_pzIIIC: CSA38_pzIIIB
	{
		displayName="PZ.Kpfw. III Ausf. C";
	};
	class CSA38_pzIIIK: CSA38_pzIIIC
	{
		displayName="PZ.Befw. III Ausf. K";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_pzIV: csa38_tank_base
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={0.51800001,-3.3169999,-0.82300001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_PzKpfwIV_H_base: LIB_Tank_base
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.44999999,-2.8,-1.1};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzBefWgIV: LIB_PzKpfwIV_H
	{
		displayName="PzBefWg IV";
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={-0.44999999,-2.8,-1.1};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};

	};
	class LIB_PzKpfwV_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={-1,-3.5999999,-0.89999998};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzBefWgV: LIB_PzKpfwV
	{
		displayName="PzBefWg V Panther";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class fow_v_panther: Tank_F
	{
		acre_infantryPhonePosition[]={0,-3.5999999,1.8};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzKpfwVI_B_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={1.025,-3.9000001,-0.80000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzKpfwVI_E_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-3.75,-1.1};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzBefWgVI_E: LIB_PzKpfwVI_B
	{
		displayName="PzBefWg VI Tiger";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_PzBefWgVI_B: LIB_PzKpfwVI_E
	{
		displayName="PzBefWg VI Ausf. B Kingtiger";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_StuG_III_G_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-2.8,-0.40000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class CSA38_StugIII: CSA38_pzIIID
	{
		acre_infantryPhonePosition[]={-0.75400001,-2.4909999,-1.02};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",
			7,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_SdKfz124_base: LIB_Tank_base
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneIntercom[]={};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class fow_v_type95_HaGo: Tank_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneIntercom[]={};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Asahi";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_JS2_43_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-3.9000001,-0.80000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",
			5,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_JS2_43_Com: LIB_JS2_43
	{
		displayName="JS-122 '43 (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Boris";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_SU85_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-3.2,-0.80000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",
			5,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_T34_76_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-2.4000001,-0.80000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",
			5,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_T34_76_Com: LIB_T34_76
	{
		displayName="T-34-76 (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Boris";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_T34_85_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={0,-3.2,-0.80000001};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",
			5,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_T34_85_Com: LIB_T34_85
	{
		displayName="T-34-85 (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Boris";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A3_75_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={-1,-2.8,-1};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUS.wss",
			6,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A3_75: LIB_M4A3_75_base
	{
		class Turrets;
	};
	class LIB_M4A3_75_Com: LIB_M4A3_75
	{
		displayName="M4A3 Sherman (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A3_75_Tubes_Com: LIB_M4A3_75_Tubes
	{
		displayName="M4A3 Sherman (Command w/wading gear)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A2_SOV_Com: LIB_M4A2_SOV
	{
		displayName="M4A2 Sherman (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anna";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Boris";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class fow_v_m4a2: Tank_F
	{
		acre_infantryPhonePosition[]={-1,-2.8,1.5};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUS.wss",
			6,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_Crusader_Base: LIB_Tank_base
	{
		class Turrets;
	};
	class LIB_Crusader_Mk3: LIB_Crusader_Base
	{
		acre_infantryPhonePosition[]={0.43000001,-2.0150001,-1.069};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LIB_Crusader_Command: LIB_Crusader_Mk3
	{
		displayName="Crusader (OP/Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa"
				};
				weapons[]=
				{
					"LIB_Besa_coax"
				};
			};
		};
	};
	class LIB_Crusader_Mk1AA: LIB_Crusader_Base
	{
		acre_infantryPhonePosition[]={0.43000001,-2.2950001,-1.169};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_Cromwell_Base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={-0.033,-2.8080001,-1.479};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
			class kurs_MG_turret;
		};
	};
	class LIB_Cromwell_Command: LIB_Cromwell_Base
	{
		displayName="Cromwell (Command)";
		crew="LIB_UK_Tank_Crew";
		editorPreview="\WW2\Core_t\IF_EditorPreviews_t\LIB_Cromwell_Mk4.jpg";
		faction="LIB_UK_ARMY";
		scope=2;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa",
					"LIB_225Rnd_Besa"
				};
				weapons[]=
				{
					"LIB_Besa_coax"
				};
				gunnerOpticsModel="\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-100;
						maxAngleX=100;
						initAngleY=0;
						minAngleY=-360;
						maxAngleY=360;
						initFov=0.19400001;
						minFov=0.19400001;
						maxFov=0.19400001;
						visionMode[]=
						{
							"Normal"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_MG_Reticle.p3d";
						opticsPPEffects[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
						OpticsFlare=1;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="\WW2\Assets_m\Vehicles\Optics_m\IF_M4A3_75_Driver_Optic.p3d";
						initFov=0.40000001;
						minFov=0.40000001;
						maxFov=0.40000001;
						opticsPPEffects[]=
						{
							"TankGunnerOptics2",
							"OpticsBlur1",
							"OpticsCHAbera1"
						};
						opticsDisablePeripherialVision=1;
					};
				};
			};
			class kurs_MG_turret: kurs_MG_turret
			{
			};
		};
	};
	class fow_v_cromwell: Tank_F
	{
		acre_infantryPhonePosition[]={-0.033,-3.2,1.5};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	class LIB_M4A4_FIREFLY: LIB_M4A3_75
	{
		acre_infantryPhonePosition[]={-1,-3.5,-1};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUS.wss",
			6,
			1,
			1,
			40
		};
	};
	class LIB_M4A4_FIREFLY_Com: LIB_M4A4_FIREFLY
	{
		displayName="M4A4 Sherman Firefly (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A3_76: LIB_M4A3_75
	{
		acre_infantryPhonePosition[]={0.2,-3.0999999,-1};
		class Turrets;
	};
	class LIB_M4A3_76_Com: LIB_M4A3_76
	{
		displayName="M4A3(76) Sherman (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M4A3_76_HVSS: LIB_M4A3_76
	{
		acre_infantryPhonePosition[]={0.2,-3.0999999,0};
	};
	class LIB_M4A3_76_HVSS_Com: LIB_M4A3_76_HVSS
	{
		displayName="M4A3E8(76) HVSS Sherman (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_M3A3_Stuart: LIB_M4A3_75
	{
		acre_infantryPhonePosition[]={-0.23800001,-2.1,-0.9};
		class Turrets: Turrets
		{
			class MainTurret;
			class kurs_MG_turret;
		};
	};
	class LIB_M3A3_Stuart_Com: LIB_M3A3_Stuart
	{
		displayName="M3A3 Stuart (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4"
				};
				weapons[]=
				{
					"LIB_M1919A4_coax"
				};
			};
			class kurs_MG_turret: kurs_MG_turret
			{
			};
		};
	};
	class LIB_M5A1_Stuart: LIB_M3A3_Stuart
	{
		acre_infantryPhonePosition[]={-0.25,-2.1,-0.9};
		class Turrets: Turrets
		{
			class MainTurret;
			class kurs_MG_turret;
		};
	};
	class LIB_M5A1_Stuart_Com: LIB_M5A1_Stuart
	{
		displayName="M5A1 Stuart (Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Baker";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4",
					"LIB_250Rnd_M1919A4"
				};
				weapons[]=
				{
					"LIB_M1919A4_coax"
				};
			};
			class kurs_MG_turret: kurs_MG_turret
			{
			};
		};
	};
	class fow_v_m5a1: Tank_F
	{
		acre_infantryPhonePosition[]={-0.25,-1.9400001,1.5};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class LIB_Churchill_base: LIB_Tank_base
	{
		acre_infantryPhonePosition[]={-0.498,-3.9349999,-1.038};
		acre_infantryPhoneCustomRinging[]=
		{
			"bav_wwii_acre\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class churchill_base_F: Tank_F
	{
		acre_infantryPhonePosition[]={-0.498,-3.9349999,-1.038};
		acre_infantryPhoneCustomRinging[]=
		{
			"bav_wwii_acre\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class csa38_tank_base2: Tank_F
	{
		acre_hasInfantryPhone=1;
		acre_infantryPhoneDisableRinging=0;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneCustomRinging[]=
		{
			"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",
			4,
			1,
			1,
			40
		};
		acre_infantryPhoneControlActions[]=
		{
			"all"
		};
		acre_infantryPhoneIntercom[]=
		{
			"all"
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Crew Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set";
				shortName="Radio";
				componentname="ACRE_VRC64";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]=
				{
					
					{
						"turnedout",
						"all"
					}
				};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]=
				{
					"intercom_1"
				};
			};
		};
		class Turrets;
	};
	class csa38_cromwell_1: csa38_tank_base2
	{
		acre_infantryPhonePosition[]={-0.107,-3.9200001,-0.99199998};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class csa38_valentineMkII: csa38_tank_base2
	{
		acre_infantryPhonePosition[]={-0.050000001,-3.2190001,-1.316};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class csa38_valentineMkII_command: csa38_valentineMkII
	{
		displayName="Valentine (OP/Command)";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
			class Rack_2
			{
				displayName="Radio Set - Bruno";
				shortName="B-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg7",
					"CSA38_ZB53mg8",
					"CSA38_ZB53mg8",
					"CSA38_ZB53mg8",
					"CSA38_ZB53mg8"
				};
				weapons[]=
				{
					"CSA38_BESAmgveh"
				};
			};
		};
	};
	class csa38_matildaii: csa38_tank_base2
	{
		acre_infantryPhonePosition[]={-0.050000001,-3.2190001,-1.316};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};	
	class csa38_m5a1: csa38_tank_base2
	{
		acre_infantryPhonePosition[]={-0.050000001,-2.2190001,-1.316};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Able";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};	
	class csa38_kolo_base: Bicycle
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	class CSA38Truck_01_base_F: Truck_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	class fow_v_lvta2: Tank_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};	
	class fow_lcvp: Boat_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	class LIB_Boat_base: Boat_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	class LIB_UniversalCarrier_base: LIB_Tank_base
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	
	class fow_v_sdkfz_222: Wheeled_APC_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class fow_v_sdkfz_234_1: Wheeled_APC_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};
	class fow_v_sdkfz_250_base: Tank_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"gunner"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
	};
	class fow_v_sdkfz_251: Tank_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"gunner"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
	};


	
	class CSA38_8rad: CSA38Wheeled_APC
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="Intercom";
				shortName="IntCm";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				masterPositions[]=
				{
					"commander"
				};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - Anton";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"commander"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={"Intercom_1"};
			};
		};
	};	
	
		
	class fow_v_universalCarrier: Tank_F
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set - aBLE";
				shortName="A-Set";
				componentname="ACRE_VRC64";
				allowedPositions[]={"gunner"};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
	};





	class LIB_WheeledTracked_APC_base: LIB_Truck_base
	{
		acre_hasInfantryPhone=0;
		acre_infantryPhoneDisableRinging=1;
		acre_infantryPhonePosition[]={0,0,0};
		acre_infantryPhoneControlActions[]={};
		acre_infantryPhoneintercom[]={};
		class AcreIntercoms
		{
		};
		class AcreRacks
		{
		};
	};
	class LIB_SdKfz_7_base: LIB_WheeledTracked_APC_base
	{
		class AcreRacks
		{
		};
	};
	class LIB_SdKfz251_base: LIB_WheeledTracked_APC_base
	{
		class AcreRacks
		{
			class Rack_1
			{
				displayName="Radio Set";
				shortName="Radio";
				componentname="ACRE_VRC64";
				allowedPositions[]=
				{
					"driver",
					
					{
						"cargo",
						4
					}
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_PRC77";
				isRadioRemovable=0;
				intercom[]=
				{
					"none"
				};
			};
		};
	};




















};

