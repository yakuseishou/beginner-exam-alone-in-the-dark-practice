#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a, int b)
{
    int     i;

    if (a > b)
    {
        i = b;
        while(i > 0 && (a % i != 0 || b % i != 0))
            i--;
        printf("%d", i);
    }
    else if (a < b)
    {
        i = a;
        while(i > 0 && (a % i != 0 || b % i != 0))
            i--;
        printf("%d", i);
    }
    else
        printf("%d", a);
}

int     main(int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    printf("\n");
    return (0);
}