#include "timer.h"

int TimerRun(int * const timer)
{
    if ((*timer) == 0)
    {
        return 0;
    }
    else
    {
        --(*timer);
        return 1;
    }

}
void TimerReset(int * const timer)
{
    *timer = 10;
}