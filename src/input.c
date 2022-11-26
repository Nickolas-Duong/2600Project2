#include "../include/input.h"

// handle yes no input
char input_char( char letter){
    letter = getchar();
    while(!(toupper(letter) == 'Y' || toupper(letter) == 'N')){
        printf("The input should be 'Y' for Yes or 'N' for No!\n");
        letter = getchar();
    }
    return letter;
}

//handle the input for number of days or miles
int input_dec_number(int number){
    scanf("%d", number);
    while(number<1){
        printf("Number should be greater than 1 and can not be negative!!\n");
        scanf("%d", number);
    }
    return number;
}

// 00:00 - 23:59: valid time
double input_time(double time){
    scanf("%f", time);
    while(time<0 || time > 23.59){
        printf("Please enter the valid time!! \n");
        scanf("%f", time);
    }
    return time;
}