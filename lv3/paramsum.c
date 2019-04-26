/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:45:43 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 21:14:50 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int n)
{
    int     a;

    a = 0;
    if (n > 9)
    {
        ft_putnbr(n / 10);
        a = n % 10 + 48;
        write(1, &a, 1);
    }
    if (n < 10)
    {
        a = n % 10 + 48;
        write(1, &a, 1);
    }
}

int     main(int ac, char **av)
{
    int     i;

    i = 1;
    if (ac > 1)
    {
        while(i < ac && av[i])
            i++;
        ft_putnbr(i - 1);
    }
    else
        write(1, "0", 1); 
    write(1, "\n", 1);
    return (0);
}