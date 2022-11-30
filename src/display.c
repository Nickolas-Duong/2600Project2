#include "../include/display.h"

void display_total(int total_days,     
                   int dHour, int dMin,
                   int aHour, int aMin, 
                   double total_expenses, 
                   double total_allowable_expenses)
{
  printf("--------------------------------\n");
  printf("Total trip days: %d\n", total_days);
  if(dHour >= 12)
  {
    if ((dHour - 12) != 0)
      printf("Time of departure: %02d:%02d PM\n", dHour-12, dMin);
    else
      printf("Time of departure: %02d:%02d PM\n", dHour, dMin);

  }
  else
  {
    printf("Time of departure: %02d:%02d AM\n", dHour, dMin);
  }

  if(aHour >= 12)
  {
    if ((aHour - 12) != 0)
      printf("Time of Arrival: %02d:%02d PM\n", aHour-12, aMin);
    else
      printf("Time of Arrival: %02d:%02d PM\n", aHour, aMin);  
  }
  else
  {
    printf("Time of departure: %02d:%02d AM\n", aHour, aMin);
  }
  printf("--------------------------------\n");
  printf("Total expenses: %0.2lf\n", total_expenses);
  printf("Total allowable expenses: %0.2lf\n", total_allowable_expenses);
  if(total_allowable_expenses >= total_expenses)
  {
      printf("Amount in excess: $0.00\n");
      printf("Amount Saved: %.2f\n", (total_allowable_expenses - total_expenses));
  }
  else
  {
      printf("Amount in excess: %.2f\n", (total_expenses - total_allowable_expenses));
      printf("Amount Saved: $0.00\n");
  }
  printf("--------------------------------\n");
}