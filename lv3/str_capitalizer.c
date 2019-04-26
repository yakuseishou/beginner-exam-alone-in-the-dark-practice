/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:15:39 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 21:27:29 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    scap(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if ((s[i] >= 'a' && s[i] <= 'z') && (ispace(s[i]) == 1 || i == 0))
            s[i] = s[i] - 32;
        else if ((s[i] >= 'A' && s[i] <= 'Z') && (!(ispace(s[i - 1]))) && i != 0)
            s[i] = s[i] + 32;
        i++;
    }
    write(1, s, i);
    write(1, "\n", 1);
}

int     main(int ac, char **av)
{
    int     i;

    i = 0;
    if (ac > 1)
    {
        while(++i < ac)
            scap(av[i]);
    }
    else
        write(1, "\n", 1);
    return (0);
}