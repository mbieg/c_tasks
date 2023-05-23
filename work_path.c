#include "work_path.h"
#include "work_lvl.h"
#include "timer.h"

int Timer;

void Wrk_Path(dev_status * const devStat)
{
    int currentTmp = devStat->Ibatt;
    int voltageTmp = devStat->Vbatt;
    if (devStat->Perm == DENY)
    {
        StopLvl_set(&DevStatus);
    }
    else
    {    
        wrklevel LvL = devStat->Lvl;
        switch (LvL)
        {
        case INIT:
            if (voltageTmp > 10)
            {
                PrchrgLvl_set(&DevStatus);
            }
            break;
        case PCHRG:
            if (currentTmp < 2 && TimerRun(&Timer) == 0) //&& timer
            {
                devStat->Lvl = RUN;
            }
            break;
        case RUN:
            RunLvl_set(&DevStatus);
            break;
        
        default:
            InitLvl_set(&DevStatus);
            TimerReset(&Timer, 20);
            break;
        }
    }
}