//Program 4.8 Reverse the Digits of a Number

#include <stdio.h>


int main()
{
    int number, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &number);

    while ( number != 0) {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    printf("\n");

    return 0;
}
