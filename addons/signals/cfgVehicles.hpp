class CfgVehicles
{
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class Player_signals {
                displayName = "Signals";
                condition = QGVAR(enableSignals);
                statement = "hintSilent ''";
                icon = QPATHTOF(img\SignalIcon256x256.paa);
                priority = 2.6;
                showDisabled = 0;
                class kolmi_test {
                    displayName = "Radio Direction Finder";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(test));
                    showDisabled = 0;
                    icon = QPATHTOF(img\SignalIcon256x256.paa);
                };
            };
        };
	};
};
