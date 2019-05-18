/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 16:48:04 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 16:10:18 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		isnum(char *s)
{
	int		i;

	i = -1;
	while(s[++i])
		if(!(s[i] >= '0' && s[i] <= '9'))
			return (0);
	return (1);
}

int		ft_atoi(char *s)
{
	int		i;
	int		a;

	i = -1;
	a = 0;
	while(s[++i])
		a = a * 10 + s[i] - 48;
	return (a);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putnbr(n / 10);
		c = n % 10 + 48;
		write(1, &c, 1);
	}
	if (n < 10)
	{
		c = n % 10 + 48;
		write(1, &c, 1);
	}
}

int		isprim(int n)
{
	int		i;

	i = 1;
	while( ++i < n)
		if (n % i == 0)
			return (0);
	return (1);
}

void	aps(int	n)
{
	int		i;
	int		a;

	i = 1;
	a = 0;
	while(++i <= n)
		if (isprim(i) == 1)
			a +=i;
	ft_putnbr(a);
	write(1, "\n", 1);
}

int		main(int ac , char **av)
{
	if (ac == 2 && isnum(av[1]))
		aps(ft_atoi(av[1]));
	else
		write(1, "0\n", 2);
	return (0);
}