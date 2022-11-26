#ifndef INPUT_H
#define INPUT_H

#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

char input_char( char letter); // handle yes no input
int input_dec_number(int number); //handle the input for number of days or miles
double input_time(double time); // 00:00 - 23:59: valid time

// Andrew's part
double input_fee(double minimum); // retrieve user fee input

#endif // INPUT_H