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

//Set Arrival bool
void setArrival(Day * day, bool type)
{
    day->arrival = type;
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