/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 15:38:08 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

// the function to be tested
int	ft_recursive_factorial(int nb);

// PUTCHAR
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

// MAIN
int	main(void)
{
	int n = -6; // error --> 0
	printf("%d\n", ft_recursive_factorial(n)); // the function to be tested
	n = 0; // 1
	printf("%d\n", ft_recursive_factorial(n)); // the function to be tested
	n = 12; // 479,001,600
	printf("%d\n", ft_recursive_factorial(n)); // the function to be tested
	n = 13; // 6,227,020,800 --> 0 (error)
	printf("%d\n", ft_recursive_factorial(n)); // the function to be tested
	n = 5; // 120
	printf("%d\n", ft_recursive_factorial(n)); // the function to be tested

	return (0);
}
