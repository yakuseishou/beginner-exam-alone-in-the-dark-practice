/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:37:21 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 21:56:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
    while((n > 1) && (n % 2 == 0))
        n /= 2;
    if (n == 1)
        return (1);
    return (0);
}
/*to test
#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
    if (ac == 2)
        printf("%d\n", is_power_of_2(atoi(av[1])));
    return (0);
}
*/