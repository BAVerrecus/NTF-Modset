class cfgPatches
{
	class BAV_Main_Menu
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"rhsusf_c_stryker"
		};
		author="B.A.Verrecus";
	};
};

class CfgMainMenuSpotlight
{


		class NTFTest
		{
			text = "NTF Maptestserver"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = "0 = [_this, 'nato-taskforce.eu', '2354', 'THX1138'] execVM '\bav_intro_ad\scripts\connect.sqf';";
			actionText = "zum NTF Maptestserver verbinden"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		
		class NTFUbung
		{
			text = "NTF Uebungsserver"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = "0 = [_this, 'nato-taskforce.eu', '2314', 'THX1138'] execVM '\bav_intro_ad\scripts\connect.sqf';";
			actionText = "zum NTF Uebungsserver verbinden"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		
		class NTFEinsatz
		{
			text = "NTF Einsatzserver"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = "0 = [_this, 'nato-taskforce.eu', '2302', 'THX1138'] execVM '\bav_intro_ad\scripts\connect.sqf';";
			actionText = "zum NTF Einsatzserver verbinden"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		
	delete ApexProtocol;
	delete BootCamp;
	delete EastWind;
	delete Orange_CampaignGerman;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Orange_Campaign;
	delete Showcase_TankDestroyers;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
	delete Tanks_Campaign_01;
	delete Contact_Campaign;
	delete gm_campaign_01;
};