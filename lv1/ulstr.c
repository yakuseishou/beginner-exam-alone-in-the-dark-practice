#include <unistd.h>

void    uls(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        i++;
    }
    write(1, s, i);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        uls(av[1]);
    write(1, "\n", 1);
    return (0);
}