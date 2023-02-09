////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Feb 06 17:20:56 2023 : 'file' last modified on Mon Dec 26 02:36:48 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SZ_Custom_beta
	{
		units[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{	
			"DZ_Data",
			"DZ_Pistols",
			"ModularVestSystem",
			"DZ_Characters_Gloves",
			"DayZExpansion_Scripts"
		};
		
		weapons[] = {};
	};
};
///////////////////////////////
class CfgMods
{
	class DZ_SZ_Custom_beta
	{
		dir = "SZ_Custom_beta";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SZ_Custom_beta";
		credits = "Nimkaru, DayZ Expansion";
		author = "Nimkaru, DayZ Expansion";
		authorID = "Nimkaru";
		overview="Don't get sick !";
		version = 1.2;
		extra = 0;
		type = "mod";
		
		dependencies[]= 
		{
			"Game",
			"Mission",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"SZ_Custom_beta/Scripts/3_Game"
					//! Mod name/Scripts/3_Game
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"SZ_Custom_beta/Scripts/5_Mission"
					//! Mod name/Scripts/5_Mission
				};
			};
		};
	};
};
class CfgVehicles
{
	class Flag_Base;
	class Flag_SkunkZ: Flag_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\SZ_Custom_beta\CustomFlags\Flag_skunkworkz_co.paa"};
	};
};