/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 14:39:29 by kchen2            #+#    #+#             */
/*   Updated: 2019/03/06 14:45:40 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
/* to test
#include <stdio.h>

int		main()
{
	char s1[] = "world";
	char s2[] = "hello";
	printf("before %s\n", s1);
	printf("after %s\n", ft_strcpy(s1, s2));
	return (0);
}
*/
