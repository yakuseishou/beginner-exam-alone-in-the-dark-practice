#include <stdlib.h>

int     ft_strlen(char *s)
{
    int     l;

    l = 0;
    while(s[l])
        l++;
    return (l);
}

char    *ft_strdup(char *src)
{
    char    *s;
    int     i;

    if (!(s = (char *)malloc(sizeof(ft_strlen(src) + 1))))
        return (0);
    i = -1;
    while(src[++i])
        s[i] = src[i];
    s[i] = '\0';
    return (s);
}
/*to test
#include <stdio.h>
#include <string.h>

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s\n", av[1]);
        printf("%s\n", ft_strdup(av[1]));
        printf("%d\n", strcmp(av[1], ft_strdup(av[1])));
    }
    return (0);
}
*/
