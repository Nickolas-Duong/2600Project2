#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "../include/trip.h"

void trip(Day * day){
    int option;
    bool taxi = false;
    bool parking = false;

    while(option != 0){
        printf("Input the number of the option you would like to input:\n");
        printf("1 - Car Rental Cost\n");
        printf("2 - Miles Cost\n");
        printf("3 - Taxi Cost\n");
        printf("4 - Parking Fees\n");
        printf("5 - Airfare Cost\n");
        printf("0 - Exit\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            addTotalExpense(day, get_Car_Rentals());
            break;
        case 2:
            addTotalExpense(day, get_Private_Vehicle_Used());
            break;
        case 3:
            addTotalExpense(day, get_Taxi_Fees());
            taxi = true;
            break;
        case 4:
            addTotalExpense(day, get_Parking_Fees());
            parking = true;
            break;
        case 5:
            addTotalExpense(day, get_Round_Trip_Airfare());
            break;
        }
    }

    if(taxi == true)
    {
        addAllowedExpense(day, 10);
    }

    if(parking == true)
    {
        addAllowedExpense(day, 6);
    }
}

double get_Car_Rentals(){
    printf("How much was the car rental:\n");
    return input_fee(MINIMUM_FEE);
}

double get_Private_Vehicle_Used(){
    printf("How many miles were driven:\n");
    return (0.27 * input_fee(MINIMUM_FEE));
}

double get_Round_Trip_Airfare(){
    printf("How much was the ticket:\n");
    return input_fee(MINIMUM_FEE);
}

double get_Parking_Fees(){
    printf("How much was parking:\n");
    return input_fee(MINIMUM_FEE);
}

double get_Taxi_Fees(){
    printf("How much was parking:\n");
    return input_fee(MINIMUM_FEE);
}