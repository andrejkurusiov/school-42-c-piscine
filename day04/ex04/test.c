/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 15:42:55 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "stdio.h"

// the function to be tested
int	ft_fibonacci(int index);

// PUTCHAR
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

// MAIN
int	main(void)
{
	printf("-1: %d\n", ft_fibonacci(-1)); // res: -1
	printf("0: %d\n", ft_fibonacci(0)); // res: 0
	printf("1: %d\n", ft_fibonacci(1)); // res: 1
	printf("1: %d\n", ft_fibonacci(2)); // res: 1
	printf("2: %d\n", ft_fibonacci(3)); // res: 2
	printf("3: %d\n", ft_fibonacci(20)); // res: 3
	return (0);
}
