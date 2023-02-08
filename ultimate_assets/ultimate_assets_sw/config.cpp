class cfgPatches
{
	class ultimate_assets_sw
	{
		units[] =
		{
			// I refuse to re-do all of these classnames.
			"CW_Ifrit",
			"CW_Ifrit_CIS",
			"CW_Ifrit_Mando",
			"CW_Ifrit_HMG",
			"CW_Ifrit_CIS_HMG",
			"CW_Ifrit_Mando_HMG",
			"CW_Offroad_AT",
			"CW_Offroad_CIS_AT",
			"CW_Offroad_Mando_AT",
			"CW_Offroad_HMG",
			"CW_Offroad_CIS_HMG",
			"CW_Offroad_Mando_HMG",
			"CW_Offroad_Rep",
			"CW_Offroad_CIS",
			"CW_Offroad_Mando",
			"CW_SUV_Mando",
			"CW_Quadbike",
			// trucks
			"CW_argon_ammo",
			"CW_argon_covered",
			"CW_argon_device",
			"CW_argon_fuel",
			"CW_argon_medical",
			"CW_argon_repair",
			"CW_argon_transport",
			"CW_rebel_argon_ammo",
			"CW_rebel_argon_covered",
			"CW_rebel_argon_device",
			"CW_rebel_argon_fuel",
			"CW_rebel_argon_medical",
			"CW_rebel_argon_repair",
			"CW_rebel_argon_transport",
			"CW_mando_argon_ammo",
			"CW_mando_argon_covered",
			"CW_mando_argon_device",
			"CW_mando_argon_fuel",
			"CW_mando_argon_medical",
			"CW_mando_argon_repair",
			"CW_mando_argon_transport",
			// Droids
			"ultimate_assets_sw_Mando_Droid",
			// Rebel/Empire
			"CW_Ifrit_Rebel",
			"CW_Ifrit_Empire",
			"CW_Ifrit_Imperial_HMG",
			"CW_Ifrit_Rebel_HMG",
			"CW_Offroad_Rebel_AT",
			"CW_Offroad_Imperial_AT",
			"CW_Offroad_Imperial_HMG",
			"CW_Offroad_Rebel_HMG",
			"CW_Offroad_Rebel",
			"CW_Ifrit_V2_Rebel_AT",
			"CW_Ifrit_Imperial_AT",
			"CW_Offroad_Imperial"
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"ultimate_assets"};
	};
};

class CfgMarkerClasses
{
	class ultimate_assets_sw_markers_mando
	{
		displayName="Star Wars Flags";
	};

	class CW_Mando : ultimate_assets_sw_markers_mando {};
};

class cfgMarkers
{
	class Flag;
	class mando_marker_white: Flag
	{
		scope = 1; //Accessibility 1=public, 0=private
		name = "Mandalorian White"; //Name used in the Editor and other UIs
		icon = "\ultimate_assets_sw\markers\mando_white_co.paa"; //Marker icon
		texture = "\ultimate_assets_sw\markers\mando_white_co.paa"; //?
		color[] = {1, 1, 1, 1}; //Color used for the icon and text
		shadow = 0; //1=Shadow, 0=No shadow
		markerClass = "ultimate_assets_sw_markers_mando"; //?
		side = 1; //Side ID
		size = 32; //Default icon size
		showEditorMarkerColor = 1; //Whether to show icon color in the editor
	};
	class rebel_marker_white: Flag
	{
		scope = 1; //Accessibility 1=public, 0=private
		name = "Rebel White"; //Name used in the Editor and other UIs
		icon = "\ultimate_assets_sw\markers\rebel_white_co.paa"; //Marker icon
		texture = "\ultimate_assets_sw\markers\rebel_white_co.paa"; //?
		color[] = {1, 1, 1, 1}; //Color used for the icon and text
		shadow = 0; //1=Shadow, 0=No shadow
		markerClass = "ultimate_assets_sw_markers_mando"; //?
		side = 1; //Side ID
		size = 32; //Default icon size
		showEditorMarkerColor = 1; //Whether to show icon color in the editor
	};
	class imperial_marker_white: Flag
	{
		scope = 1; //Accessibility 1=public, 0=private
		name = "Imperial White"; //Name used in the Editor and other UIs
		icon = "\ultimate_assets_sw\markers\imperial_white_co.paa"; //Marker icon
		texture = "\ultimate_assets_sw\markers\imperial_white_co.paa"; //?
		color[] = {1, 1, 1, 1}; //Color used for the icon and text
		shadow = 0; //1=Shadow, 0=No shadow
		markerClass = "ultimate_assets_sw_markers_mando"; //?
		side = 1; //Side ID
		size = 32; //Default icon size
		showEditorMarkerColor = 1; //Whether to show icon color in the editor
	};
};

#include "cfgEventHandlers.hpp"
#include "cfgUserActions.hpp"

class CfgFunctions
{
	class ultimate_assets_sw
	{
		class functions
		{
			class addVehicleWeapon
			{
				file="\ultimate_assets_sw\functions\fn_addVehicleWeapon.sqf";
				postInit=0;
			};
			class startVibe
			{
				file="\ultimate_assets_sw\functions\fn_startVibe.sqf";
				postInit=0;
			};
		};
	};
};

class Extended_Init_EventHandlers 
{
	#include "cis\cfgCBA.hpp"
	#include "mando\cfgCBA.hpp"
	#include "rebel\cfgCBA.hpp"
	#include "republic\cfgCBA.hpp"
	#include "imperial\cfgCBA.hpp"
};

class CfgMagazines
{
	class CA_Magazine;
	class ultimate_assets_sw_items_droidscrap: CA_Magazine
	{
		author = "Silence";
		scope = 2;
		displayName = "Droid Scrap";
		picture = "\ultimate_assets_sw\crow_studios_co.paa";
		model = "\A3\Structures_F_EPA\Items\Food\BottlePlastic_V2_F.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Scrap that you can use to rebuild droids.";
	};
	class CW_DroidParts : ultimate_assets_sw_items_droidscrap {}; // make sure not to break stuff
	class ultimate_assets_sw_items_droidhacker: CA_Magazine
	{
		author = "Silence";
		scope = 2;
		displayName = "Droid Hacking Tool";
		picture = "\ultimate_assets_sw\crow_studios_co.paa";
		model = "\A3\Structures_F_EPA\Items\Food\BottlePlastic_V2_F.p3d";
		icon = "iconObject_circle";
		descriptionShort = "A hacking tool to repurpose enemy droids.";
	};
	class CW_DroidHacker : ultimate_assets_sw_items_droidhacker {}; // make sure not to break stuff
};

class cfgVehicles
{
	class ultimate_assets_sw_vehicle_base {scope = 2};

	class O_MRAP_02_F;
	class B_Quadbike_01_F;
	class O_MRAP_02_hmg_F;
	class I_G_Offroad_01_armed_F;
	class I_G_Offroad_01_AT_F;
	class I_G_Offroad_01_F;
	class C_SUV_01_F;

	#include "cis\cfgCIS.hpp"
	#include "mando\cfgMando.hpp"
	#include "rebel\cfgRebel.hpp"
	#include "trucks\cfgtrucks.hpp"
	#include "imperial\cfgImperial.hpp"
	#include "republic\cfgRepublic.hpp"

	#include "droids\cfgDroidsVehicle.hpp"
};

class cfgWeapons
{
	#include "droids\cfgDroidsWeapon.hpp"
};