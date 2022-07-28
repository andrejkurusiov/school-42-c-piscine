
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
int	ft_any(char **tab, int(*f)(char*));

int	a_more_b(char *ch)
{
	return (strlen(ch) > 15);
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

	char *(arr[4]) = {
		"First entry",
		"Second entry.15==",
		"Third entry",
		0
	};
	char	**ptr = arr;

	int	(*p_f)(char*) = a_more_b;

	printf("-> INITIAL: TODO\n");

	// EXPECTED
	printf("-> EXPECTED:\n");
	// TODO

	// ACTUAL
	printf("-> ACTUAL:\n");
	int	actual = ft_any(ptr, p_f);
	printf("%i\n", actual);

	return (0);
}
