//Program 6.6 Introducing Character Arrays

#include <stdio.h>


int main()
{
    char    word[] = { 'H', 'e', 'l', 'l', 'o', '!' }; /* the # of array elements
                                                        isn't declared. Because of
                                                        this all elements must be
                                                        declared.*/
    int     i;

    for ( i = 0; i < 6; ++i )
        printf("%c", word[i]);

    printf("\n");

    return 0;
}
