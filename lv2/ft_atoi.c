/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 19:43:22 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/16 16:16:47 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		neg;
	unsigned int	a;

	i = 0;
	neg = 1;
	a = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a * neg);
}
/* to test
#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", atoi(av[1]));
		printf("%d\n", ft_atoi(av[1]));
	}
	return (0);
}
*/