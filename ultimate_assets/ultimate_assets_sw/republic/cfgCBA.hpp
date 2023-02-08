	class ultimate_assets_sw_ifrit_hmg_republic
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), '3AS_DC15L_F', '3AS_200Rnd_EC40_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_offroad_hmg_republic
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), '3AS_DC15L_F', '3AS_200Rnd_EC40_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_ifrit_republic
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};

	class ultimate_assets_sw_offroad_republic
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};
    
	class ultimate_assets_sw_offroad_at_republic
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};

	class ultimate_assets_sw_hoverbike
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};