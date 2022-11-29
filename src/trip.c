#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "../include/trip.h"

double trip(double total_expenses){
    int option;

    while(option != 0){
        printf("Input the number of the option you would like to input:\n");
        printf("1 - Car Rental Cost\n");
        printf("2 - Gas Cost\n");
        printf("3 - Taxi Cost\n");
        printf("4 - Parking Fees\n");
        printf("5 - Airfare Cost\n");
        printf("0 - Exit\n");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            total_expenses += get_Car_Rentals();
            break;
        case 2:
            total_expenses += get_Private_Vehicle_Used();
            break;
        case 3:
            total_expenses += get_Taxi_Fees();
            break;
        case 4:
            total_expenses += get_Parking_Fees();
            break;
        case 5:
            total_expenses += get_Round_Trip_Airfare();
            break;
        }
    }

    return total_expenses;
}

double get_Car_Rentals(){
    double carRentals;

    printf("How much was the car rental:\n");
    scanf("%lf", &carRentals);

    return carRentals;
}

double get_Private_Vehicle_Used(){
    double gasCost;

    printf("How much was the gas:\n");
    scanf("%lf", &gasCost);

    return gasCost;
}

double get_Round_Trip_Airfare(){
    double airplaneCost;

    printf("How much was the ticket:\n");
    scanf("%lf", &airplaneCost);

    return airplaneCost;
}

double get_Parking_Fees(){
    double parkingFees;

    printf("How much was parking:\n");
    scanf("%lf", &parkingFees);

    return parkingFees;
}

double get_Taxi_Fees(){
    double taxiFees;

    printf("How much was parking:\n");
    scanf("%lf", &taxiFees);

    return taxiFees;
}