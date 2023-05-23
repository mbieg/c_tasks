
#include "dev_status.h"


void DeVSts_update(dev_status * const me)
{
    me->Ibatt = Current;
    me->Vbatt = Voltage;
}