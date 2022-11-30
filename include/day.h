#ifndef DAY_H
#define DAY_H

//Headers
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include "../include/input.h"

//Struct
struct Day
{
    int dayNum, hour, minutes;
    double totalExpenses;
    double allowedExpenses;
    bool arrival, departure;

};

//name struct
typedef struct Day Day;

//function declarations
void setTime(Day * day);
void setArrival(Day * day, bool type);
void setDeparture(Day * day, bool type);
void setDayNum(Day * day, int i);
int getDayNum(Day * day);
void setTotalExpense(Day * day, double d);
double getTotalExpense(Day * day);
void addTotalExpense(Day * day, double num);
void setAllowedExpense(Day * day, double d);
double getAllowedExpense(Day * day);
void addAllowedExpense(Day*  day, double num);
bool numberCheck(const char number[]);
int getHour(Day * day);
int getMinute(Day * day);
#endif