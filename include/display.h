/*
  Created by Andrew Jujun
*/
#ifndef DISPLAY_H
#define DISPLAY_H

#include<stdio.h>
#include<ctype.h>

void display_total(int total_days,     
                   int dHour, int dMin,
                   int aHour, int aMin, 
                   double total_expenses, 
                   double total_allowable_expenses);

#endif // DISPLAY_H