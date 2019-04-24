#include <unistd.h>

void    ro1(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
            s[i] = s[i] + 1;
        else if (s[i] >= 'z' || s[i] == 'Z')
            s[i] = s[i] - 25;
        i++;
    }
    write(1, s, i);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        ro1(av[1]);
    write(1, "\n", 1);
    return (0);
}