/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:08:20 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/05 16:12:10 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_z(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == 'z')
		{
			write(1, "z", 1);
			break;
		}
		i++;
	}
	if (s[i] == '\0')
		write(1, "z", 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		aff_z(av[1]);
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	return(0);
}


/* or easier way since all cases writes z
 
int		main()
{
	write(1, "z\n", 2);
	return (0);
}
 */
