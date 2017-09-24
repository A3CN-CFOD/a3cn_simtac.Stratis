#include "UI\simTac.h"
#include "UI\CustomControlClasses.h"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"

class CfgFunctions
{
	class simTac
	{
		class support
		{
			file = "a3cn_simtac\functions\support";
			class createNewUAV{};
            class initVars{
                postInit = 1;
            };
        };
        class satcom
        {
            file = "a3cn_simtac\functions\satcom";
            class initVar{
                postInit = 1
            };
            class timeFunction{};
            class timeView{};
            class coordinatesFunction{};
            class coordinatesView{};
            class adjustCamera{};
            class viewSatellite{};
            class keyFunction{};
            class mouseZChanged{};
            class keyMain{};
            class startSatellite{};
            class updateCamera{};
            class switcher{};
            class redefinePosition{};
            class sendSatCommand{};
        };
        class shared
		{
			file = "a3cn_simtac\functions\shared";
			class keyManager{
                postInit = 1
            };
            class handleTablet{};
            class dialogControl{};
            class terminateSimTac{};
        };

	};
};
