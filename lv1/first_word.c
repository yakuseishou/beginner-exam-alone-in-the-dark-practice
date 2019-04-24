#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    fwod(char *s)
{
    int     i;
    int     n;
    int     k;

    i = 0;
    n = 1;
    k = 0;
    while(s[i] && ispace(s[i++]) == 1)
        k++;
    if (!s[i])
        n = 0;
    while(s[i] && !(ispace(s[i++])))
        n++;
    if (n != 0)
        write(1, s + k, n);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        fwod(av[1]);
    write(1, "\n", 1);
    return (0);
}