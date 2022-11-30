#include "../../include/day.h"
#include <stdlib.h> 

int main(int argc, char * argv[])
{   
    int numDays = atoi(argv[1]);
    
    Day days[DAY_SIZE];
    Day *dayPtr = calloc(numDays, sizeof(Day));

    for(int i; i < numDays; i++)
    {
        setDayNum((dayPtr + i), 0);
    }

    if (argc != 2)
    {
        printf("Error - Not Enough Arguments");
    }
    else
    {
        for(int i = 0; i < numDays; i++)
        {
            if(i % 2 == 0)
            {
                setTime((dayPtr + i));
                setArrival((dayPtr + i), true);
                setDeparture((dayPtr + i), false);
                setDayNum((dayPtr + i), (i+1));
                setTotalExpense((dayPtr + i), 10.0);
                setAllowedExpense((dayPtr + i), 2.0);
            }
            else
            {
                setDayNum((dayPtr + i), (i+1));
                setTime((dayPtr + i));
                setArrival((dayPtr + i), false);
                setDeparture((dayPtr + i), true);
                addTotalExpense((dayPtr + i), 10.5);
                addTotalExpense((dayPtr + i), 60.7);
                addAllowedExpense((dayPtr + i), 10.5);            
            }
        }

        for(int i = 0; i < numDays; i++)
        {
            printExpenses((dayPtr + i));
        }

        free(dayPtr);
    }

    return EXIT_SUCCESS;
}