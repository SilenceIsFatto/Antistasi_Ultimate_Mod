	class ultimate_assets_sw_ifrit_hmg_imperial
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'JMSLLTE_rt97cBlasterRifle', 'JMSLLTE_RT97C_150Rnd_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_offroad_hmg_imperial
	{
		class ultimate_assets_sw_addVehicleWeapon 
		{
            init = "[(_this select 0), 'JMSLLTE_rt97cBlasterRifle', 'JMSLLTE_RT97C_150Rnd_Mag'] call ultimate_assets_sw_fnc_addVehicleWeapon";
		};
	};

	class ultimate_assets_sw_ifrit_imperial
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};

	class ultimate_assets_sw_offroad_imperial
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};
    
	class ultimate_assets_sw_offroad_at_imperial
	{
		class ultimate_assets_sw_vehicle_init
		{
            init = "(_this select 0) setVariable [""BIS_enableRandomization"",false]";
		};
	};