#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

#include "../include/trip.h"

// Trip menu
void trip(Day *day)
{
  int option;
  bool taxi = false;
  bool parking = false;
  double rental;
  double miles;
  double airfare;

  // loop through menu till done
  while (option != 0)
  {
    printf("Input the number of the option you would like to input:\n");
    printf("1 - Car Rental Cost\n");
    printf("2 - Miles Cost\n");
    printf("3 - Taxi Cost\n");
    printf("4 - Parking Fees\n");
    printf("5 - Airfare Cost\n");
    printf("0 - Exit\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      rental = get_Car_Rentals();
      addTotalExpense(day, rental);
      addAllowedExpense(day, rental);
      break;
    case 2:
      miles = get_Private_Vehicle_Used();
      addTotalExpense(day, miles);
      addAllowedExpense(day, miles);
      break;
    case 3:
      addTotalExpense(day, get_Taxi_Fees());
      taxi = true;
      break;
    case 4:
      addTotalExpense(day, get_Parking_Fees());
      parking = true;
      break;
    case 5:
      airfare = get_Round_Trip_Airfare();
      addTotalExpense(day, airfare);
      addAllowedExpense(day, airfare);
      break;
    }
  }

  // if certain options used, add to allowed expenses
  if (taxi == true)
  {
    addAllowedExpense(day, 10);
  }

  if (parking == true)
  {
    addAllowedExpense(day, 6);
  }
}

// get car rental fee input
double get_Car_Rentals()
{
  printf("How much was the car rental:\n");
  return input_fee(MINIMUM_FEE);
}

// get private vehicle input
double get_Private_Vehicle_Used()
{
  printf("How many miles were driven:\n");
  return (0.27 * input_fee(MINIMUM_FEE));
}

// get airfare input
double get_Round_Trip_Airfare()
{
  printf("How much was the ticket:\n");
  return input_fee(MINIMUM_FEE);
}

// get parking input
double get_Parking_Fees()
{
  printf("How much was parking:\n");
  return input_fee(MINIMUM_FEE);
}

// get taxi input
double get_Taxi_Fees()
{
  printf("How much was the taxi:\n");
  return input_fee(MINIMUM_FEE);
}