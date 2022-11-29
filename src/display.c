#include "../include/display.h"

void display_total(int total_days,     
                   double departure_time, 
                   double arrival_time, 
                   double total_expenses, 
                   double total_allowable_expenses, 
                   double total_refund, 
                   double total_amount_saved)
{
  printf("--------------------------------\n");
  printf("Total trip days: %d\n", total_days);
  printf("Time of departure: %0.2lf\n", departure_time);
  printf("Time of arrival: %0.2lf\n", arrival_time);
  printf("--------------------------------\n");
  printf("Total expenses: %0.2lf\n", total_expenses);
  printf("Total allowable expenses: %0.2lf\n", total_allowable_expenses);
  printf("Total refund: %0.2lf\n", total_refund);
  printf("Total amount saved: %0.2lf\n", total_amount_saved);
  printf("--------------------------------\n");
}