#include "../script_component.hpp"

/*
* Author: kolmipilot
* Show signal circle
*
* Arguments:
* 0: unit <OBJECT>
* Return Value:
* None
*
* Example:
* [] call kolmi_fnc_enbleCircle;
*
* Public: No
*/

params ["_unit"];

SETVAR(ACE_player,GVAR(DialogOn),true);
createDialog "RscDisplaySignals";
//cutRsc ["Signals_CircleDisplay", "PLAIN"];
//"Signals_CircleDisplay" cutRsc ["Signals_CircleDisplay", "PLAIN", 0, true];

if (isNull (uiNamespace getVariable ["Signals_CircleDisplay", displayNull])) exitWith {};
