// File: ex2_1.c
// Name: Geoffery Mathieson
// Date: 09/03/2015
// Description:
//  Exercise 2.1 - Arithmetic Practice


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    int b = 4;
    int c = 6;
    float f = 5.0;
    float g = 8.0;
    //int result;

    //1. a + b - c = 0
    printf("%i + %i - %i = %i\n", a, b, c, a + b - c );
    //2. a + b * c = 26
    printf("%i + %i * %i = %i\n", a, b, c, a + b * c );
    //3. c / b = 1
    printf("%i / %i = %i\n", c, b, c / b );
    //4. c % b = 2
    printf("%i % (%i) = %i\n", c, b, c % b );
    //5. b % c = 4
    printf("%i % (%i) = %i\n", b, c, b % c );
    //6. g / f = 1.6
    printf("%f / %f = %g\n", g, f, g / f );
    //7. g / c = 1.3333
    printf("%f / %i = %g\n", g, c, g / c );
    //8. 12 / f = 2.4
    printf("12 / %f = %g\n", f, 12 / f );
    //9. 4 / 3 * 3.14159 = 3.14159
    printf("4 / 3 * 3.14159 = %f\n", (4 / 3) * 3.14159 );
    //10. 12 - 18 % b / c + a = 14
    printf("12 - 18 % %i / %i + %i = %i\n", b, c, a, 12 – 18 % b / c + a );
    //11. (5 + b / c) % 2 = 1
    printf("(5 + %i / %i) % 2 = %i\n", b, c );
    //12. 5 * 3 % 7 + 8 / 3 - 6 = -3
    printf("5 * 3 % 7 + 8 / 3 - 6 = %g\n", 5 * (3 % 7) + 8 / 3 - 6 );
    //13. (14 + 5) % 5 - 6 / 5.0 = 2.8
    printf("(14 + 5) % 5 - 6 / 5.0 = %g\n", (14 + 5) % 5 - 6 / 5.0 );
    //14. f / (10 % c) = 1.25
    printf("%f / (10 % '%i') = %g\n", f, c, f / (10 % c));
    //15. 20 * a + (g - c) = 42.0
    printf("20 * %i + (%f - %i) = %g\n", a , g, c, 20 * a + (g - c));


    return 0;
}
