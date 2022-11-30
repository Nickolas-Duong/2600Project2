#ifndef TRIP_H
#define TRIP_H

//headers
#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "day.h"

//define Struct
typedef struct Day Day;

//const number
#define MINIMUM_FEE 0.00

//function declarations
void trip(Day * day); //calls each other method using a menu
double get_Car_Rentals(); //prompts user to input car rental cost
double get_Private_Vehicle_Used(); //prompts user to input gas cost
double get_Round_Trip_Airfare(); //ask user cost of one ticket if a plane was used
double get_Parking_Fees(); //ask user to input any parking fees
double get_Taxi_Fees(); //ask user to input any taxis cost

#endif