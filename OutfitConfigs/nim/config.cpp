////////////////////////////////////////////////////////////////////
//DeRap: OutfitConfigs\nim\config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Feb 06 17:20:56 2023 : 'file' last modified on Mon Dec 26 02:36:48 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Nim_MVS_WarriorHelmet
	{
		units[] = {"Nim_MVS_WarriorHelmet","Nim_MVS_Heavy","nim_MVS_GorkaJacket","nim_MVS_Gorkapants"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Characters","ModularVestSystem"};
	};
};
class CfgVehicles
{
	class MVS_WarriorHelmet_Base;
	class ModularVestSystem_Heavy;
	class MVS_CombatPants_Base;
	class Modular_Pouch_Base_Medical;
	class Modular_Pouch_Base;
	class Modular_Pouch_Base_Heavy;
	class BalaclavaMask_ColorBase;
	class CombatBoots_ColorBase;
	class TacticalGloves_ColorBase;
	class GorkaPants_Flat;
	class GorkaEJacket_Flat;
	class MVS_Compact_Base;
	class GhillieSuit_ColorBase;
	class MVS_Rucksack_Base;
	class Hoodie_ColorBase;
	class INK_CamoNetPoncho_Base;
	class Modular_Belt_Base;
	class Modular_Pouch_Base_Admin;
	class Nim_MVS_WarriorHelmet: MVS_WarriorHelmet_Base
	{
		scope = 2;
		displayName = "Nim_MVS_WarriorHelmet";
		descriptionShort = "Customized Donator Item. Designed by Microsoft-Word";
		itemSize[] = {2,2};
		itemsCargoSize[] = {};
		attachments[] = {"NVG","patch_03","helmetFlashlight"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","zbytek","visor"};
		hiddenSelectionsTextures[] = {"SZ_Custom\Donator\ClanOutfits\nim\nim_OpsCore_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_OpsCore_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_OpsCore_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_Mandalorian_Helmet_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_Mandalorian_Visor_co.paa"};
	};
	class Nim_MVS_Heavy: ModularVestSystem_Heavy
	{
		scope = 2;
		displayName = "Nim_MVS_Heavy";
		descriptionShort = "Customized Donator Item. Designed by Microsoft-Word";
		itemSize[] = {4,4};
		itemsCargoSize[] = {};
		attachments[] = {"Belt_Left","VestGrenadeA","modular_pouch_11","modular_pouch_6","Belt_Right","patch_01"};
		inventorySlot[] = {"Vest","MVS_vest"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"SZ_Custom\Donator\ClanOutfits\nim\nim_MVSHeavy_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVSHeavy_co.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVSHeavy_co.paa"};
	};
	class nim_MVS_GorkaJacket: GorkaEJacket_Flat
	{
		scope = 2;
		displayName = "nim_BDUJacket";
		descriptionShort = "Customized Donator Item. Designed by Microsoft-Word";
		itemSize[] = {4,3};
		itemsCargoSize[] = {7,7};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaJacket.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaJacket.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaJacket.paa"};
	};
	class nim_MVS_Gorkapants: GorkaPants_Flat
	{
		scope = 2;
		displayName = "nim_MVS_CombatPants";
		descriptionShort = "nCustomized Donator Item. Designed by Microsoft-Word";
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,6};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaPants.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaPants.paa","SZ_Custom\Donator\ClanOutfits\nim\nim_MVS_GorkaPants.paa"};
	};
};
