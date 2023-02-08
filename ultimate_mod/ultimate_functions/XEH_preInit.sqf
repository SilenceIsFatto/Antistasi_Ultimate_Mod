#include "script_component.hpp"

ADDON = true;

[
    "A3U_Settings_DroidGear", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    "NOT WORKING - (CLONE WARS REBEL) Allow Droid Gear", // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    "Antistasi Ultimate", // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false,
    true, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {  
        params ["_value"];
    }
] call CBA_fnc_addSetting;