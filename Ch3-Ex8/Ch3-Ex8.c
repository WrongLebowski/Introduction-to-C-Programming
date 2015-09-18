// File: Ch3-Ex8.c
// Name: Geoffery Mathieson
// Date: 09/03/2015
// Description:
//  Chapter 3, Exercise 9, page 41
//
//  Round integer i to next multiple of integer j

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // declare variables for i, j and next multiple of j
    int i , j , nextMultiple;
    // perform calculation described in text for i = 365 and j = 7
    i = 365, j = 7;
    nextMultiple = i + j - i % j;
    // output the values of i, j and the next multiple of j
    // with appropriate labels
    printf("the next multiple is %i for %i and %i\n", nextMultiple, i, j);
    // perform calculation described in text for i = 12,258 and j = 23
    i = 12258, j = 23;
    nextMultiple = i + j - i % j;
    // output the values of i, j and the next multiple of j
    // with appropriate labels
    printf("the next multiple is %i for %i and %i\n", nextMultiple, i, j);
    // perform calculation described in text for i = 996 and j = 4
    i = 996, j = 4;
    nextMultiple = i + j - i % j;
    // output the values of i, j and the next multiple of j
    // with appropriate labels
    printf("the next multiple is %i for %i and %i\n", nextMultiple, i, j);


    return 0;
}
