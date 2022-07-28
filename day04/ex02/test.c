/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 11:29:46 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

// the function to be tested
int	ft_iterative_power(int nb, int power);

// PUTCHAR
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

// MAIN
int	main(void)
{
	// int n = -6; // error --> 0
	printf("%d\n", ft_iterative_power(5, -1)); // the function to be tested
	printf("%d\n", ft_iterative_power(5, 0)); // the function to be tested
	printf("%d\n", ft_iterative_power(5, 1)); // the function to be tested
	printf("%d\n", ft_iterative_power(5, 2)); // the function to be tested
	return (0);
}
