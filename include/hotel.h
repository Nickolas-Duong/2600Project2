/*
  Created by Andrew Jujun
*/
#ifndef HOTEL_H
#define HOTEL_H

//Headers
#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "input.h"

//cosntant numbers
#define MINIMUM_FEE 0.00
#define ALLOWABLE_HOTEL_EXPENSES 90.00

//function declarations
double get_conference_fee();
double get_hotel_fee();

#endif // HOTEL_H