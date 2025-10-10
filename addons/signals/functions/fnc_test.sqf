#include "../script_component.hpp"

/*
* Author: kolmipilot
* [Description]
*
* Arguments:
* 0; _unit - 
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_signals_test;
*
* Public: No
*/

params ["_player"];
  /*  ["ace_common_displayTextStructured", ["someone is thinking of giving you items", 1.5, _unit], [_unit]] call CBA_fnc_targetEvent;
  */

private _playerName = [_player, false, true] call ace_common_fnc_getName;  
private _text = format["Chuj ci w dupe <br/><t size='0.7'>%1</t>", _playerName];

private _nearPlayers = allPlayers select {
    _x distance _player <= GVAR(signalDistance)
};

{
    [_text, QPATHTOF(img\SignalIcon256x256.paa), [1, 1, 1], _x, 2] call ace_common_fnc_displayTextPicture;
} forEach _nearPlayers;