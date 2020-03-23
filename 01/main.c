/*
** Project_Euler. Problem 1. 
** Gleidan
*/

#include <stdio.h>

int		main()
{
    int summ, i;

    summ = i = 0;
    while (i < 1000)
    {
        if (i % 3 == 0 || i % 5 == 0)
            summ += i;
        i++;
    }
    printf("%i\n", summ);
    return (0);
}