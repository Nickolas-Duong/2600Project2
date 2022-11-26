/*
  Created by Andrew Jujun
*/
#ifndef DISPLAY_H
#define DISPLAY_H

#include<stdio.h>
#include<ctype.h>

void display_total(int total_days,     
                   double departure_time, 
                   double arrival_time, 
                   double total_expenses, 
                   double total_allowable_expenses, 
                   double total_refund, 
                   double total_amount_saved);

#endif // DISPLAY_H