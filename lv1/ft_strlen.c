int     ft_strlen(char *str)
{
    int     l;

    l = 0;
    while(str[l])
        l++;
    return (l);
}
/*
#include <stdio.h>

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%d\n", ft_strlen(av[1]));
    return (0);
}
*/