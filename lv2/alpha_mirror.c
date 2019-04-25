#include <unistd.h>

void    alpmir(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = 'a' + 'z' - s[i];
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = 'A' + 'Z' - s[i];
        i++;
    }
    write(1, s, i);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        alpmir(av[1]);
    write(1, "\n", 1);
    return (0);
}