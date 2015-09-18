// File:Ch3-Ex4.c
// Name: Geoffery Mathieson
// Date: 9/3/2015
// Description:
//  Textbook Chapter 3, Exercise 4, page 40
//
// Convert a temperature in degrees Fahrenheit to degrees Celsius
//  C =  (F - 32) * 1.8

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double fahrenheit, celsius;

    // initialize degrees fahrenheit
    fahrenheit = 27.0;
    // calculate degrees celsius
    celsius = ((fahrenheit - 32.0) / 1.8);
    // output both temperatures
    printf("%g degrees Celcius is equal to %g degrees Fahrenheit\n", celsius, fahrenheit);


    return 0;
}
