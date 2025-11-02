#include "../script_component.hpp"

/*
* Author: kolmipilot
* Number Zero Hand Signal
*
* Arguments:
* 0 - _unit;
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_signals_NumberZero;
*
* Public: No
*/

params ["_player"];

private _playerName = [_player, false, true] call ace_common_fnc_getName;  
private _text = format["Number Zero <br/><t size='0.7'>%1</t>", _playerName];

private _nearPlayers = allPlayers select {
    _x distance _player <= GVAR(signalDistance)
};

{
    [_text, QPATHTOF(img\NumberZero.paa), [1, 1, 1], _x, 2] call ace_common_fnc_displayTextPicture;
} forEach _nearPlayers;
