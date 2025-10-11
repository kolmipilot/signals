#include "../script_component.hpp"

/*
* Author: kolmipilot
* Cease Fire hand signal
*
* Arguments:
* 0 - _unit;
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_signals_HoldFire;
*
* Public: No
*/

params ["_player"];

private _playerName = [_player, false, true] call ace_common_fnc_getName;  
private _text = format["Cease FIRE <br/><t size='0.7'>%1</t>", _playerName];

private _nearPlayers = allPlayers select {
    _x distance _player <= GVAR(signalDistance)
};

{
    [_text, QPATHTOF(img\SignalDisperse.paa), [1, 1, 1], _x, 2] call ace_common_fnc_displayTextPicture;
} forEach _nearPlayers;

[ARR_2(_player,'gestureCeaseFire')] call ace_common_fnc_doGesture;
