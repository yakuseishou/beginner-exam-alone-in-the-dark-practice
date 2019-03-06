/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:02:39 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/06 14:29:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    first_param(char *s)
{
    int     i;
    
    i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

int		main(int ac, char **av)
{
	if (ac >= 2)
        first_param(av[1]);
	write(1, "\n", 1);
	return (0);
}