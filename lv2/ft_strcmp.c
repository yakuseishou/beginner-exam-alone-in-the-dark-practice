/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:09:42 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 21:09:45 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while(s1[i] && s2[i] && (s1[i] == s2[i]))
        i++;
    return (s1[i] - s2[i]);
}
/*to test
#include <string.h>
#include <stdio.h>

int     main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%d\n", strcmp(av[1], av[2]));
        printf("%d\n", ft_strcmp(av[1], av[2]));
    }
    return (0);
}
*/