class cfgPatches
{
	class BAV_Main_Menu
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		author="B.A.Verrecus";
	};
};
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		class NTFEinsatz
		{
			text = "NTF Addons"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = ""; // Code called upon clicking, passed arguments are [<button:Control>]
			actionText = "NTF Addons"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		class ApexProtocol
		{
			text = "NTF Addons"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = ""; // Code called upon clicking, passed arguments are [<button:Control>]
			actionText = "NTF Addons"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		class Bootcamp
		{
			text = "NTF Addons"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = ""; // Code called upon clicking, passed arguments are [<button:Control>]
			actionText = "NTF Addons"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
		class EastWind
		{
			text = "NTF Addons"; // Text displayed on the square button, converted to upper-case
			textIsQuote = 0; // 1 to add quotation marks around the text
			picture = "\bav_intro_ad\logo.paa"; // Square picture, ideally 512x512
			video = ""; // Video played on mouse hover
			action = ""; // Code called upon clicking, passed arguments are [<button:Control>]
			actionText = "NTF Addons"; // Text displayed in top left corner of on-hover white frame
			condition = "true"; // Condition for showing the spotlight
		};
	};

};