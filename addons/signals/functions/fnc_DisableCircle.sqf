#include "../script_component.hpp"

/*
* Author: kolmipilot
* hide signal circle
*
* Arguments:
* 0: unit <OBJECT>
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_DisableCircle;
*
* Public: No
*/

params ["_unit"];

closeDialog 18835;
SETVAR(ACE_player,GVAR(DialogOn),false);
/*
private _displayVarName = "Signals_CircleDisplay";

// Jeżeli display istnieje, usuń go
if (!isNull (uiNamespace getVariable _displayVarName)) then {
    // cutText usuwa aktualny cutRsc (odwrócenie cutRsc)
    cutText ["", "PLAIN"];
    uiNamespace setVariable [_displayVarName, displayNull];
};
*/
// Wyłącz kursor
//showCursor false;
