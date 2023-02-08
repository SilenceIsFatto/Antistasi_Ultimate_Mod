#include "script_component.hpp"

ADDON = true;

[
    "Silence_ultimate_assets_sw_Keybinds",
    "CHECKBOX",
    "Enable Meme Keybinds",
    "Star Wars Custom Mod",
	false,
    nil, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {  
        params ["_value"];
		player setVariable ["memeKeysEnabled",_value];
    }
] call CBA_fnc_addSetting;