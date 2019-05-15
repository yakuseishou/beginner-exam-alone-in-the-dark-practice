/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 20:30:22 by kchen2            #+#    #+#             */
/*   Updated: 2019/05/14 20:02:06 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list	*temp;
	int		tmp;
	int		sorted;

	sorted = 0;
	while(!sorted)
	{
		sorted = 1;
		temp = lst;
		while(temp->next)
		{
			if (cmp(temp->data, temp->next->data) == 0)
			{
				sorted = 0;
				tmp = temp->data;
				temp->data = temp->next->data;
				temp->next->data = tmp;
				temp = temp->next;
			}
			else
				temp = temp->next;
		}
	}
	return (lst);
}
/* to test
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int     main()
{
    t_list  a;
    t_list  b;
    t_list  c;
    t_list  d;

    a.data = 5;
    b.data = 2;
    c.data = 42;
    d.data = 3;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    printf("a:%d b:%d c:%d d:%d\n", a.data, b.data, c.data, d.data);
    sort_list(&a, ascending);
    printf("a:%d b:%d c:%d d:%d\n", a.data, b.data, c.data, d.data);
}
*/