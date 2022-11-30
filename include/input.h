#ifndef INPUT_H
#define INPUT_H

#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "../include/day.h"

typedef struct Day Day;

char input_char(); // handle yes no input
int input_dec_number(); //handle the input for number of days or miles
void input_time(Day * day); // 00:00 - 23:59: valid time
int validTime(int hours, int min);

// Andrew's part
double input_fee(double minimum); // retrieve user fee input

#endif // INPUT_H