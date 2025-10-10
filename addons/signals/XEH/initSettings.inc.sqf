
[
    QGVAR(signalDistance),
    "SLIDER",
    [LLSTRING(SETTING_STRING_DISTANCE), LLSTRING(SETTING_STRING_DISTANCE_DISC)],
    [LSTRING(set_cat_main)],
    [20, 200, 100, 2, false],
    true
] call CBA_fnc_addSetting;

[
    QGVAR(enableSignals),
    "CHECKBOX",
    [LLSTRING(SETTING_STRING_enable), LLSTRING(SETTING_STRING_enable_desc)],
    [LSTRING(set_cat_main)],
    [true],
    true
] call CBA_fnc_addSetting;