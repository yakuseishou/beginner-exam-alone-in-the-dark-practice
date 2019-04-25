/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:10:18 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 17:30:08 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char r;
    unsigned char len;

    r = 0;
    len = 8;
    while(len--)
    {
        r = (r << 1) | (octet & 1);
        octet >>= 1;
    }
    return (r);
}
/* to test
#include <stdio.h>

int	main(void)
{
    printf("%d\n", reverse_bits(64));
    return(0);
}
*/