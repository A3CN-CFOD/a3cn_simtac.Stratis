disableSerialization;

if (dialog) then
{
    call simtac_fnc_terminateSimTac;
} else {
    createDialog "simtac";
};
