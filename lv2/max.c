/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:25:11 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/17 20:11:51 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	int		max;
	int		i;

	i = -1;
	if (!len)
		return (0);
	max = tab[0];
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
/*
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 7;
	printf("%d", max(tab, 3));
	return (0);
}
*/