#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

double get_conference_fee();
double get_hotel_fee(int total_days, 
                     double *total_expenses,
                     double *total_allowable_expenses,
                     double *total_refund,
                     double *total_amount_saved);