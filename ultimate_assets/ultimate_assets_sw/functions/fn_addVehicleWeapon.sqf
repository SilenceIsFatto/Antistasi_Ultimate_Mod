/*
	Usage : [vehicle player, "hgun_PDW2000_F", "30Rnd_9x21_Mag", "turretName", 100] call ultimate_assets_sw_fnc_addVehicleWeapon;
*/

params ["_vehicle", "_weapon", "_mag"];

if (is3DEN) exitWith {}; // no point running in editor

_vehicle setVariable ["BIS_enableRandomization",false];

private _removeTurret = _vehicle weaponsTurret [0]; // generally this will always be 0, but not always... if so, blame me for being lazy

_vehicle removeWeaponTurret [(_removeTurret select 0), [0]];
_vehicle addWeaponTurret [_weapon, [0]];
for "i" from 1 to 3 do { _vehicle addMagazineTurret [_mag,[0]] };
_vehicle loadMagazine [[0], _weapon, _mag];