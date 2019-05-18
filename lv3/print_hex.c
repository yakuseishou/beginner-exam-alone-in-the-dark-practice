/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:22:55 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/27 16:04:06 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		a = a * 10 + s[i] - '0';
		i++;
	}
	return (a);
}

void	hex(int	i)
{
	char *s;

	s = "0123456789abcdef";
	if (i == 0)
		write(1, "0", 1);
	while (i)
	{
		write(1, &s[i % 16], 1);
		i /= 16;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
