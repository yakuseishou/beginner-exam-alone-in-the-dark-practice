/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 16:17:07 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/30 17:33:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     check(char a, char b)
{
    if (a == ']')
    {
        if (b == '[')
            return (1);
    }
    else if (a == '}')
    {
        if (b == '{')
            return (1);
    }
    else if (a == ')')
    {
        if (b == '(')
            return (1);
    }
    return (0);
}

void    brac(char *s)
{
    char    tmp[4096];
    int     i;
    int     j;

    i = 0;
    j = 0;
    while(s[i])
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            tmp[j] = s[i];
            j++;
        }
        else if (s[i] == '}' || s[i] == ']' || s[i] == ')')
        {
            if (check(s[i], tmp[j - 1]) == 1)
                j--;
            else
            {
                j++;
                break;
            }
        }
        i++;
    }
    if (j == 0)
        write(1, "OK\n", 3);
    else
        write(1, "Error\n", 6);
}

int     main(int ac, char **av)
{
    int     i;

    i = 0;
    if (ac > 1)
    {
        while(++i < ac)
            brac(av[i]);
    }
    else
        write(1, "\n", 1);
    return (0);
}