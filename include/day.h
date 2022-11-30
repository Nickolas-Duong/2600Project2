#ifndef DAY_H
#define DAY_H

//Max day SIZE
#define DAY_SIZE 8

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include "../include/input.h"

struct Day
{
    int dayNum, hour, minutes;
    double totalExpenses;
    double allowedExpenses;
    bool arrival, departure;

};

typedef struct Day Day;

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
void printExpenses(Day * day);

#endif