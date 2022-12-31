class cfgPatches
{
	class A3U_Functions
	{
		units[] =
		{
			""
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "A3U_Core"}; // make sure it loads after default antistasi
	};
};

class CfgFunctions
{
	class A3U
	{
		class functions
		{
			
			class allowDroidEquipment
			{
				file="\ultimate_functions\functions\fn_allowDroidEquipment.sqf";
				postInit=0;
			};
			
		};
	};
};

class Extended_PreInit_EventHandlers {
    class A3U_XEH {
        init = "call compile preprocessFileLineNumbers 'ultimate_functions\XEH_preInit.sqf'";
    };
};