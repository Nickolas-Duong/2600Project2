#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "../../include/trip.h"
#include "../../include/display.h"

int main()
{
    printf("What is your current total expenses:");
    double expenses;
    scanf("%lf", &expenses);

    expenses = trip(expenses);

    display_total(5, 11, 11, expenses, 500, 0, 0);
}