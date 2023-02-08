	class ultimate_assets_sw_ifrit_hmg_cis
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'SWLW_E5C', 'SWLW_E5C_mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_offroad_hmg_cis
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'SWLW_E5C', 'SWLW_E5C_mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_ifrit_cis
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};

	class ultimate_assets_sw_offroad_cis
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};
    
	class ultimate_assets_sw_offroad_at_cis
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};