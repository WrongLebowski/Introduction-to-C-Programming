//Program 6.5 Initializing Arrays
/* produces an array for the the integer value squared */

#include <stdio.h>

int main()
{
    int array_values[10] = { 0, 1, 4, 9, 16 };
    int i;

    for ( i = 5; i < 10; ++i )//we already defined 0-4 so this starts at 5.
        array_values[i] = i * i; /* i^2 */

    for ( i = 0; i < 10; ++i )
    printf("array_values[%i] = %i\n", i, array_values[i]);

    return 0;
}
