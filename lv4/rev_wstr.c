/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchen2 <kchen2@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 18:36:37 by kchen2            #+#    #+#             */
/*   Updated: 2019/04/26 19:43:36 by kchen2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*====================================./4-1-rev_wstr.txt========================
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in 
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.

If the number of parameters is different from 1, the program will display 
'\n'.

In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
l'indifference de celui precede mepris du temps le$
$> ./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "il contempla le mont" | cat -e
mont le contempla il$
$> ./rev_wstr | cat -e
$
$>
==================================================================================*/

#include <unistd.h>
#include <stdlib.h>

int		ispace(char c)
{
	if ((c >= 9 && c <=13) || c == ' ')
		return (1);
	return (0);
}

void	rews(char *s)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while(s[i + 1])
		i++;
	while(ispace(s[i]) == 1)
		i--;
	while(i >= 0)
	{
		if (!(ispace(s[i])))
			n++;
		if (i > 0 && ispace(s[i]))
		{
			write(1, s + i + 1, n);
			write(1, " ", 1);
			n = 0;
		}
		if (i == 0)
			write(1, s, n);
		i--;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rews(av[1]);
	write(1, "\n", 1);
	return (0);
}