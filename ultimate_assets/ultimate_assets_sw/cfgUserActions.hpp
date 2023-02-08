class CfgUserActions
{
	class ultimate_assets_sw_keybinds_meme_1
	{// This class name is used for internal representation and also for the inputAction command.
		displayName = "Meme Dance 1";
		tooltip = "";
		onActivate = "['Acts_Dance_02', player] call ultimate_assets_sw_fnc_startVibe";		// _this is always true.
		onDeactivate = "";		// _this is always false.
		onAnalog = "";	// _this is the scalar analog value.
		analogChangeThreshold = 0.1; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
	class ultimate_assets_sw_keybinds_meme_2
	{
		displayName = "Meme Dance 2";
		tooltip = "";
		onActivate = "['Acts_Dance_01', player] call ultimate_assets_sw_fnc_startVibe";		// _this is always true.
		onDeactivate = "";		// _this is always false.
		onAnalog = "";	// _this is the scalar analog value.
		analogChangeThreshold = 0.1; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
	class ultimate_assets_sw_keybinds_meme_reset
	{
		displayName = "Meme Dance Reset";
		tooltip = "";
		onActivate = "['', player] call ultimate_assets_sw_fnc_startVibe";
		onDeactivate = "";
		onAnalog = "";	// _this is the scalar analog value.
		analogChangeThreshold = 0.1; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
};

class UserActionGroups
{
	class ultimate_assets_sw_keybinds
	{
		name = "Star Wars Custom Mod Keybindings"; // Display name of your category.
		isAddon = 1;
		group[] = {
			"ultimate_assets_sw_keybinds_meme_1",
			"ultimate_assets_sw_keybinds_meme_2",
			"ultimate_assets_sw_keybinds_meme_reset"
		};
	};
};