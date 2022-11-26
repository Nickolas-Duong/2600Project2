#include "../include/input.h"

char input_char( char letter){
    letter = getchar();
    while(!(toupper(letter) == 'Y' || toupper(letter) == 'N')){
        printf("The input should be 'Y' for Yes or 'N' for No!\n");
        letter = getchar();
    }
    return letter;
}

int input_dec_number(int number){
    scanf("%d", number);
    while(number<1){
        printf("Number should be greater than 1 and can not be negative!!\n");
        scanf("%d", number);
    }
    return number;
}

double input_time(double time){
    scanf("%f", time);
    while(time<0 || time > 23.59){
        printf("Please enter the valid time!! \n");
        scanf("%f", time);
    }
    return time;
}

double input_fee(double minimum)
{
  double fee;

  do
  {
    scanf("%lf", &fee);
    if (fee < minimum)
      printf("Fee can't be less than %0.2lf!!\n", minimum);
  }
  while (fee < minimum);

  return fee;
}