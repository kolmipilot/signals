#include "\x\kolmi\addons\main\data\hpp\defineDIKCodes.hpp"

[
    LSTRING(set_cat_main), QGVAR(ShowCircle),
    [LSTRING(setting_string_KEY), LSTRING(setting_string_KEY_DISC)], {
        // Conditions: canInteract
    if (!([ACE_player, objNull, ["isNotEscorting", "isNotInside"]] call ACEFUNC(common,canInteractWith))) exitWith { false };

    if !(GETVAR(ACE_player,GVAR(DialogOn),false)) then {
        [ACE_player] call FUNC(EnableCircle);
    } else {
        call FUNC(DisableCircle);
    };

    true
    }, {}, [DIK_J, false, false, false] // Default keybind
] call CBA_fnc_addKeybind;

