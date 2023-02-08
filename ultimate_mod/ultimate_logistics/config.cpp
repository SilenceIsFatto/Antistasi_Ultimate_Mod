class cfgPatches
{
	class A3U_Logistics
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
		requiredAddons[] = {"A3_Data_F_AoW_Loadorder"}; // make sure it loads after default antistasi
	};
};

class A3A
{
    #include "cfgLogistics.hpp"
};