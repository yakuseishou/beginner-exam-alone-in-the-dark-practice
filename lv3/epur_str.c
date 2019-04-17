#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    epurS(char *s)
{
    int     i;

    i = 0;
    while(ispace(s[i]) == 1)
        i++;
    while(s[i])
    {
        if (!(ispace(s[i])) && s[i])
            write(1, &s[i], 1);
        else if ((ispace(s[i]) == 1)
            && (!(ispace(s[i + 1]))) && s[i + 1] != '\0')
            write(1, " ", 1);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        epurS(av[1]);
    write(1, "\n", 1);
    return (0);
}