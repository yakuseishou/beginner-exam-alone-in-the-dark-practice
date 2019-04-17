/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:36:37 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/13 19:42:52 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		space(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int		ft_strlen(char *s)
{
	int		l;

	l = 0;
	while(s[l])
		l++;
	return (l);
}

void	rvwstr(char *s)
{
	int		i;
	int		k;

	i = ft_strlen(s) - 1;
	while(space(s[i]) == 1)
		i--;
	while(i >= 0)
	{
		if ((!space(s[i])) && (i == 0 || space(s[i - 1]) == 1))
		{
			k = i;
			while ((!(space(s[k]))) && k < ft_strlen(s))
			{
				write(1, &s[k], 1);
				k++;
			}
		}
		else if (i > 0 && (space(s[i]) == 1) && (!(space(s[i - 1]))))
			write(1, " ", 1);
		i--;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rvwstr(av[1]);
	write(1, "\n", 1);
	return (0);
}