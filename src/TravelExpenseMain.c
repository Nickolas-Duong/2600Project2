#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
 

// functions
int get_trip_day(void); // input the number of day for the trip
double get_departure_time(void); // input the departure time 
double get_arrival_time(void); // input the arrival time
double get_roundtrip_airfare(void); // input the round trip Airfare and keep track with total expenses
double get_car_rental(void); // input the number of car rentals and fee for each car =>> keep track with total expenses
double get_private_vehicle(void); // input the number of miles => (miles * amount) + total expenses
void get_parking_fee(int, double*, double*, double*, double* ); // keep track all variables in function following the requirements
void get_taxi_fee(int, double*, double*, double*, double* );
double get_conference_fee(void);
void get_hotel_fee(int, double*, double*, double*, double* );
void get_meal_fee(double*, double, double*, double*, double*, double);

int main(int argc, char const *argv[]){
    // variables for general information
    double total_expenses = 0, total_allowable_expenses = 0, total_refund = 0, total_amount_saved = 0;
    double departure_time, arrival_time;
    int total_days;

    // variables for each task to return
    int number_of_Car_rentals,  number_Miles_driven = 0;
    double Parking_fees, number_round_trip_airfare, taxi_fees , hotel_expenses, meal_fees, Conference_Registration_fees, car_rental_fees;

    total_days = get_trip_day();
    departure_time = get_departure_time();
    arrival_time = get_arrival_time();
    total_expenses += get_roundtrip_airfare();
    total_expenses += get_car_rental();
    total_expenses += get_private_vehicle();

    get_parking_fee(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);

    get_taxi_fee(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);

    total_expenses = get_conference_fee();

    get_hotel_fee(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);
                 
    get_meal_fee(&total_expenses, departure_time, &total_allowable_expenses, &total_refund, &total_amount_saved, arrival_time);       
    
    display_total(total_days,     
                  departure_time, 
                  arrival_time, 
                  total_expenses, 
                  total_allowable_expenses, 
                  total_refund, 
                  total_amount_saved);

    return 0;
}

