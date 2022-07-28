/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 16:13:33 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "stdio.h"

void	ft_ultimate_div_mod(int *a, int *b);	// the function to be tested

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 4;
	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b); // the function to be tested
	printf("%d %d", a, b);
	return (0);
}
