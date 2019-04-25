#include <unistd.h>

int     check(char *s, char c, int n)
{
    int     i;

    i = -1;
    while(++i < n)
        if (s[i] == c)
            return (0);
    return (1);
}

void    uni(char *s1, char *s2)
{
    int     i;
    int     j;

    i = -1;
    j = -1;
    while(s1[++i])
        if (check(s1, s1[i], i) == 1)
            write(1, &s1[i], 1);
    while(s2[++j])
        if ((check(s1, s2[j], i) == 1) && (check(s2, s2[j], j) == 1))
            write(1, &s2[j], 1);
}

int     main(int ac, char **av)
{
    if (ac == 3)
        uni(av[1], av[2]);
    write(1, "\n", 1);
    return (0);
}