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
    }while (option != '0');

    return carRentals;
}

double get_Private_Vehicle_Used(){
    char option;

    printf("Did you use a private car?\n1 - Yes\n2 - No");
    option = getChar();
    getChar();

    if(option == '1'){
        double price;
        printf("How much did gas cost?");
        scanf("%lf", &price);
        return price;
    }else{
        return 0;
    }
}

double get_Round_Trip_Airfare(){
    char option;

    printf("Did you use a plane?\n1 - Yes\n2 - No");
    option = getChar();
    getChar();

    if(option == '1'){
        double price;
        printf("How much did one ticket cost?");
        scanf("%lf", &price);
        price *= 2;
        return price;
    }else{
        return 0;
    }
}

void get_Parking_Fees(int total_days, double* total_expenses, double* total_allowable_expenses, double* total_refund, double* total_amount_saved){
    double price = 0;
    printf("How much was parking per day?");
    scanf("%lf", &price);
    price *= total_days;
    total_expenses += price;
}

void get_Taxi_Fees(int total_days, double* total_expenses, double* total_allowable_expenses, double* total_refund, double* total_amount_saved){
    char option;
    
    printf("Did you use a taxi?\n1 - Yes\n2 - No");
    option = getChar();
    getChar();

    if(option == '1'){
        double price = 0;
        printf("How much the taxi?");
        scanf("%lf", &price);
        total_expenses += price;
    }
}