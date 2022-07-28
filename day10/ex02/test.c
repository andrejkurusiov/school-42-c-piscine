
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/10 15:06:45 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
int	*ft_map(int *tab, int length, int (*f)(int));

int	div_by_2(int a)
{
	return (a / 2);
}

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	// if (argc != 3)
	// {
	// 	printf("Use two parameters: <min> <max>\n");
	// 	return (1);
	// }
	char *para1 = argv[1];
	char *para2 = argv[2];

	const	int	ARR_LEN = 10;
	int	arr[ARR_LEN];
	int	*ptr = arr;
	for (size_t i = 0; i < ARR_LEN; i++)
		arr[i] = i * 2;

	int	(*p_f)(int) = div_by_2;

	printf("-> INITIAL array:\n");
	for (size_t i = 0; i < ARR_LEN; i++)
		printf("%i\t", *(ptr+i));
	printf("\nInitial array address: %p\n", ptr);

	// EXPECTED
	printf("-> EXPECTED: function = x / 2\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	int	*actual = ft_map(ptr, ARR_LEN, p_f);
	for (size_t i = 0; i < ARR_LEN; i++)
		printf("%i\t", *(actual + i));
	printf("\nActual array address: %p\n", actual);
	printf("\n");

	return (0);
}
