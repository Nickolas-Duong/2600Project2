/*
  Created by Andrew Jujun
*/
#ifndef HOTEL_H
#define HOTEL_H

#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "input.h"

#define MINIMUM_FEE 0.00
#define ALLOWABLE_HOTEL_EXPENSES 90.00

double get_conference_fee();
double get_hotel_fee(int total_days, 
                     double *total_expenses,
                     double *total_allowable_expenses,
                     double *total_refund,
                     double *total_amount_saved);

#endif // HOTEL_H