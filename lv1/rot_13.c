#include <unistd.h>

void    rott(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
            s[i] = s[i] + 13;
        else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
            s[i] = s[i] - 13;
        i++;
    }
    write(1, s, i);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        rott(av[1]);
    write(1, "\n", 1);
    return (0);
}