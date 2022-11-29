#include <stdio.h>  
#include <stdlib.h>

double get_Car_Rentals(){
    char option;

    printf("Did you rent a car?\n1 - Yes\n2 - No");
    option = getChar();
    getChar();

    if(option == '1'){
        int days = getNumber_of_day_on_Trip();
        double price;
        printf("How much did the car cost for each day?");
        scanf("%lf", &price);
        int total = price * days;
        return total;
    }else{
        return 0;
    }
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