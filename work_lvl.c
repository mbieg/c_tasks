#include "work_lvl.h"


void StopLvl_set(dev_status * const devsts)
{
        devsts->Rel.R1 = 0;
        devsts->Rel.R2 = 0;
        devsts->Rel.R3 = 0;

        devsts->Lvl = STOP;
    
}
void InitLvl_set(dev_status * const devsts)
{
        devsts->Rel.R1 = 1;
        devsts->Rel.R2 = 0;
        devsts->Rel.R3 = 0;

        devsts->Lvl = INIT;
    
    
}
void PrchrgLvl_set(dev_status * const devsts)
{
        devsts->Rel.R1 = 0;
        devsts->Rel.R2 = 1;
        devsts->Rel.R3 = 0;
        
        devsts->Lvl = PCHRG;
    
    
}
void RunLvl_set(dev_status * const devsts)
{
        devsts->Rel.R1 = 0;
        devsts->Rel.R2 = 0;
        devsts->Rel.R3 = 1;

        devsts->Lvl = RUN;
    
    
}
