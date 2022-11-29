/*
    Created by Aliuddin Khaja
*/

#ifndef Food_H
#define Food_H

#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "input.h"

#define MINIMUM_FEE 0.00
#define ALLOWABLE_BREAKFAST 9.00
#define ALLOWABLE_LUNCH 12.00
#define ALLOWABLE_DINNER 16.00

double get_Meal_Costs();
void get_hotel_fee(int total_days, 
                     double *total_expenses,
                     double *total_allowable_expenses,
                     double *total_refund,
                     double *total_amount_saved);

#endif // FOOD_H