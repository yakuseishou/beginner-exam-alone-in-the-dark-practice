/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 21:42:33 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/06 22:21:39 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*i;
	int		a;

	i = 0;
	a = 0;
	if (start > end)
	{
		i = (int*)malloc(sizeof(int) * (start - end + 1));
		while (end < start)
		{
			i[a] = start;
			a++;
			start--;
		}
		i[a] = end;
	}
	else if (end > start)
	{
		i = (int*)malloc(sizeof(int) * (end - start + 1));
		while (start < end)
		{
			i[a] = start;
			a++;
			start++;
		}
		i[a] = end;
	}
	return (i);
}
/*
#include <stdio.h>

int		main()
{
	int		*array = ft_range(0, -2);
	int		i;

	i = 0;
	while (i < 3)
	{
		printf("%d\n", array[i++]);
	}
}
*/
