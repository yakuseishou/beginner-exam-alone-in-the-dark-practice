/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastparam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:16:33 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/06 14:33:20 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lastparam(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

int		main(int ac, char **av)
{
	if (ac >= 2)
		lastparam(av[ac -1]);
	write(1, "\n", 1);
	return (0);
}
