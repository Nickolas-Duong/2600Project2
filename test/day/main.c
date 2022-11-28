#include "../../include/day.h"
#include <stdlib.h> 

int main(int argc, char * argv[])
{   
    int numDays = atoi(argv[1]);
    
    Day days[DAY_SIZE];
    Day *dayPtr = days;

    for(int i; i < DAY_SIZE; i++)
    {
        setDayNum(dayPtr, 0);
        dayPtr++;
    }

    dayPtr = days;

    if (argc != 2)
    {
        printf("Error - Not Enough Arguments");
    }
    else
    {
        for(int i = 0; i < numDays; i++)
        {
            setDayNum(dayPtr, (i+1));
            setTotalExpense(dayPtr, 2.0);
            setAllowedExpense(dayPtr, 10.0);
            dayPtr++;
        }

        dayPtr = days;

        for(int i = 0; i < numDays; i++)
        {
            printExpenses(dayPtr);
            dayPtr++;
        }
    }

    return EXIT_SUCCESS;
}