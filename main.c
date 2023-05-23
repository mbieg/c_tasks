#include <time.h>
#include <stdio.h>

 
#include "work_lvl.h"
#include "dev_status.h"
#include "work_path.h"
#include "var_t.h"


int Current = 0;
int Voltage = 0; 
dev_status DevStatus;

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}


int main()
{


    while(1)
    {
        Voltage++;
        Wrk_Path(&DevStatus);
        DeVSts_update(&DevStatus);
        delay(1);
    }
    
    return 0;
}