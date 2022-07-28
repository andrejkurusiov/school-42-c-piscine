
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
int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	a_more_b(int a, int b)
{
	if (a < b)
		return (-1);
	if (a == b)
		return (0);
	return (1);
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

	const	int	ARR_LEN = 4;

	int arr[ARR_LEN] = {
		100,
		22,
		21,
		20
	};
	int	*ptr = arr;

	int	(*p_f)(int, int) = a_more_b;

	printf("-> INITIAL: TODO\n");

	// EXPECTED
	printf("-> EXPECTED:\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	int	actual = ft_is_sort(ptr, ARR_LEN, p_f);
	printf("%i\n", actual);

	return (0);
}
