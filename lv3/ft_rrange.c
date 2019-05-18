/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:44:10 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/25 18:45:53 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int		i;
	int		*s;

	i = 0;
	s = NULL;
	if (end > start)
	{
		if (!(s = (int *)malloc(sizeof(end - start) + 1)))
			return (0);
		while (end != start)
		{
			s[i] = end;
			i++;
			end--;
		}
		s[i] = start;
	}
	else if (end < start)
	{
		if (!(s = (int *)malloc(sizeof(start - end) + 1)))
            return (0);
        while (end != start)
        {
            s[i] = end;
            i++;
            end++;
        }
        s[i] = start;
	}
	return (s);