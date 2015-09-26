#define TEast 		0
#define TGuerrila	2
#define private		0
#define protected   1
#define public		2

class CfgPatches {

	class jtog_russian_units {

		units[] = {"jtog_russian_units_rifleman"};
		weapons[] = {"jtog_russian_camo_green"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Characters_F_BLUFOR"};
		version 	= "1.0.0";
		author[] 	= {"flaver"};
		authorUrl 	= "https://github.com/flaver12";

	};

};

class CfgFactionClasses {

	class jtog_russian {

		displayname="1stJTOG Russian Units";
		priority = 2;
		side = TEast;

	};

};

class CfgVehicleClasses {

	class jtog_russian_inf {

		faction="jtog_russian";
		displayname="Infantry(Woodland)";

	};
	class jtog_russian_inf_des {

		faction="jtog_russian";
		displayname="Infantry(Desert)";

	};
	class jtog_russan_veh {
		faction="jtog_russian";
		displayname="Armor"
	};

};

class CfgVehicles {

	//BI CLASSES!
	class O_Soldier_F;

	class jtog_russian_units_base_solider: O_Soldier_F {
		_generalMacro = "jtog_russian_units_base_solider";
		scope = private;
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		faction = "jtog_russian";
		vehicleClass = "jtog_russian_inf";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\jtog_russian_units\data\green_camo.paa"};
		cost = 60000;

	};
	/*
	|=======================|
	|		WOODLAND						|
	|=======================|
	*/
	class jtog_russian_units_rifleman: jtog_russian_units_base_solider {

		_generalMacro = "jtog_russian_units_rifleman";
		scope = public;
		scopeCurator = 2;
		uniformClass = "jtog_russian_camo_green";
		displayname = "Rifleman";
		linkedItems[] = {
					"H_HelmetO_ocamo",
					"V_HarnessOGL_brn",
					"HLC_Optic_1p29",
					"ItemGPS",
					"ItemMap",
					"ItemCompass",
					"ItemWatch",
					"ItemRadio",
					"NVGoggles"
				};
		respawnLinkedItems[] = {
					"H_HelmetO_ocamo",
					"V_HarnessOGL_brn",
					"HLC_Optic_1p29",
					"ItemGPS",
					"ItemMap",
					"ItemCompass",
					"ItemWatch",
					"ItemRadio",
					"NVGoggles"
				};
		weapons[] = {
					"hlc_rifle_ak74",
					"Binocular",
					"Throw",
					"Put"
				};
		respawnweapons[] = {
					"hlc_rifle_ak74",
					"Binocular",
					"Throw",
					"Put"
				};
		magazines[] = {
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"HandGrenade",
					"HandGrenade",
					"SmokeShell",
					"SmokeShell",
					"Chemlight_green",
					"Chemlight_green",
				};
		Respawnmagazines[] = {
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"HandGrenade",
					"HandGrenade",
					"SmokeShell",
					"SmokeShell",
					"Chemlight_green",
					"Chemlight_green",
				};

	};

		class jtog_russian_units_grenadier: jtog_russian_units_base_solider {

		_generalMacro = "jtog_russian_units_grenadier";
		scope = public;
		scopeCurator = 2;
		uniformClass = "jtog_russian_camo_green";
		displayname = "Grenadier";
		linkedItems[] = {
					"H_HelmetO_ocamo",
					"V_HarnessOGL_brn",
					"HLC_Optic_1p29",
					"ItemGPS",
					"ItemMap",
					"ItemCompass",
					"ItemWatch",
					"ItemRadio",
					"NVGoggles"
				};
		respawnLinkedItems[] = {
					"H_HelmetO_ocamo",
					"V_HarnessOGL_brn",
					"HLC_Optic_1p29",
					"ItemGPS",
					"ItemMap",
					"ItemCompass",
					"ItemWatch",
					"ItemRadio",
					"NVGoggles"
				};
		weapons[] = {
					"hlc_rifle_aks74_GL",
					"Binocular",
					"Throw",
					"Put"
				};
		respawnweapons[] = {
					"hlc_rifle_aks74_GL",
					"Binocular",
					"Throw",
					"Put"
				};
		magazines[] = {
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_GRD_White",
					"hlc_GRD_White",
					"hlc_GRD_White",
					"HandGrenade",
					"HandGrenade",
					"SmokeShell",
					"SmokeShell",
					"Chemlight_green",
					"Chemlight_green",
				};
		Respawnmagazines[] = {
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_30Rnd_545x39_B_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_VOG25_AK",
					"hlc_GRD_White",
					"hlc_GRD_White",
					"hlc_GRD_White",
					"HandGrenade",
					"HandGrenade",
					"SmokeShell",
					"SmokeShell",
					"Chemlight_green",
					"Chemlight_green",
				};

	};

	class jtog_russian_units_mg: jtog_russian_units_base_solider {

	_generalMacro = "jtog_russian_units_mg";
	scope = public;
	scopeCurator = 2;
	uniformClass = "jtog_russian_camo_green";
	displayname = "MG";
	linkedItems[] = {
				"H_HelmetO_ocamo",
				"V_HarnessOGL_brn",
				"ItemGPS",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio",
				"NVGoggles"
			};
	respawnLinkedItems[] = {
				"H_HelmetO_ocamo",
				"V_HarnessOGL_brn",
				"ItemGPS",
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemRadio",
				"NVGoggles"
			};
	weapons[] = {
				"hlc_rifle_aks74_GL",
				"Binocular",
				"Throw",
				"Put"
			};
	respawnweapons[] = {
				"hlc_rifle_aks74_GL",
				"Binocular",
				"Throw",
				"Put"
			};
	magazines[] = {
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_White",
				"hlc_GRD_White",
				"HandGrenade",
				"HandGrenade",
				"SmokeShell",
				"SmokeShell",
				"Chemlight_green",
				"Chemlight_green",
			};
	Respawnmagazines[] = {
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_30Rnd_545x39_B_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_VOG25_AK",
				"hlc_GRD_White",
				"hlc_GRD_White",
				"hlc_GRD_White",
				"HandGrenade",
				"HandGrenade",
				"SmokeShell",
				"SmokeShell",
				"Chemlight_green",
				"Chemlight_green",
			};

	};

};

class CfgWeapons {

	//BI CLASSES!
	class Uniform_Base;
	class UniformItem;
	class H_HelmetB;

	class jtog_russian_camo_green: Uniform_Base {
		scope = public;
		displayName = "[1st JTOG] Russian Camo(Green)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "jtog_russian_units_base_solider";
			containerClass = "Supply20";
			mass = 80;
		};
	};

 class jtog_russian_helmet : H_HelmetB {
			displayname = "[1st JTOG] Russian Helmet";
			hiddenselectionstextures[] = {"\JTOG_Uniforms\Data\Helm_Des.paa"};
			model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		class ItemInfo: ItemInfo {
			allowedslots[] = {901, 605};
			armor = 5;
			mass = 40;
			modelsides[] = {2, 3};
			passthrough = 0.1;
			uniformmodel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		};
	};

};
