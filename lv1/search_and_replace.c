/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:52 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:08:08 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    isletter(char *s)
{
    int     i;

    i = 0;
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        i++;
    if (s[i] == '\0')
        return (s[0]);
    return (0);
}

void    snr(char *s, char a, char b)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if (s[i] == a)
            s[i] = b;
        i++;
    }
    write(1, s, i);
}

int     main(int ac, char **av)
{
    if (ac == 4 && isletter(av[2]) != 0 && isletter(av[3]) != 0)
        snr(av[1], isletter(av[2]), isletter(av[3]));
    write(1, "\n", 1);
    return (0);
}