#include "../include/day.h"

//Set time for day via input
void setTime(Day * day)
{
    input_time(day);
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

//check if argv is a number
bool numberCheck(const char number[])
{
    int i = 0;

    if(number[0] == '-')
    {
        i = 1;
    }

    for(i; number[i] != 0; i++)
    {
        if(!isdigit(number[i]))
        {
            return false;
        }
    }

    return true;
}

//get hour of struct
int getHour(Day * day)
{
    return day->hour;
}

//get minute of struct
int getMinute(Day * day)
{
    return day->minutes;
}