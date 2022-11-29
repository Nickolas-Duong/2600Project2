#include "../include/trip.h"
#include "../include/input.h"

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
    carRentals = input_fee(0);

    return carRentals;
}

double get_Private_Vehicle_Used(){
    double gasCost;

    printf("How much was the gas:");
    gasCost = input_fee(0);

    return gasCost;
}

double get_Round_Trip_Airfare(){
    double airplaneCost;

    printf("How much was the ticket:");
    airplaneCost = input_fee(0);

    return airplaneCost;
}

double get_Parking_Fees(){
    double parkingFees;

    printf("How much was parking:");
    parkingFees = input_fee(0);

    return parkingFees;
}

double get_Taxi_Fees(){
    double taxiFees;

    printf("How much was parking:");
    taxiFees = input_fee(0);

    return taxiFees;
}