#include "../script_component.hpp"

/*
* Author: kolmipilot
* Echelon Left formation hand signal
*
* Arguments:
* 0 - _unit;
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_signals_EchelonL;
*
* Public: No
*/

params ["_player"];

private _playerName = [_player, false, true] call ace_common_fnc_getName;  
private _text = format["ECHELON LEFT FORMATION <br/><t size='0.7'>%1</t>", _playerName];

private _nearPlayers = allPlayers select {
    _x distance _player <= GVAR(signalDistance)
};

{
    [_text, QPATHTOF(img\FormationEchelonL.paa), [1, 1, 1], _x, 2] call ace_common_fnc_displayTextPicture;
} forEach _nearPlayers;