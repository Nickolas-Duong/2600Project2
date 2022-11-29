#include "../include/hotel.h"

double get_conference_fee()
{
  printf("Please enter conference or registration fee: (if none, type 0)\n");
  return input_fee(MINIMUM_FEE);
}

void get_hotel_fee(int total_days, 
                     double *total_expenses,
                     double *total_allowable_expenses,
                     double *total_refund,
                     double *total_amount_saved)
{
  double hotel_fee;

  printf("The company only allows up to $%0.2lf per night for lodging.\n", ALLOWABLE_HOTEL_EXPENSES);
  
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
}