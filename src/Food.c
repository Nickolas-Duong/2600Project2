#include "../include/Food.h"

void get_Food_expenses(Day * day)
{
    int total_meals;
    printf("\n The company covers certain meals on the day of arrival and departure depending on time of arrival/departure. \n");
    printf("\n Insert the number of meals for Day %d\n", getDayNum(day));
    total_meals = input_dec_number();

    get_each_meal_cost(day, total_meals);
  
}
/*
void total_allowed_meals()
{
    if () 
    {

    }
}
*/

void get_each_meal_cost(Day * day, int mealNum)
{
    int temp = mealNum;
    char meal_type;
    double meal_cost;
    bool breakfast = false;
    bool lunch = false;
    bool dinner = false;


    do
    {
        
        printf("\n You have had a total of %d meals left to input \n", temp );
        printf("\n Determine whether the meal you are inputting is Breakfast, Lunch, or Dinner \n");
        printf("\n For Breakfast type in 'B' below, For Lunch type in 'L' below, For Dinner type in 'D' below \n");
        meal_type = input_char();

        if (toupper(meal_type) == 'B')
        {
            printf("\n The company may cover up to $9.00 for breakfast. Input the amount spent on this meal \n");
            meal_cost = input_fee(MINIMUM_FEE);

            breakfast = true;

            addTotalExpense(day, meal_cost);
            temp = temp - 1;

            // total_expenses = total_expenses + meal_cost;
            // total_allowable_expenses = total_allowable_expenses + 9.00;
            // if (meal_cost >= 9.00)
            // {
            // meal_cost = meal_cost - 9.00;
            // }else if (meal_cost < 9.00)
            // {
            //     total_refund = total_refund + (9.00 - meal_cost);
            // }

        } 
        else if (toupper(meal_type) == 'L')
        {
            printf("\n The company may cover up to $12.00 for lunch. Input the amount spent on this meal \n");
            meal_cost = input_fee(MINIMUM_FEE);

            lunch = true;

            addTotalExpense(day, meal_cost);
            temp = temp - 1;
            // scanf("%d", meal_cost);
            // total_expenses = total_expenses + meal_cost;
            // total_allowable_expenses = total_allowable_expenses + 12.00;
            // if (meal_cost >= 12.00)
            // {
            // meal_cost = meal_cost - 12.00;
            // } else if(meal_cost < 12.00)
            // {
            //     total_refund = total_refund + (12.00 - meal_cost);
            // }

        } 
        else if (toupper(meal_type) == 'D')
        {
            printf("\n The company may cover up to $16.00 for dinner. Input the amount spent on this meal \n");
            meal_cost = input_fee(MINIMUM_FEE);

            dinner = true;

            addTotalExpense(day, meal_cost);
            temp = temp - 1;
            
            // scanf("%d", meal_cost);
            // total_expenses = total_expenses + meal_cost;
            // total_allowable_expenses = total_allowable_expenses + 16.00;
            // if (meal_cost >= 16.00)
            // {
            //     meal_cost = meal_cost - 16.00;
            // } else if (meal_cost < 16.00)
            // {
            //     total_refund = total_refund + (16.00 - meal_cost);
            // }
        }
    }while (temp > 0);

    if(dinner == true && day->arrival == true && day->hour <= 19)
    {
        if(day->minutes >= 0 && day->hour != 19 || day->minutes == 0 && day->hour == 19)
        {
            addAllowedExpense(day, ALLOWABLE_DINNER);
            if(lunch == true)
            {
                addAllowedExpense(day, ALLOWABLE_LUNCH);
            }

            if(breakfast == true)
            {
                addAllowedExpense(day, ALLOWABLE_BREAKFAST);
            }
        }
    }
    else if(dinner == true && day->departure == true && day->hour <= 18)
    {
        if(day->minutes >= 0 && day->hour != 18 || day->minutes == 0 && day->hour == 18)
        {
            addAllowedExpense(day, ALLOWABLE_DINNER);
            if(lunch == true)
            {
                addAllowedExpense(day, ALLOWABLE_LUNCH
                );
            }

            if(breakfast == true)
            {
                addAllowedExpense(day, ALLOWABLE_BREAKFAST);
            }
        }
    }

    if(lunch == true && day->arrival == true && day->hour <= 13)
    {
        if(day->minutes >= 0 && day->hour != 13 || day->minutes == 0 && day->hour == 13)
        {
            addAllowedExpense(day, ALLOWABLE_LUNCH);

            if(breakfast == true)
            {
                addAllowedExpense(day, ALLOWABLE_BREAKFAST);
            }
        }
    }
    else if(lunch == true && day->departure == true && day->hour <= 12)
    {
        if(day->minutes >= 0 && day->hour != 12 || day->minutes == 0 && day->hour == 12)
        {
            addAllowedExpense(day, ALLOWABLE_LUNCH);

            if(breakfast == true)
            {
                addAllowedExpense(day, ALLOWABLE_BREAKFAST);
            }
        }
    
    }

    if(breakfast == true && day->arrival == true && day->hour <= 8)
    {
        if(day->minutes >= 0 && day->hour != 8 || day->minutes == 0 && day->hour == 8)
            addAllowedExpense(day, ALLOWABLE_BREAKFAST);
    }
    else if(breakfast == true && day->departure == true && day->hour <= 7)
    {
        if(day->minutes >= 0 && day->hour != 7 || day->minutes == 0 && day->hour == 7)
            addAllowedExpense(day, ALLOWABLE_BREAKFAST);
    }
}