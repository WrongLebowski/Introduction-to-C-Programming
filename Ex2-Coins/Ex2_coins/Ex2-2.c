/*
** File: Ex2-2.c
** Module 2, Exercise 2
** Geoffery Mathieson
** 09/03/2015
**
**  Program outputs the value of the coins as
** dollars and cents
**
** Practice with arithmetic operators
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare and initialize variables for
    // the number of quarters, dimes, nickels and pennies
    int numQ = 14;
    int numD = 0;
    int numN = 9;
    int numP = 18;

    // declare variables for total value of the coins
    // and the number of dollars and cents
    float q = 0.25;
    float d = 0.10;
    float n = 0.05;
    float p = 0.01;
    float cents = (((numQ * q) + (numD * d) + (numN * n) + (numP * p))*100);
    int dollars = ((numQ * q) + (numD * d) + (numN * n) + (numP * p));

    /* calculate the value of all coins as cents */
    printf("Cents = %g\n", cents);

    // calcuate the number of dollars from the cents
    printf("Number of dollars from cents = %i\n", dollars );
    // calculate the number of cents left

    // output the number of each coin
    printf("Number of each coin: %i Quarters, %i Dimes, %i Nickels, %i Pennies\n", numQ, numD, numN, numP);
    // the value of the coins, number of dollars and number of cents
    printf("Value of coins = %g cents; Numbers of dollars and cents = %g \n", cents, cents/100);

    return 0;
}
