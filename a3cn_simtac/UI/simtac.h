#include "CustomControlClasses.h"
class simtac
{
	idd = 5000;
	
	class ControlsBackground
	{
		class backgroundWindow
		{
		     type = 0;
		     idc = 3000;
            x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.1375;
			w = safeZoneW * 0.80625;
			h = safeZoneH * 0.87111112;			
             style = 0;
		     text = "";
		     colorBackground[] = {0.8,0.8,0.8,1};
		     colorText[] = {0.4157,0.5059,0.3333,1};
		     font = "PuristaMedium";
		     sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		
		 };
        class rightBackgroundWindow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.8;
            y = safeZoneY + safeZoneH * 0;
			w = safeZoneW * 0.2125;
			h = safeZoneH * 1;
			style = 0;
			text = "";
			colorBackground[] = {0.8,0.8,0.8,1};
			colorText[] = {0.4157,0.5059,0.3333,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class titleWindow
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0;
			w = safeZoneW * 1.0125;
			h = safeZoneH * 0.05;
			style = 0;
			text = "   A3CN Sim Tac";
			colorBackground[] = {0,0.102,0.502,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
		class navbar
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * -0.03125;
			y = safeZoneY + safeZoneH * 0.05;
			w = safeZoneW * 1.0375;
			h = safeZoneH * 0.05888889;
            style = 0;
			text = "";
			colorBackground[] = {0.8,0.8,0.8,1};
			colorText[] = {0.2431,0.7922,0.1137,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			
		};
        class satWindow
		{
			access = 0;
            idc = 1010;
            type = 101;
            style = 48;
            moveOnEdges = 1;
            shadow = 0;
            
            onMouseButtonDblClick = "_this call simtac_fnc_startSatellite";

            
            colorBackground[] = {1.00, 1.00, 1.00, 1.00};
            colorSea[] = {0.56, 0.80, 0.98, 0.50};
            colorForest[] = {0.60, 0.80, 0.20, 0.50};
            colorRocks[] = {0.50, 0.50, 0.50, 0.50};
            colorCountlines[] = {0.65, 0.45, 0.27, 0.50};
            colorMainCountlines[] = {0.65, 0.45, 0.27, 1.00};
            colorCountlinesWater[] = {0.00, 0.53, 1.00, 0.50};
            colorMainCountlinesWater[] = {0.00, 0.53, 1.00, 1.00};
            colorForestBorder[] = {0.40, 0.80, 0.00, 1.00};
            colorRocksBorder[] = {0.50, 0.50, 0.50, 1.00};
            colorPowerLines[] = {0.00, 0.00, 0.00, 1.00};
            colorNames[] = {0.00, 0.00, 0.00, 1.00};
            colorInactive[] = {1.00, 1.00, 1.00, 0.50};
            colorLevels[] = {0.00, 0.00, 0.00, 1.00};



            ptsPerSquareSea = 5;
            ptsPerSquareTxt = 3;
            ptsPerSquareCLn = 10;
            ptsPerSquareExp = 10;
            ptsPerSquareCost = 10;
            ptsPerSquareFor = 9;
            ptsPerSquareForEdge = 9;
            ptsPerSquareRoad = 6;
            ptsPerSquareObj = 9;
            showCountourInterval = 0;
            scaleMin = 0.001;
            scaleMax = 1;
            scaleDefault = 0.16;
            maxSatelliteAlpha = 0.85;
            alphaFadeStartScale = 0.35;
            alphaFadeEndScale = 0.4;
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.10777778;
            w = safeZoneW * 0.80625;
			h = safeZoneH * 0.90111112;

            fontLabel = "PuristaMedium";
            sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontGrid = "TahomaB";
            sizeExGrid = 0.02;
            fontUnits = "TahomaB";
            sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontNames = "PuristaMedium";
            sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
            fontInfo = "PuristaMedium";
            sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontLevel = "TahomaB";
            sizeExLevel = 0.02;
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            text = "#(argb,8,8,3)color(1,1,1,1)";

		};
        class uavWindow
		{
			access = 0;
            idc = 1020;
            type = 101;
            style = 48;
            moveOnEdges = 1;
            shadow = 0;
            

            onMouseButtonDblClick = "_this call simtac_fnc_createNewUAV";
            
            colorBackground[] = {1.00, 1.00, 1.00, 1.00};
            colorSea[] = {0.56, 0.80, 0.98, 0.50};
            colorForest[] = {0.60, 0.80, 0.20, 0.50};
            colorRocks[] = {0.50, 0.50, 0.50, 0.50};
            colorCountlines[] = {0.65, 0.45, 0.27, 0.50};
            colorMainCountlines[] = {0.65, 0.45, 0.27, 1.00};
            colorCountlinesWater[] = {0.00, 0.53, 1.00, 0.50};
            colorMainCountlinesWater[] = {0.00, 0.53, 1.00, 1.00};
            colorForestBorder[] = {0.40, 0.80, 0.00, 1.00};
            colorRocksBorder[] = {0.50, 0.50, 0.50, 1.00};
            colorPowerLines[] = {0.00, 0.00, 0.00, 1.00};
            colorNames[] = {0.00, 0.00, 0.00, 1.00};
            colorInactive[] = {1.00, 1.00, 1.00, 0.50};
            colorLevels[] = {0.00, 0.00, 0.00, 1.00};



            ptsPerSquareSea = 5;
            ptsPerSquareTxt = 3;
            ptsPerSquareCLn = 10;
            ptsPerSquareExp = 10;
            ptsPerSquareCost = 10;
            ptsPerSquareFor = 9;
            ptsPerSquareForEdge = 9;
            ptsPerSquareRoad = 6;
            ptsPerSquareObj = 9;
            showCountourInterval = 0;
            scaleMin = 0.001;
            scaleMax = 1;
            scaleDefault = 0.16;
            maxSatelliteAlpha = 0.85;
            alphaFadeStartScale = 0.35;
            alphaFadeEndScale = 0.4;
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.10777778;
            w = safeZoneW * 0.80625;
			h = safeZoneH * 0.90111112;
            
            fontLabel = "PuristaMedium";
            sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontGrid = "TahomaB";
            sizeExGrid = 0.02;
            fontUnits = "TahomaB";
            sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontNames = "PuristaMedium";
            sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
            fontInfo = "PuristaMedium";
            sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontLevel = "TahomaB";
            sizeExLevel = 0.02;
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            text = "#(argb,8,8,3)color(1,1,1,1)";

		
		};

		class mapWindow
		{
			access = 0;
            idc = 1000;
            type = 101;
            style = 48;
            moveOnEdges = 1;
            shadow = 0;
            
            colorBackground[] = {1.00, 1.00, 1.00, 1.00};
            colorSea[] = {0.56, 0.80, 0.98, 0.50};
            colorForest[] = {0.60, 0.80, 0.20, 0.50};
            colorRocks[] = {0.50, 0.50, 0.50, 0.50};
            colorCountlines[] = {0.65, 0.45, 0.27, 0.50};
            colorMainCountlines[] = {0.65, 0.45, 0.27, 1.00};
            colorCountlinesWater[] = {0.00, 0.53, 1.00, 0.50};
            colorMainCountlinesWater[] = {0.00, 0.53, 1.00, 1.00};
            colorForestBorder[] = {0.40, 0.80, 0.00, 1.00};
            colorRocksBorder[] = {0.50, 0.50, 0.50, 1.00};
            colorPowerLines[] = {0.00, 0.00, 0.00, 1.00};
            colorNames[] = {0.00, 0.00, 0.00, 1.00};
            colorInactive[] = {1.00, 1.00, 1.00, 0.50};
            colorLevels[] = {0.00, 0.00, 0.00, 1.00};



            ptsPerSquareSea = 5;
            ptsPerSquareTxt = 3;
            ptsPerSquareCLn = 10;
            ptsPerSquareExp = 10;
            ptsPerSquareCost = 10;
            ptsPerSquareFor = 9;
            ptsPerSquareForEdge = 9;
            ptsPerSquareRoad = 6;
            ptsPerSquareObj = 9;
            showCountourInterval = 0;
            scaleMin = 0.001;
            scaleMax = 1;
            scaleDefault = 0.16;
            maxSatelliteAlpha = 0.85;
            alphaFadeStartScale = 0.35;
            alphaFadeEndScale = 0.4;
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.10777778;
            w = safeZoneW * 0.80625;
			h = safeZoneH * 0.90111112;

            fontLabel = "PuristaMedium";
            sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontGrid = "TahomaB";
            sizeExGrid = 0.02;
            fontUnits = "TahomaB";
            sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontNames = "PuristaMedium";
            sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
            fontInfo = "PuristaMedium";
            sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontLevel = "TahomaB";
            sizeExLevel = 0.02;
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            text = "#(argb,8,8,3)color(1,1,1,1)";

			
		};
        class mapRightWindow
		{
            access = 0;
            idc = -1;
            type = 101;
            style = 48;
            
            moveOnEdges = 1;
            shadow = 0;
            ptsPerSquareSea = 5;
            ptsPerSquareTxt = 3;
            ptsPerSquareCLn = 10;
            ptsPerSquareExp = 10;
            ptsPerSquareCost = 10;
            ptsPerSquareFor = 9;
            ptsPerSquareForEdge = 9;
            ptsPerSquareRoad = 6;
            ptsPerSquareObj = 9;
            showCountourInterval = 0;
            scaleMin = 0.001;
            scaleMax = 1;
            scaleDefault = 0.16;
            maxSatelliteAlpha = 0.85;
            alphaFadeStartScale = 0.35;
            alphaFadeEndScale = 0.4;
            colorBackground[] = {0.969,0.957,0.949,1};
            colorSea[] = {0.467,0.631,0.851,0.5};
            colorForest[] = {0.4,1,0.4,0.3};
            colorForestBorder[] = {0,0,0,0};
            colorRocks[] = {0,0,0,0.3};
            colorRocksBorder[] = {0,0,0,0};
            colorLevels[] = {0,0,0,1};
            colorMainCountlines[] = {1,0,0,1};
            colorCountlines[] = {1,0,0,0.5};
            colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
            colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
            colorPowerLines[] = {0.1,0.1,0.1,1};
            colorRailWay[] = {0.8,0.2,0,1};
            colorNames[] = {0,0,0,1};
            colorInactive[] = {1,1,1,0.5};
            colorOutside[] = {0.5,0.5,0.5,1};
            colorTracks[] = {0.84,0.76,0.65,1};
            colorTracksFill[] = {0.84,0.76,0.65,1};
            colorRoads[] = {1,0.8,0,1};
            colorRoadsFill[] = {1,0.8,0,1};
            colorMainRoads[] = {1,0.6,0.4,1};
            colorMainRoadsFill[] = {1,0.6,0.4,1};
            colorGrid[] = {0.1,0.1,0.1,0.6};
            colorGridMap[] = {0.1,0.1,0.1,0.6};
            fontLabel = "PuristaMedium";
            sizeExLabel = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontGrid = "TahomaB";
            sizeExGrid = 0.02;
            fontUnits = "TahomaB";
            sizeExUnits = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontNames = "PuristaMedium";
            sizeExNames = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
            fontInfo = "PuristaMedium";
            sizeExInfo = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
            fontLevel = "TahomaB";
            sizeExLevel = 0.02;
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            text = "#(argb,8,8,3)color(1,1,1,1)";
            SizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            
            x = safeZoneX + safeZoneW * 0.80859375;
			y = safeZoneY + safeZoneH * 0.69027778;
			w = safeZoneW * 0.18359375;
			h = safeZoneH * 0.90111112;			
		};

	};
	class Controls
	{
		class uavMapMode 
		{
			type = 1;
			idc = 2000;
			x = safeZoneX + safeZoneW * 0.225;
			y = safeZoneY + safeZoneH * 0.05555556;
            w = safeZoneW * 0.0875;
			h = safeZoneH * 0.04444445;
			style = 0+2;
			text = "UAV";
			borderSize = 0;
			colorBackground[] = {0.6762,0.6762,0.6762,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            onMouseButtonClick="[1020] call simtac_fnc_dialogControl"
			
		};
		class navMapMode
        {
			type = 1;
			idc = 2001;
			x = safeZoneX + safeZoneW * 0.01875;
			y = safeZoneY + safeZoneH * 0.05555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.04444445;
			style = 0+2;
			text = "NAV";
			borderSize = 0;
			colorBackground[] = {0.6762,0.6762,0.6762,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="[1000] call simtac_fnc_dialogControl"

		};
		class satMapMode
		{
			type = 1;
			idc = 2002;
			x = safeZoneX + safeZoneW * 0.121875;
			y = safeZoneY + safeZoneH * 0.05555556;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.04444445;
			style = 0+2;
			text = "SAT";
			borderSize = 0;
			colorBackground[] = {0.6762,0.6762,0.6762,1};
			colorBackgroundActive[] = {1,1,1,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="[1010] call simtac_fnc_dialogControl"

		};
		class closeSimTac
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.978125;
			y = safeZoneY + safeZoneH * 0.01111112;
			w = safeZoneW * 0.01875;
			h = safeZoneH * 0.03472223;
			style = 0+2;
			text = "x";
			borderSize = 0;
			colorBackground[] = {0.702,0.102,0.102,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "call simtac_fnc_terminateSimTac";
			
		};
        class btnSatMapControlEI
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.83375;
			y = safeZoneY + safeZoneH * 0.38333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "EI";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class btnSatMapControlCenter
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.87375;
			y = safeZoneY + safeZoneH * 0.32444445;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "+";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['CenterOn'] call simtac_fnc_sendSatCommand";

		};
		
		class btnSatMapControlS
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.87375;
			y = safeZoneY + safeZoneH * 0.26333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "^ ";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['MoveForward'] call simtac_fnc_sendSatCommand";

		};
		class btnSatMapControlES
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.83375;
			y = safeZoneY + safeZoneH * 0.26333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "ES";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class btnSatMapControlE
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.83375;
			y = safeZoneY + safeZoneH * 0.32333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "<";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['TurnLeft'] call simtac_fnc_sendSatCommand";
		};
		class btnSatMapControlB
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.87375;
			y = safeZoneY + safeZoneH * 0.38333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "v";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['MoveBack'] call simtac_fnc_sendSatCommand";

		};
		class btnSatMapControlDI
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.91375;
			y = safeZoneY + safeZoneH * 0.38333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "DI";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class btnSatMapControlD
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.91375;
			y = safeZoneY + safeZoneH * 0.32333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = ">";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['TurnRight'] call simtac_fnc_sendSatCommand";

		};
		class btnSatMapControlDS
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.91375;
			y = safeZoneY + safeZoneH * 0.26333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "DS";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			
		};
		class btnSatMapTI
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.91375;
			y = safeZoneY + safeZoneH * 0.18333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "TI";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[4] call simtac_fnc_adjustCamera";

		};
		class btnSatMapNRM
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.87375;
			y = safeZoneY + safeZoneH * 0.18333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "NRM";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[2] call simtac_fnc_adjustCamera";

		};
        class btnSatMapOVN
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.83375;
			y = safeZoneY + safeZoneH * 0.18333334;
			w = safeZoneW * 0.0325;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "OVN";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[2] call simtac_fnc_adjustCamera; camUseNVG true";


		};
        class btnSatMapControlZoomOut
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.83375;
			y = safeZoneY + safeZoneH * 0.45666667;
			w = safeZoneW * 0.0525;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "- ZOOM";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onMouseButtonClick="['ZoomOut'] call simtac_fnc_sendSatCommand";
		};
		class btnSatMapControlZoomIn
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.89375;
			y = safeZoneY + safeZoneH * 0.45666667;
			w = safeZoneW * 0.0525;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "+ ZOOM";
			borderSize = 0;
			colorBackground[] = {0.6745,0.6745,0.6745,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.002;
			offsetY = 0.002;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

            onMouseButtonClick="['ZoomIn'] call simtac_fnc_sendSatCommand";

			
		};
		
	};
	
};
