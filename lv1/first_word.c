#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    fwod(char *s)
{
    int     n;
    int     k;

    n = 0;
    k = 0;
    while(ispace(s[k]) == 1)
        k++;
    while(s[k + n] && !(ispace(s[k + n])))
        n++;
    if (*(s + k) != '\0')
        write(1, s + k, n);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        fwod(av[1]);
    write(1, "\n", 1);
    return (0);
}