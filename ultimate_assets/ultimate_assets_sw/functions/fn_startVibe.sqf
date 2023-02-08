/*
	Usage : ["Acts_Dance_02", player] call ultimate_assets_sw_fnc_startVibe;
*/

params ["_classname", "_target"];

if (_target getVariable "memeKeysEnabled" && vehicle _target == _target && ([_target] call ace_common_fnc_isAwake)) then {
	[_target, _classname] remoteExec ["switchMove"];
};