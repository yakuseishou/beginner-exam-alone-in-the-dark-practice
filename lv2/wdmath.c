/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmath.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 20:44:12 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/12 20:48:33 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		checkd(char *s, char c, int i)
{
	if (s[i] == c)
		return (1);
	return (0);
}

void	wdm(char *s, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] && s2[j])
	{
		if (checkd(s2, s[i], j) == 1)
			i++;
		j++;
	}
	if (s[i] == '\0')
		ft_putstr(s);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		wdm(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
