#include "../include/day.h"
#include "../include/display.h"
#include "../include/Food.h"
#include "../include/hotel.h"
#include "../include/input.h"
#include "../include/trip.h"

/*
initial functions, used as a guideline

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
*/

int main(int argc, char const *argv[]){
    /*

    initial set-up, used as a guideline
    
    // variables for general information
    double total_expenses = 0, total_allowable_expenses = 0, total_refund = 0, total_amount_saved = 0;
    double departure_time, arrival_time;
    int total_days = argv[1];

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

    total_expenses += get_conference_fee();

    get_hotel_fee(total_days, &total_expenses, &total_allowable_expenses, &total_refund, &total_amount_saved);
                 
    get_meal_fee(&total_expenses, departure_time, &total_allowable_expenses, &total_refund, &total_amount_saved, arrival_time);       
    
    display_total(total_days,     
                  departure_time, 
                  arrival_time, 
                  total_expenses, 
                  total_allowable_expenses, 
                  total_refund, 
                  total_amount_saved);

    return EXIT_SUCCESS;
    */

    //number of days
    int numDays = 0;
    double conf = 0;
    //if not enough arguments
    if (argc != 2)
    {
        printf("Error - Not Enough Arguments");
    }
    //enough arguments
    else
    {
        //make sure days is a number
        if(numberCheck(argv[1]) == true)
        {
            //don't run if not a valid number
            if(atoi(argv[1]) < 1)
            {
                printf("Error invalid command line argument... must be greater than 0");

                return EXIT_FAILURE;
            }

            //set number of days to command line input
            numDays = atoi(argv[1]);
        }
        //don't run if it isn't a number
        else
        {
            printf("Error invalid command line argument... must be an int");

            return EXIT_FAILURE;
        }

        // set variables
        double totalCosts, totalAllowedCosts;
        int dHour = 0, dMin = 0, aHour = 0, aMin = 0;
        Day *dayPtr = calloc(numDays, sizeof(Day));

        //Set initial days to 0
        for(int i; i < numDays; i++)
        {
            setDayNum((dayPtr + i), 0);
        }
        
        //Set all days
        for(int i = 0; i < numDays; i++)
        {   
            //set day of departure
            if(i == 0)
            {
                setTime((dayPtr + i));
                setArrival((dayPtr + i), false);
                setDeparture((dayPtr + i), true);
                setDayNum((dayPtr + i), (i+1));
                dHour = getHour((dayPtr + i));
                dMin = getMinute((dayPtr + i));
            }
            //set day of arrival
            else if(i == (numDays - 1))
            {
                setDayNum((dayPtr + i), (i+1));
                setTime((dayPtr + i));
                setArrival((dayPtr + i), true);
                setDeparture((dayPtr + i), false);
                aHour = getHour((dayPtr + i));
                aMin = getMinute((dayPtr + i));          
            }
            //if a different day
            else
            {
                setDayNum((dayPtr + i), (i+1));
                setArrival((dayPtr + i), false);
                setDeparture((dayPtr + i), false);
            }

            //Add hotel fees
            printf("Enter fee for night #%d\n", i+1);
            addTotalExpense((dayPtr + i), get_hotel_fee());
            addAllowedExpense((dayPtr + i), ALLOWABLE_HOTEL_EXPENSES);

            //Add Conference Fee
            conf = get_conference_fee();
            addTotalExpense((dayPtr + i), conf);
            addAllowedExpense((dayPtr + i), conf);

            //Add trip fees
            trip((dayPtr + i));

            //Add Food Expenses
            get_Food_expenses((dayPtr + i));
        }

        //get all costs of each day
        for(int i = 0; i < numDays; i++)
        {
            totalCosts += getTotalExpense((dayPtr + i));
            totalAllowedCosts += getAllowedExpense((dayPtr + i));
        }

        //Display overall trip
        display_total(numDays, dHour, dMin, aHour, aMin, totalCosts, totalAllowedCosts);
        
        //Free memory from dynamic array
        free(dayPtr);
    }

}

