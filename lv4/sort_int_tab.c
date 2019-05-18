/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 19:48:37 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 20:01:07 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int    i;
    int     tmp;

    i = size;
    while(--i)
    {
        if (tab[i] < tab[i - 1])
        {
            tmp = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = tmp;
            i = size;
        }
    }
}