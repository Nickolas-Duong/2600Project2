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
        printf("Any key to exit");
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
    char option;
    double carRentals;

    do{
        printf("Select an option:");
        printf("1 - Input a Car Rental Fee");
        printf("2 - Exit");
        option = getChar();
        getChar();

        if(option == '1'){
            double temp = 0;
            printf("How much was the car rental:");
            scanf("%lf", &temp);
            carRentals += temp;
        }
    }while (option != '2');

    return carRentals;
}

double get_Private_Vehicle_Used(){
    char option;
    double gasCost;

    do{
        printf("Select an option:");
        printf("1 - Input a Gas Total");
        printf("2 - Exit");
        option = getChar();
        getChar();

        if(option == '1'){
            double temp = 0;
            printf("How much was the gas:");
            scanf("%lf", &temp);
            gasCost += temp;
        }
    }while (option != '2');

    return gasCost;
}

double get_Round_Trip_Airfare(){
    char option;
    double airplaneCost;

    do{
        printf("Select an option:");
        printf("1 - Input an Airplane Ticket Cost");
        printf("2 - Exit");
        option = getChar();
        getChar();

        if(option == '1'){
            double temp = 0;
            printf("How much was the ticket:");
            scanf("%lf", &temp);
            airplaneCost += temp;
        }
    }while (option != '2');

    return airplaneCost;
}

double get_Parking_Fees(){
    char option;
    double parkingFees;

    do{
        printf("Select an option:");
        printf("1 - Input an Parking Fee");
        printf("2 - Exit");
        option = getChar();
        getChar();

        if(option == '1'){
            double temp = 0;
            printf("How much was parking:");
            scanf("%lf", &temp);
            parkingFees += temp;
        }
    }while (option != '2');

    return parkingFees;
}

double get_Taxi_Fees(){
    char option;
    double taxiFees;

    do{
        printf("Select an option:");
        printf("1 - Input an Taxi Fee");
        printf("2 - Exit");
        option = getChar();
        getChar();

        if(option == '1'){
            double temp = 0;
            printf("How much was parking:");
            scanf("%lf", &temp);
            taxiFees += temp;
        }
    }while (option != '2');

    return taxiFees;
}