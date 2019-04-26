/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:16:07 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 20:29:00 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ispace(char c)
{
    if ((c >= 9 && c <= 13) || c == ' ')
        return (1);
    return (0);
}

void    exps(char *s)
{
    int     i;

    i = 0;
    while(ispace(s[i]) == 1)
        i++;
    while(s[i])
    {
        if (!(ispace(s[i])))
            write(1, &s[i], 1);
        else if (ispace(s[i]) == 1 && (!(ispace(s[i + 1]))) && s[i + 1] != '\0')
            write(1, "   ", 3);
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        exps(av[1]);
    write(1, "\n", 1);
    return (0);
}