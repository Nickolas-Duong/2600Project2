#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "../../include/trip.h"

int main()
{
    printf("What is your current total expenses:\n");
    double expenses;
    scanf("%lf", &expenses);

    expenses = trip(expenses);

    printf("Total Travel Cost: %0.2lf\n", expenses);
}