/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:52:27 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 15:54:47 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10 + 48;
		write(1, &n, 1);
	}
	if (n < 10)
	{
		n = n % 10 + 48;
		write(1, &n, 1);
	}
}

int		ft_atoi(char *s)
{
	int		a;
	int		i;

	i = 0;
	a = 0;
	while(s[i] >= '0' && s[i] <= '9')
	{
		a = a * 10 + s[i] - 48;
		i++;
	}
	return (a);
}

void	tab_mult(int n)
{
	int		i;

	i = 0;
	while(++i <= 9)
	{
		ft_putnbr(i);
		write(1, " X ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
	}
}

int		main(int ac, char **av)
{
	if ( ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		write(1, "\n", 1);
	return (0);
}
