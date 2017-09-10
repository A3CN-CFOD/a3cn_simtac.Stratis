#include "UI\simTac.h"
#include "UI\CustomControlClasses.h"


class CfgFunctions
{
	class simTac
	{
		class support
		{
			file = "a3cn_simtac\functions\support";
			class createNewUAV{};
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
            class closeCamera{};
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
			class dialogControl{};
            class terminateSimTac{};
        };

	};
};