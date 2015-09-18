//Asking the user for input
#include <stdio.h>


int main()
{
    int n, number, triangularNumber;

    printf("What triangular number do you want?");
    scanf ("%i", &number);

    triangularNumber = 0;

    for ( n = 1; n <= 10; ++n )
        triangularNumber += n;

    printf("Triangular number %i is %i\n", number, triangularNumber);

    return 0;
}
