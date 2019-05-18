/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:09:50 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 15:56:12 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    lswod(char *s)
{
    int     i;
    int     n;

    i = 0;
    while(s[i])
        i++;
    while(ispace(s[i - 1]) == 1)
        i--;
    n = 0;
    while(--i >= 0 && (!(ispace(s[i]))))
        n++;
    write(1, s + i + 1, n);
}

int     main(int ac, char **av)
{
    if (ac == 2)
        lswod(av[1]);
    write(1, "\n", 1);
    return (0);
}