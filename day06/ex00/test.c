/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/07 09:25:16 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// To compile: gcc test.c -L. -lft

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "libft.a" -- doesn't work like that

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
// void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
// ----> the function to be tested

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("Try providing 1 parameter.");
	}
	else //if (argc == 2)
	{
		ft_putstr("Your string printed:\n");
		ft_putstr(argv[1]);
		ft_putchar('\n');
		// ft_putstr("Your string length: ");
		// ft_putnbr(ft_strlen(argv[1]));
		// ft_putchar('\n');
	}

	return (0);
}
