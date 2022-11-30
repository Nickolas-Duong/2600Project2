#include "../include/day.h"
#include "../include/display.h"
//#include "../include/Food.h"
#include "../include/hotel.h"
#include "../include/input.h"
#include "../include/trip.h"

/*
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

    int numDays = 0;

    if (argc != 2)
    {
        printf("Error - Not Enough Arguments");
    }
    else
    {
        if(numberCheck(argv[1]) == true)
        {
            if(atoi(argv[1]) < 1)
            {
                printf("Error invalid command line argument... must be greater than 0");

                return EXIT_FAILURE;
            }

            numDays = atoi(argv[1]);
        }
        else
        {
            printf("Error invalid command line argument... must be an int");

            return EXIT_FAILURE;
        }
    
        Day *dayPtr = calloc(numDays, sizeof(Day));

        for(int i; i < numDays; i++)
        {
            setDayNum((dayPtr + i), 0);
        }
        
        for(int i = 0; i < numDays; i++)
        {
            if(i == 0)
            {
                setTime((dayPtr + i));
                setArrival((dayPtr + i), false);
                setDeparture((dayPtr + i), true);
                setDayNum((dayPtr + i), (i+1));
            }
            else if(i == (numDays - 1))
            {
                setDayNum((dayPtr + i), (i+1));
                setTime((dayPtr + i));
                setArrival((dayPtr + i), true);
                setDeparture((dayPtr + i), false);          
            }
            else
            {
                setDayNum((dayPtr + i), (i+1));
                setTime((dayPtr + i));
                setArrival((dayPtr + i), false);
                setDeparture((dayPtr + i), false);
            }

            //Add hotel fees
            printf("Enter fee for night #%d\n", i+1);
            addTotalExpense((dayPtr + i), get_hotel_fee());
            addAllowedExpense((dayPtr + i), ALLOWABLE_HOTEL_EXPENSES);

            //Add Conference Fee
            addTotalExpense((dayPtr + i), get_conference_fee());

            //Add trip fees
            trip((dayPtr + i));
        }

        for(int i = 0; i < numDays; i++)
        {
            printExpenses((dayPtr + i));
        }

        free(dayPtr);
    }

}

