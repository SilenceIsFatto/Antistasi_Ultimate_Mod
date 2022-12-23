class cfgPatches
{
	class A3U_Core
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
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "A3A_core"}; // make sure it loads after default antistasi
	};
};

class A3A
{
    #include "templates.hpp" // no need to do ultimate_core\templates.hpp
};