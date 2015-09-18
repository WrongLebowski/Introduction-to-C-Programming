//Using Basic Data Types

#include <stdio.h>

int main(void)
{
    //Defining variables and assigning values
    int     integerVar = 100;
    float   floatingVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';

    _Bool   boolVar = 0;
    //Various ways to display variables using %X
    printf("integerVar = %i\n", integerVar);
    //%f displays values in standard manner; unless told otherwise will display value to 6 decimal places rounded
    printf("floatingVar = %f\n", floatingVar);
    //%e used to display the value of a float or double in scientific notation; assumes 6 decimal places rounded
    printf("doubleVar = %e\n", doubleVar);
    //%g chooses between %f and %e and also automatically removes from the display any trailing zeroes
    printf("doubleVar = %g\n", doubleVar);
    //%c used to display single character; character must be in single quotes ' ' not double " "
    printf("charVar = %c\n", charVar);
    //_bool variable can be displayed using the integer format character %i
    printf("boolVar = %i\n", boolVar);

    return 0;
}
