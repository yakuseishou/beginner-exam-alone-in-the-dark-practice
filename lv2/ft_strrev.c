/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:11:35 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 21:30:28 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int     i;
    int     l;
    char    tmp;

    i = 0;
    l = 0;
    while(str[l])
        l++;
    l -= 1;
    while(i < l - 1)
    {
        tmp = str[i];
        str[i] = str[l];
        str[l] = tmp;
        i++;
        l--;
    }
    return (str);
}

#include <stdio.h>

int     main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s\n", av[1]);
        printf("%s\n", ft_strrev(av[1]));
    }
    return (0);
}