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
#include "day.h"

#define MINIMUM_FEE 0.00
#define ALLOWABLE_BREAKFAST 9.00
#define ALLOWABLE_LUNCH 12.00
#define ALLOWABLE_DINNER 16.00

double total_meals;
char meal_type;
double meal_cost;
double total_expenses;
double total_allowable_expenses;
double total_refund;


char get_Meal_type();
void get_Food_expenses(int total_meals,
                       int total_allowed_meals, 
                     double total_expenses,
                     double total_allowable_expenses,
                     double total_refund,
                     double total_amount_saved)

#endif // FOOD_H;