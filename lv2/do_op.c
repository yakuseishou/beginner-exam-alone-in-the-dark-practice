/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 18:35:42 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 20:41:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    isop(char *s)
{
    if (s[0] != '+' && s[0] != '-' && s[0] != '*'
        && s[0] != '/' && s[0] != '%')
        return (0);
    if (s[1] != '\0')
        return (0);
    return (s[0]);
}

int     doop(int a, char c, int b)
{
    int     n;

    n = 0;
    if (c == '*')
        n = a * b;
    else if (c == '/')
        n = a / b;
    else if (c == '%')
        n = a % b;
    else if (c == '+')
        n = a + b;
    else if (c == '-')
        n = a - b;
    return (n);
}

int     main(int ac, char **av)
{
    if (ac == 4 && isop(av[2]))    
        printf("%d", doop(atoi(av[1]), isop(av[2]), atoi(av[3])));
    printf("\n");
    return (0);
}