/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:04:05 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:04:06 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main()
{
    int     i;
    char     a;
    char     b;

    i = 1;
    a = 'a';
    b = 'B';
    while(i <= 26)
    {
        if (i % 2 != 0)
        {
            write(1, &a, 1);
            a += 2;
        }
        else if (i % 2 == 0)
        {
            write(1, &b, 1);
            b += 2;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}

/* or
int     main()
{
    write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
    return (0);
}
*/