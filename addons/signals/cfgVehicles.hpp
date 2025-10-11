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
                class signal_Disperse {
                    displayName = "Disperse";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Disperse));
                    showDisabled = 0;
                    icon = QPATHTOF(img\SignalDisperse.paa);
                };
                class signal_Rally {
                    displayName = "Rally";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Rally));
                    showDisabled = 0;
                    icon = QPATHTOF(img\SignalRally.paa);
                };
                class signal_FollowMe {
                    displayName = "Follow Me";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(FollowMe));
                    showDisabled = 0;
                    icon = QPATHTOF(img\SignalRally.paa);
                };
                class signal_Rush {
                    displayName = "Rush";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Rush));
                    showDisabled = 0;
                    icon = QPATHTOF(img\SignalRush.paa);
                };
                class signal_engage{
                    displayName = "Engage";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Engage));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalEngage.paa);
                };
                class signal_HoldFire{
                    displayName = "Hold Fire";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(HoldFire));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalHoldFire.paa);
                };
                class signal_contact{
                    displayName = "Contact";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    priority = 2.6;
                    showDisabled = 0;
                    class signal_ContactLeft{
                        displayName = "Contact Left";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(ContactLeft));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\SignalContactLeft.paa);
                    };
                    class signal_ContactRight{
                        displayName = "Contact Right";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(ContactRight));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\SignalContactRight.paa);
                    };
                };
                class signal_EnemySpotted{
                    displayName = "Enemy Spotted";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(EnemySpotted));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalEnemySpotted.paa);
                };
                class signal_TakeCover{
                    displayName = "Take Cover";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(TakeCover));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalTakeCover.paa);
                };
                class signal_Halt{
                    displayName = "Halt";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Halt));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalHalt.paa);
                };
                class signal_Freeze{
                    displayName = "Freeze";
                    condition = "true";
                    exceptions[] = {"isNotSwimming"};
                    statement = QUOTE(_this call FUNC(Freeze));
                    showDisabled = 0;
                    //icon = QPATHTOF(img\SignalFreeze.paa);
                };
                class Signal_formations{
                    displayName = "Formations";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.6;
                    showDisabled = 0;
                    class formation_Wedge{
                        displayName = "Wedge";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(Wedge));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationWedge.paa);
                    };
                    class formation_Vee{
                        displayName = "Vee";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(Vee));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationVee.paa);
                    };
                    class formation_Line{
                        displayName = "Line";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(Line));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationLine.paa);
                    };
                    class formation_EchelonL{
                        displayName = "Echelon Left";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(EchelonL));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationEchelonL.paa);
                    };
                    class formation_EchelonR{
                        displayName = "Echelon Right";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(EchelonR));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationEchelonR.paa);
                    };
                    class formation_Staggered_Column{
                        displayName = "Staggered Column";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(StaggeredColumn));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\FormationStaggeredColumn.paa);
                    };
                    class formation_Column{
                        displayName = "Column";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(Column));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\FormationColumn.paa);
                    };
                    class fromation_Herringbone{
                        displayName = "Herringbone";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(Herringbone));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\FormationHerringbone.paa);
                    };
                };
                class Signal_forward {
                    displayName = "Move smb forward";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.6;
                    showDisabled = 0;
                    class forward_rto{
                        displayName = "RTO forward";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(RTOForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\RTOForward.paa);
                    };
                    class forward_PL{
                        displayName = "PL forward";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(PLForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\PLForward.paa);
                    };
                    class forward_PSgt{
                        displayName = "PSG forward";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(PSgtForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\PSgtForward.paa);
                    };
                    class forward_medic{
                        displayName = "Medic forward";
                        condition = "true";
                        exceptions[] = {"isNotSwimming"};
                        statement = QUOTE(_this call FUNC(MedicForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\MedicForward.paa);
                    };
                };
            };
        };
	};
};
