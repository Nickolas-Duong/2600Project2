#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
 

// 10 functions
void getNumber_of_day_onTrip(int); // input the number of day for the trip
void getDepartureAndArrivalTimes(double , double ); // input the departure time and arrival time
void getRoundTripAirfare(double , double); // input the round trip Airfare and keep track with total expenses
void getCarRentals(double , int, double); // input the number of car rentals and fee for each car =>> keep track with total expenses
void getPrivateVehicleUsed(double , int); // input the number of miles => (miles * amount) + total expenses
void getParkingFees(int, double , double , double , double , double ); // keep track all variables in function following the requirements
void getTaxiFees(int, double , double , double , double , double );
void getConferenceAndRegistrationFees(double , double );
void getHotelFees(int, double , double , double , double , double );
void getMealFees(double , double , double , double , double , double , double);


// printing function
void displayTotals(int, double, double, double, double, double, double); // all the variables we keep track above will be printed in this function

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

    getNumber_of_day_onTrip(total_days);
    getDepartureAndArrivalTimes(departure_time, arrival_time);
    getRoundTripAirfare(total_expenses, number_round_trip_airfare);
    getCarRentals(total_expenses, number_of_Car_rentals, car_rental_fees);
    getPrivateVehicleUsed(total_expenses, number_Miles_driven);

    getParkingFees(total_days, total_expenses, Parking_fees, total_allowable_expenses, total_refund, total_amount_saved);

    getTaxiFees(total_days,total_expenses, taxi_fees, total_allowable_expenses, total_refund, total_amount_saved);

    getConferenceAndRegistrationFees(total_expenses, Conference_Registration_fees);

    getHotelFees(total_days, total_expenses, hotel_expenses, total_allowable_expenses, total_refund, total_amount_saved);
                 
    getMealFees(total_expenses, meal_fees, departure_time, total_allowable_expenses, total_refund, total_amount_saved, arrival_time);       
    
    displayTotals(total_days,     
                  departure_time, 
                  arrival_time, 
                  total_expenses, 
                  total_allowable_expenses, 
                  total_refund, 
                  total_amount_saved);

    return 0;
}

