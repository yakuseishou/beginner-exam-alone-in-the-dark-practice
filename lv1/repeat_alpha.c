/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:41 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:08:05 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    repeat(char c, int n)
{
    while(n-- > 0)
        write(1, &c, 1);
}

void    repa(char *s)
{
    int     i;

    i = 0;
    while(s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            repeat(s[i], s[i] - 96);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            repeat(s[i], s[i] - 64);
        else
            write(1, &s[i], 1);    
        i++;
    }
}

int     main(int ac, char **av)
{
    if (ac == 2)
        repa(av[1]);
    write(1, "\n", 1);
    return (0);
}