#include "public.h"

const char *topics[] = { 
    "Location",
    "AcState",
    "Inhibited",
    "DisplayState",
    "DayTime",
    "InEvent",
    "Sunrise",
    "Sunset",
    "Temp",
    "AmbientBr",
    "BlPct",
    "KbdPct",
    "ScreenComp",
    "ReqLocation",
    "ReqAcState",
    "ReqInhibit",
    "ReqDisplay",
    "ReqSunrise",
    "ReqSunset",
    "ReqTemp",
    "ReqBl",
    "ReqKbdBl",
    "ReqDimmerTo",
    "ReqDpmsTo",
    "ReqScrTo",
    "ReqBlTo",
    "ReqCapture",
    "ReqCurve",
    "ReqAutocalib",
    "ReqContrib",
    "ReqSimulate",
    "LidState",
    "ReqLid",
    "PmInhibited",
    "PmReq"
};
_Static_assert(sizeof(topics) / sizeof(*topics) == MSGS_SIZE, "Undefined topic.");
