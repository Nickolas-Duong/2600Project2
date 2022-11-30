/*
    Created by Aliuddin Khaja
*/

#ifndef Food_H
#define Food_H

//Headers
#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "input.h"
#include "day.h"

//name Struct
typedef struct Day Day;

//Constant numbers
#define MINIMUM_FEE 0.00
#define ALLOWABLE_BREAKFAST 9.00
#define ALLOWABLE_LUNCH 12.00
#define ALLOWABLE_DINNER 16.00

//function declarations
void get_each_meal_cost(Day * Day, int mealNum);
void get_Food_expenses(Day * day);

#endif // FOOD_H