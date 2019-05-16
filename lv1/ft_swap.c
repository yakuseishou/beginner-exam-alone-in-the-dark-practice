/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:07:38 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:08:04 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
    int     x;
    int     y;

    x = *a;
    y = *b;
    *a = y;
    *b = x;
}
/* to test
#include <stdio.h>

int     main()
{
    int     a = 2;
    int     b = 6;

    printf("%d\n", a);
    printf("%d\n", b);
    ft_swap(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}
*/