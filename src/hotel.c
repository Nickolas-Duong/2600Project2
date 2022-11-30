#include "../include/hotel.h"

//Get cost of conference
double get_conference_fee()
{
  printf("Please enter conference or registration fee: (if none, type 0)\n");
  return input_fee(MINIMUM_FEE);
}

//get cost of hotel
double get_hotel_fee()
{
  double hotel_fee;

  printf("The company only allows up to $%0.2lf per night for lodging.\n", ALLOWABLE_HOTEL_EXPENSES);
  
  hotel_fee = input_fee(MINIMUM_FEE);

  return hotel_fee;
  /*
  initial code, used as a guideline
  
  for (int i = 0; i < total_days - 1; i++)
  {
    *total_allowable_expenses += ALLOWABLE_HOTEL_EXPENSES;

    printf("Enter fee for night #%d\n", i+1);
    hotel_fee = input_fee(MINIMUM_FEE);

    *total_expenses += hotel_fee;

    if (hotel_fee > ALLOWABLE_HOTEL_EXPENSES)
      *total_refund += (hotel_fee - ALLOWABLE_HOTEL_EXPENSES);
    else
      *total_amount_saved += hotel_fee;
  }
  */
}