// File: Ch3-Ex6.c
// Name: Geoffery Mathieson
// Date: 09/03/2015
// Description:
//  Chapter 3, Exercise 6, page 41
//  Polynomial evaluation

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // declare and initialize varaiable x
    float x = 2.55, y = ((x * x * x)), z = (x * x), polynomial;
    // declare variable to hold the value of the polynomial
    polynomial = (y+y+y) - (z+z+z+z+z) + 6;
    // output both variables with appropriate labels
    printf("The polynomial 3x^3-5x^2+6 = %f\n", polynomial);

    return 0;
}
