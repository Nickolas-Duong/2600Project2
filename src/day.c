#include "../include/day.h"
//Validate time input
int validTime(int hours, int min)
{
    int ret = 0;
    if(hours > 24)
    {
        ret = 1;
    }

    if(min > 60)
    {
        ret = 1;
    }

    return ret;
}

//Set time for day via input
void setTime(Day * day)
{
    char input[100] = {0};
    int hour, min, validate;

    printf("\nEnter the Arrival or departure time in \"HH:MM\" format: ");
    fgets(input, 100, stdin);

    sscanf(input, "%d:%d", &hour, &min);

    validate = validTime(hour, min);

    if(validate != 0)
    {
        printf("\nInvalid Time. . . please try again. . .\n");
    }
    else
    {
        day->hour = hour;
        day->minutes = min;
        printf("\nThe time is: %d:%d\n", day->hour, day->minutes);
    }
}

//Set Arrival bool
void setArrival(Day * day, bool type)
{
    day->arrival = type;
}

//Set departure bool
void setDeparture(Day * day, bool type)
{
    day->departure = type;
}

//Set Day Number
void setDayNum(Day * day, int i)
{
    day->dayNum = i;
}

int getDayNum(Day * day)
{
    return day->dayNum;
}

//Set Total Expenses to explicit Value
void setTotalExpense(Day * day, double d)
{
    day->totalExpenses = d;
}

//Return total expenses
double getTotalExpense(Day * day)
{
    return day->totalExpenses;
}

void addTotalExpense(Day * day, double num)
{
    day->totalExpenses += num;
}

//Set allowed expense
void setAllowedExpense(Day * day, double d)
{
    day->allowedExpenses = d;
}

//Return total allowed expenses
double  getAllowedExpense(Day * day)
{
    return day->allowedExpenses;
}

//Add all allowed Expenses
void addAllowedExpense(Day * day, double num)
{
    day->allowedExpenses += num;
}

//Show total expense of the day in terminal
void printExpenses(Day * day)
{
    printf("Day %d\n", getDayNum(day));
    printf("Total Expenses: %.2f\n", getTotalExpense(day));
    printf("Allowed Expenses: %.2f\n", getAllowedExpense(day));
}