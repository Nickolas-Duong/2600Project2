#include "../include/day.h"

//Set Day Number
void setDayNum(Day *day, int i)
{
    day->dayNum = i;
}

int getDayNum(Day *day)
{
    return day->dayNum;
}

//Set Total Expenses to explicit Value
void setTotalExpense(Day *day, double d)
{
    day->totalExpenses = d;
}

//Return total expenses
double getTotalExpense(Day *day)
{
    return day->totalExpenses;
}

void addTotalExpense(Day *day, double d,...)
{
    va_list temp;

    //initialize list
    va_start(temp, d);

    //add all arguments to total expenses
    for (int i =0; i < d; i++)
    {
        day->totalExpenses += va_arg(temp, double);
    }

    //remove list from memory
    va_end(temp);
}

//Set allowed expense
void setAllowedExpense(Day *day, double d)
{
    day->allowedExpenses = d;
}

//Return total allowed expenses
double  getAllowedExpense(Day *day)
{
    return day->allowedExpenses;
}

//Add all allowed Expenses
void addAllowedExpense(Day *day, double d,...)
{
    va_list temp;

    //initialize list
    va_start(temp, d);

    //add all arguments to total expenses
    for (int i =0; i < d; i++)
    {
        day->allowedExpenses += va_arg(temp, double);
    }

    //remove list fromm memory
    va_end(temp);
}

//Show total expense of the day in terminal
void printExpenses(Day *day)
{
    printf("Day &d\n", day->dayNum);
    printf("Total Expenses: %.2f\n", day->totalExpenses);
    printf("Allowed Expenses: &.2f\n", day->allowedExpenses);
}