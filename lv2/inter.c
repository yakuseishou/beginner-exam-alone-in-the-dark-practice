/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:58:31 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/24 15:08:15 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check(char *s, char c, int n)
{
	int		i;

	i = -1;
	while(++i < n)
		if (s[i] == c)
			return (0);
	return(1);
}

void	inn(char *s1, char *s2)
{
	int		i;
	int		j;

	i = -1;
	j = 0;
	while(s2[j])
		j++;
	while(s1[++i])
		if ((check(s1, s1[i], i) == 1) && (!(check(s2, s1[i], j))))
			write(1, &s1[i], 1);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inn(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}