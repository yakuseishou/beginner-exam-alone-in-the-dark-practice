#include <unistd.h>

int     main()
{
    int     i;
    char     a;
    char     b;

    i = 1;
    a = 'a';
    b = 'B';
    while(i <= 26)
    {
        if (i % 2 != 0)
        {
            write(1, &a, 1);
            a += 2;
        }
        else if (i % 2 == 0)
        {
            write(1, &b, 1);
            b += 2;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

/* or
int     main()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return (0);
}
*/