#ifndef DAY_H
#define DAY_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

struct Day
{
    int dayNum;
    double totalExpenses;
    double allowedExpenses; 
};

typedef struct Day Day;

void setDayNum(Day *day, int i);
int getDayNum(Day *day);
void setTotalExpense(Day *day, double d);
double getTotalExpense(Day *day);
void addTotalExpense(Day *day, double d,...);
void setAllowedExpense(Day *day, double d);
double getAllowedExpense(Day *day);
void addAllowedExpense(Day *day, double d,...);
void printTotalExpense(Day *day);
void printAllowedExpense(Day *day);

#endif