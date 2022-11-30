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

typedef struct Day Day;

#define MINIMUM_FEE 0.00
#define ALLOWABLE_BREAKFAST 9.00
#define ALLOWABLE_LUNCH 12.00
#define ALLOWABLE_DINNER 16.00

void get_each_meal_cost(Day * Day, int mealNum);
void get_Food_expenses(Day * day);

#endif // FOOD_H