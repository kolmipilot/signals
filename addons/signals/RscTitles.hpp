class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscText;
class RscButton;
class RscPicture;

class RscDisplaySignals
{
    idd = 18835;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
    duration = 1e10;
    onLoad = "uiNamespace setVariable ['RscDisplaySignals', _this select 0];";
    onUnload = "uiNamespace setVariable ['RscDisplaySignals', displayNull];";

    class controls
    {
        // central circle
        class CenterCircle: RscPicture
        {
            idc = 18800;
            text = QPATHTOF(img\SignalCircle.paa);
            style = 48;
            colorText[] = {1,1,1,0.7};
            w = 10 * GUI_GRID_W;
            h = 10 * GUI_GRID_H;
            x = 15 * GUI_GRID_W + GUI_GRID_X; // środek ekranu
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
        };

        // buttons around the circle
        class ButtonN: RscButton
        {
            idc = 18810;
            text = "N";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 15 * GUI_GRID_W + GUI_GRID_X; // środek X
            y = 4 * GUI_GRID_H + GUI_GRID_Y; // powyżej centrum
            action = QUOTE(hint 'Północ'; call FUNC(DisableCircle););
        };
        class ButtonNE: RscButton
        {
            idc = 18811;
            text = "NE";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 17 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Północ-Wschód'; call FUNC(DisableCircle););
        };
        class ButtonE: RscButton
        {
            idc = 18812;
            text = "E";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Wschód'; call FUNC(DisableCircle););
        };
        class ButtonSE: RscButton
        {
            idc = 18813;
            text = "SE";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 17 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Południowy-Wschód'; call FUNC(DisableCircle););
        };
        class ButtonS: RscButton
        {
            idc = 18814;
            text = "S";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 15 * GUI_GRID_W + GUI_GRID_X;
            y = 7.5 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Południe'; call FUNC(DisableCircle););
        };
        class ButtonSW: RscButton
        {
            idc = 18815;
            text = "SW";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 13 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Południowy-Zachód'; call FUNC(DisableCircle););
        };
        class ButtonW: RscButton
        {
            idc = 18816;
            text = "W";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 11 * GUI_GRID_W + GUI_GRID_X;
            y = 5.5 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Zachód'; call FUNC(DisableCircle););
        };
        class ButtonNW: RscButton
        {
            idc = 18817;
            text = "NW";
            w = 2 * GUI_GRID_W;
            h = 2 * GUI_GRID_H;
            x = 13 * GUI_GRID_W + GUI_GRID_X;
            y = 4 * GUI_GRID_H + GUI_GRID_Y;
            action = QUOTE(hint 'Północny-Zachód'; call FUNC(DisableCircle););
        };
    };
};

