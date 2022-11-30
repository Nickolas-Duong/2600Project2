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

//Show total expense of the day in terminal
void printExpenses(Day * day)
{
    printf("Day %d\n", getDayNum(day));
    if(day->arrival)
    {
        printf("The time of arrival is: %02d:%02d", day->hour, day->minutes);
        if(day->hour >=12)
        {
            printf(" PM\n");
        }
        else
        {
            printf(" AM\n");
        }
    }
    else if(day->departure)
    {
        printf("The time of departure is: %02d:%02d", day->hour, day->minutes);
                if(day->hour >=12)
        {
            printf(" PM\n");
        }
        else
        {
            printf(" AM\n");
        }
    }

    printf("Total Expenses: %.2f\n", getTotalExpense(day));
    printf("Allowed Expenses: %.2f\n", getAllowedExpense(day));
    if(getAllowedExpense(day) >= getTotalExpense(day))
    {
        printf("Amount in excess: $0.00\n");
        printf("Amount Saved: %.2f\n", (getAllowedExpense(day) - getTotalExpense(day)));
    }
    else
    {
        printf("Amount in excess: %.2f\n", (getTotalExpense(day) - getAllowedExpense(day)));
        printf("Amount Saved: $0.00\n");
    }
}

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