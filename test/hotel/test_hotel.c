#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "../../include/hotel.h"
#include "../../include/display.h"

void test_conference_fee()
{
  printf("The conference fee is %0.2lf\n", get_conference_fee());
}

void test_hotel_fee()
{
  int total_days = 3;
  
  double total_expenses = 10.00;
  double total_allowable_expenses = 0;
  double total_refund = 0;
  double total_amount_saved = 0;

  get_hotel_fee(total_days, 
                &total_expenses, 
                &total_allowable_expenses, 
                &total_refund, 
                &total_amount_saved);

  display_total(total_days, 00.00, 00.00,
                total_expenses, 
                total_allowable_expenses, 
                total_refund, 
                total_amount_saved);
}

int main()
{
  test_conference_fee();
  test_hotel_fee();
}