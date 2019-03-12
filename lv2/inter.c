/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 13:40:31 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/12 14:46:04 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkd(char *s, char c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return(1);
}

void	inter(char *s, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if ((checkd(s2, s2[j], j) == 1) && !(checkd(s2, s[i], j)))
		{
			while(s[i])
   		 	{
       			 if (checkd(s, s[i], i) == 1)		
					write(1, &s[i], 1);
				i++;
			}
		}
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
