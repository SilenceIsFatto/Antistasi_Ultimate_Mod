	class ultimate_assets_sw_ifrit_hmg_mando
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'SWLW_WestarM5', 'SWLW_WestarM5_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_offroad_hmg_mando
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'SWLW_WestarM5', 'SWLW_WestarM5_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_ifrit_mando
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};

	class ultimate_assets_sw_offroad_mando
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};
    
	class ultimate_assets_sw_offroad_at_mando
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};