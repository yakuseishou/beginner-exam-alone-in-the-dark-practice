/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 15:59:49 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 16:19:55 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int     f;

    f = 0;
    if (!a || !b)
        return (f);
    else if (a == b)
        return (a);
    else
    {
        if (a > b)
        {
            f = b;
            while(a % f != 0 || b % f != 0)
                f--;
        }
        else if (b > a)
        {
            f = a;
            while(a % f != 0 || b % f != 0)
                f--;
        }
        f = a * b / f;
    }
    return (f);
}