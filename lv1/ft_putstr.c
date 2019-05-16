/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:30 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:08:00 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    write(1, str, i);
}

/* to test
int     main(int ac, char **av)
{
    if (ac == 2)
        ft_putstr(av[1]);
    write(1, "\n", 1);
    return (0);
}
*/