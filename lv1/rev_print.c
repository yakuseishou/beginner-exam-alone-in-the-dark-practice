#include <unistd.h>

void    revp(char *s)
{
    int     i;

    i = 0;
    while(s[i])
        i++;
    while(--i >= 0)
        write(1, &s[i], 1);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        revp(av[1]);
    write(1, "\n", 1);
    return (0);
}