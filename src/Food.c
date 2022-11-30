#include "../include/Food.h"

void get_Food_expenses()
{

  printf("\n The company covers 3 meals a day and certain meals on the day of arrival and departure depending on time of arrival/departure. \n");
  printf("\n Insert the number of meals throughout the trip \n");
  scanf("%d", total_meals);

    do 
    {
    get_each_meal_cost();
    total_meals = total_meals - 1;
    } while (total_meals > 0);
  
}
/*
void total_allowed_meals()
{
    if () 
    {

    }
}
*/

void get_each_meal_cost()
{
    printf("\n You have had a total of $%0.2lf meals left to input \n",total_meals );
    printf("\n Determine whether the meal you are inputting is Breakfast, Lunch, or Dinner \n");
    printf("\n For Breakfast type in 'B' below, For Lunch type in 'L' below, For Dinner type in 'D' below \n");
    scanf("%d", meal_type);

    if (meal_type = 'B')
    {
        printf("\n The company covers $9.00 for breakfast. Input the amount spent on this meal \n");
        scanf("%d", meal_cost);
        total_expenses = total_expenses + meal_cost;
        total_allowable_expenses = total_allowable_expenses + 9.00;
        if (meal_cost >= 9.00)
        {
        meal_cost = meal_cost - 9.00;
        }else if (meal_cost < 9.00)
        {
            total_refund = total_refund + (9.00 - meal_cost);
        }

    } else if (meal_type = 'L')
    {
        printf("\n The company covers $12.00 for lunch. Input the amount spent on this meal \n");
        scanf("%d", meal_cost);
        total_expenses = total_expenses + meal_cost;
        total_allowable_expenses = total_allowable_expenses + 12.00;
        if (meal_cost >= 12.00)
        {
        meal_cost = meal_cost - 12.00;
        } else if(meal_cost < 12.00)
        {
            total_refund = total_refund + (12.00 - meal_cost);
        }

    } else if (meal_type = 'D')
    {
        printf("\n The company covers $16.00 for dinner. Input the amount spent on this meal \n");
        scanf("%d", meal_cost);
        total_expenses = total_expenses + meal_cost;
        total_allowable_expenses = total_allowable_expenses + 16.00;
        if (meal_cost >= 16.00)
        {
            meal_cost = meal_cost - 16.00;
        } else if (meal_cost < 16.00)
        {
            total_refund = total_refund + (16.00 - meal_cost);
        }
    }
}