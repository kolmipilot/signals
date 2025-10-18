class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_gestures {
                displayName = "Signals";
                
           /*     class signal_contact {
                    displayName = "Contact";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    priority = 2.6;
                    showDisabled = 0;
                    class signal_ContactLeft {
                        displayName = "Contact Left";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(ContactLeft));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\SignalContactLeft.paa);
                    };
                    class signal_ContactRight {
                        displayName = "Contact Right";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(ContactRight));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\SignalContactRight.paa);
                    };
                };*/
                class Signal_forward {
                    displayName = "Call somebody";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.6;
                    showDisabled = 0;
                    class forward_rto{
                        displayName = "RTO forward";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(RTOForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\RTOForward.paa);
                    };
                    class forward_PL{
                        displayName = "PL forward";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(PLForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\PLForward.paa);
                    };
                    class forward_PSgt{
                        displayName = "PSG forward";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(PSgtForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\PSgtForward.paa);
                    };
                    class forward_medic{
                        displayName = "Medic forward";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(MedicForward));
                        showDisabled = 0;
                        //icon = QPATHTOF(img\MedicForward.paa);
                    };
                };
                class Signal_move{
                    displayName = "Movement";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.3;
                    showDisabled = 0;
                    class Move_stop{
                        displayName = "Stop";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Halt); QUOTE("ace_gestures_hold") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalHalt.paa);
                    };
                    class Move_left{
                        displayName = "Move Left";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(MoveLeft));
                        showDisabled = 0;
                        icon = QPATHTOF(img\MoveLeft.paa);
                    };
                    class Move_right{
                        displayName = "Move Right";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(MoveRight));
                        showDisabled = 0;
                        icon = QPATHTOF(img\MoveRight.paa);
                    };
                    class Move_backward{
                        displayName = "Move Backward";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(MoveBackward));
                        showDisabled = 0;
                        icon = QPATHTOF(img\MoveBackward.paa);
                    };
                    class ace_gestures_Advance{
                        displayName = "Advance";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Advance); [ARR_2(_target,'gestureAdvance')] call ace_common_fnc_doGesture);
                        showDisabled = 0;
                        icon = QPATHTOF(img\MoveAdvance.paa);
                    };
                };
                class Signal_formations{
                    displayName = "Formations";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.3;
                    showDisabled = 0;
                    class formation_Wedge{
                        displayName = "Wedge";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Wedge));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationWedge.paa);
                    };
                    class formation_Vee{
                        displayName = "Vee";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Vee));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationVee.paa);
                    };
                    class formation_Line{
                        displayName = "Line";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Line));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationLine.paa);
                    };
                    class formation_EchelonL{
                        displayName = "Echelon Left";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(EchelonL));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationEchelonL.paa);
                    };
                    class formation_EchelonR{
                        displayName = "Echelon Right";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(EchelonR));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationEchelonR.paa);
                    };
                    class formation_Staggered_Column{
                        displayName = "Staggered Column";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(StaggeredColumn));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationStaggeredColumn.paa);
                    };
                    class formation_Column{
                        displayName = "Column";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Column));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationColumn.paa);
                    };
                    class fromation_Herringbone{
                        displayName = "Herringbone";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Herringbone));
                        showDisabled = 0;
                        icon = QPATHTOF(img\FormationHerringbone.paa);
                    };
                };
                class signals_basic {
                    displayName = "Basic Signals";
                    condition = QGVAR(enableSignals);
                    statement = "hintSilent ''";
                    //icon = QPATHTOF(img\SignalIcon256x256.paa);
                    priority = 2.1;
                    showDisabled = 0;
                    class signal_Disperse {
                        displayName = "Disperse";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Disperse));
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalDisperse.paa);
                    };
                    class ace_gestures_Regroup {
                        displayName = "Rally";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Rally); QUOTE("ace_gestures_regroup") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalRally.paa);
                    };
                    class ace_gestures_Follow {
                        displayName = "Follow Me";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(FollowMe));
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalFollow.paa);
                    };
                    class ace_gestures_Go {
                        displayName = "Attack";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Attack));
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalAttack.paa);
                    };
                    class ace_gestures_Engage{
                        displayName = "Engage";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Engage); QUOTE("ace_gestures_engage") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalEngage.paa);
                    };
                    class ace_gestures_CeaseFire{
                        displayName = "Cease Fire";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(HoldFire));
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalHoldFire.paa);
                    };
                    class ace_gestures_Point{
                        displayName = "Enemy Spotted";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(EnemySpotted); QUOTE("ace_gestures_point") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalEnemySpotted.paa);
                    };
                    class ace_gestures_Cover{
                        displayName = "Take Cover";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(TakeCover); QUOTE("ace_gestures_cover") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalTakeCover.paa);
                    };
                    class ace_gestures_Hold{
                        displayName = "Hold";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Halt); QUOTE("ace_gestures_hold") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalHalt.paa);
                    };
                    class ace_gestures_Freeze{
                        displayName = "Freeze";
                        condition = "true";
                        statement = QUOTE(_this call FUNC(Freeze); QUOTE("ace_gestures_freeze") call ace_gestures_fnc_playSignal);
                        showDisabled = 0;
                        icon = QPATHTOF(img\SignalFreeze.paa);
                    };
                };
                class ace_gestures_Advance{
                    condition = "false";
                };
                class ace_gestures_Up{
                    condition = "false";
                };
                class ace_gestures_Forward{
                    condition = "false";
                };
                class ace_gestures_Warning{
                    condition = "false";
                };
                class ace_gestures_Stop{
                    condition = "false";
                };
                class ace_gestures_Regroup {
                    condition = "false";
                };
                class ace_gestures_Follow {
                    condition = "false";
                };
                class ace_gestures_Go {
                    condition = "false";
                };  
                class ace_gestures_Engage{
                    condition = "false";
                };
                class ace_gestures_CeaseFire{
                    condition = "false";
                };
                class ace_gestures_Point{
                    condition = "false";
                };
                class ace_gestures_Cover{
                    condition = "false";
                };
                class ace_gestures_Hold{
                    condition = "false";
                };
                class ace_gestures_Freeze{
                    condition = "false";
                };
            };
        };
	};
};
