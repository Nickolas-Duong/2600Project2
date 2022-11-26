#include "../include/hotel.h"

double get_conference_fee()
{
  printf("Please enter conference or registration fee: (if none, type 0)\n");
  return input_fee(MINIMUM_FEE);
}

double get_hotel_fee(int total_days, 
                     double *total_expenses,
                     double *total_allowable_expenses,
                     double *total_refund,
                     double *total_amount_saved)
{
  return 0;
}