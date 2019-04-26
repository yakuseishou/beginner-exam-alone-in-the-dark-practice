/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:52:56 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 19:52:57 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    pgcd(int a, int b)
{
    int     i;

    if (a > b)
    {
        i = b;
        while(i > 0 && (a % i != 0 || b % i != 0))
            i--;
        printf("%d", i);
    }
    else if (a < b)
    {
        i = a;
        while(i > 0 && (a % i != 0 || b % i != 0))
            i--;
        printf("%d", i);
    }
    else
        printf("%d", a);
}

int     main(int ac, char **av)
{
    if (ac == 3)
        pgcd(atoi(av[1]), atoi(av[2]));
    printf("\n");
    return (0);
}