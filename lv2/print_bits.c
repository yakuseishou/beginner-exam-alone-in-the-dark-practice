/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 17:27:42 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/13 20:09:57 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;

	i = 256;
	while (i >>= 1)
	{
		if (octet & i)
			write(1, "1", 1);
		write(1, "0", 1);
	}
}
/* to test
int		main()
{i
	print_bits(2);
	return (0);
}
*/