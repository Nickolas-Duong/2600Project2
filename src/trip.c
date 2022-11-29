#include "../include/trip.h"

double trip(double total_expenses){
    char option = 'z';

    while(option != '0'){
        printf("Input the number of the option you would like to input:");
        printf("1 - Car Rental Cost");
        printf("2 - Gas Cost");
        printf("3 - Taxi Cost");
        printf("4 - Parking Fees");
        printf("5 - Airfare Cost");
        printf("0 - Exit");
        option = getChar();
        getChar();

        switch (option)
        {
        case '1':
            total_expenses += get_Car_Rentals();
            break;
        case '2':
            total_expenses += get_Private_Vehicle_Used();
            break;
        case '3':
            total_expenses += get_Taxi_Fees();
            break;
        case '4':
            total_expenses += get_Parking_Fees();
            break;
        case '5':
            total_expenses += get_Round_Trip_Airfare();
        }
    }

    return total_expenses;
}

double get_Car_Rentals(){
    double carRentals;

    printf("How much was the car rental:");
    scanf("%lf", &carRentals);

    return carRentals;
}

double get_Private_Vehicle_Used(){
    double gasCost;

    printf("How much was the gas:");
    scanf("%lf", &gasCost);

    return gasCost;
}

double get_Round_Trip_Airfare(){
    double airplaneCost;

    printf("How much was the ticket:");
    scanf("%lf", &airplaneCost);

    return airplaneCost;
}

double get_Parking_Fees(){
    double parkingFees;

    printf("How much was parking:");
    scanf("%lf", &parkingFees);

    return parkingFees;
}

double get_Taxi_Fees(){
    double taxiFees;

    printf("How much was parking:");
    scanf("%lf", &taxiFees);

    return taxiFees;
}