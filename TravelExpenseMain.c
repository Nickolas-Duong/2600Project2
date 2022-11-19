#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
 

// functions
int getNumber_of_day_on_Trip(void); // input the number of day for the trip
double get_Departure_Time(void); // input the departure time 
double get_Arrival_Time(void); // input the arrival time
double get_Round_Trip_Airfare(void); // input the round trip Airfare and keep track with total expenses
double get_Car_Rentals(void); // input the number of car rentals and fee for each car =>> keep track with total expenses
double get_Private_Vehicle_Used(void); // input the number of miles => (miles * amount) + total expenses
void get_Parking_Fees(int, double*, double*, double*, double* ); // keep track all variables in function following the requirements
void get_Taxi_Fees(int, double*, double*, double*, double* );
double get_Conference_And_Registration_Fees(void);
void get_Hotel_Fees(int, double*, double*, double*, double* );
void get_Meal_Fees(double*, double, double*, double*, double*, double);


// printing function
void displayTotals(int, double, double, double*, double*, double*, double*); // all the variables we keep track above will be printed in this function

// handle yes no input
char inputChar( char letter){
    letter = getchar();
    while(!(toupper(letter) == 'Y' || toupper(letter) == 'N')){
        printf("The input should be 'Y' for Yes or 'N' for No!\n");
        letter = getchar();
    }
    return letter;
}

//handle the input for number of days or miles
int inputDecNumber(int number){
    scanf("%d", number);
    while(number<1){
        printf("Number should be greater than 1 and can not be negative!!\n");
        scanf("%d", number);
    }
    return number;
}

// 00:00 - 23:59: valid time
double inputTime(double time){
    scanf("%f", time);
    while(time<0 || time > 23.59){
        printf("Please enter the valid time!! \n");
        scanf("%f", time);
    }
    return time;
}





int main(int argc, char*argv[]){
    // variables for general information
    double total_expenses = 0, total_allowable_expenses = 0, total_refund = 0, total_amount_saved = 0;
    double departure_time, arrival_time;
    int total_days;

    // variables for each task to return
    int number_of_Car_rentals,  number_Miles_driven = 0;
    double Parking_fees, number_round_trip_airfare, taxi_fees , hotel_expenses, meal_fees, Conference_Registration_fees, car_rental_fees;

    total_days = getNumber_of_day_on_Trip();
    departure_time = get_Departure_Time();
    arrival_time = get_Arrival_Time();
    total_expenses += get_Round_Trip_Airfare();
    total_expenses += get_Car_Rentals();
    total_expenses += get_Private_Vehicle_Used();

    get_Parking_Fees(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);

    get_Taxi_Fees(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);

    total_expenses = get_Conference_And_Registration_Fees();

    get_Hotel_Fees(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);
                 
    get_Meal_Fees(&total_expenses, departure_time, &total_allowable_expenses, &total_refund, &total_amount_saved, arrival_time);       
    
    displayTotals(total_days,     
                  departure_time, 
                  arrival_time, 
                  &total_expenses, 
                  &total_allowable_expenses, 
                  &total_refund, 
                  &total_amount_saved);

    return 0;
}

