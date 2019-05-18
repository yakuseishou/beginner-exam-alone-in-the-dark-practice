/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:25:25 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 21:05:27 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ispace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

void	ros(char *s)
{
	int		i;
	int		k;
	int		n;
	int		l;

	i = 0;
	k = 0;
	l = 0;
	while(ispace(s[i]) == 1)
	{
		k++;
		i++;
	}
	while(!(ispace(s[i])))
	{
		l++;
		i++;
	}
	n = 0;
	while(s[i])
	{
		if (!(ispace(s[i])))
			n++;
		if (n != 0 && ((ispace(s[i] == 1)) || s[i + 1] == '\0'))
		{
			write(1, s + i, n);
			write(1, " ", 1);
			n = 0;
		}
		i++;
	}
	write(1, s + k, l);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
		while(++i < ac)
			ros(av[i]);
	else
		write(1, "\n", 1);
	return (0);
}