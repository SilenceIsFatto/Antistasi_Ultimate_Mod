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
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder", "A3A_core", "A3A_Logistics"}; // make sure it loads after default antistasi
	};
};

#include "cfgTemplates.hpp"