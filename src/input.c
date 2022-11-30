#include "../include/input.h"

//Validate time input
int validTime(int hours, int min)
{
    int ret = 0;
    if(hours > 24 || min >= 60 || hours == 24 && min > 0 || hours < 0 || min < 0)
    {
        ret = 1;
    }

    return ret;
}

//get char input
char input_char(){
    fflush(stdin);

    char letter = getchar();

    while(!isalpha(letter)){
        printf("The input should be a letter!\n");
        letter = getchar();
    }

    return letter;
}

//get number input
int input_dec_number(){
    int number;

    scanf("%d", &number);
    while(number<1){
        printf("Number should be at least 1 and can not be negative!!\n");
        scanf("%d", &number);
    }

    return number;
}

// get time input
void input_time(Day * day){
    char input[100] = {0};
    int hour, min, validate = 1;

    fflush(stdin);

    while(validate != 0)
    {
        printf("\nEnter the Arrival or departure time in \"HH:MM\" format: ");
        fgets(input, 100, stdin);

        sscanf(input, "%d:%d", &hour, &min);

        validate = validTime(hour, min);

        if(validate != 0)
        {
            printf("\nInvalid Time. . . please try again. . .\n");
        }
        else
        {
            day->hour = hour;
            day->minutes = min;
        }
    }
}

//get fee input
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