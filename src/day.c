#include "../include/day.h"

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

    va_end(temp);
}