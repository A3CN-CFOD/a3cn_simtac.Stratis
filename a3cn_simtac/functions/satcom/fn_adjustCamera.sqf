private["_type","_text"];

_type = _this select 0;

// PP effects
if (_type == 1) then
{
    ppEffectDestroy PP_film;
    ppEffectDestroy PP_dynamic;

};

if (_type == 2) then
{
	
    ppEffectDestroy PP_dynamic;
    
    camUseNVG false;
    PP_film = ppEffectCreate ["filmGrain",2005];
	PP_film ppEffectEnable true;
	PP_film ppEffectAdjust [0.02,1,1,0,1];
	PP_film ppEffectCommit 0;


};
if (_type == 6) then
{
    PP_dynamic = ppEffectCreate ["DynamicBlur",500];
    PP_dynamic ppEffectEnable true;
    PP_dynamic ppEffectAdjust [0.55];
    PP_dynamic ppEffectCommit 0;
    PP_film = ppEffectCreate ["FilmGrain",2005];
    PP_film ppEffectEnable true;
    PP_film ppEffectAdjust [0.73,0.86,1.01,0.24,0.25,true];
    PP_film ppEffectCommit 0;
};


// FLIR setting
switch (_type) do
{
	camUseNVG false;
    case 3:	{true setCamUseTi 7;}; //thermograph
	case 4:	{true setCamUseTi 0;};
	case 5:	{true setCamUseTi 1;};
	default
	{
		false setCamUseTi 0;
		false setCamUseTi 1;
	};
};

// FLIR text
_text = "";
switch (_type) do
{
	case 3:	{_text = "T-FLIR";};
	case 4:	{_text = "W-FLIR";};
	case 5:	{_text = "B-FLIR";};
    case 6:	{_text = "INFR";};

	default
	{
		_text = "NRM";
	};
};
ctrlSetText [1090,_text];
