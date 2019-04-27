/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 16:50:46 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 19:00:48 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int		i;

	i = 2;
	while (i < n)
	{
		while(n % i == 0)
		{
			printf("%d*", i);
			n /= i;
		}
		i++;
	}
	if (i == n)
		printf("%d", i);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}