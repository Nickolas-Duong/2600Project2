/*
  Created by Andrew Jujun
*/
#ifndef HOTEL_H
#define HOTEL_H

#include<string.h> 
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#include "input.h"
#include "../include/day.h"
#define MINIMUM_FEE 0.00
#define ALLOWABLE_HOTEL_EXPENSES 90.00

double get_conference_fee();
double get_hotel_fee();

#endif // HOTEL_H