
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
int	match(char *s1, char *s2);

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Use two parameters: <min> <max>\n");
		return (1);
	}
	char *para1 = argv[1];
	char *para2 = argv[2];


	// int *range;// = (void *)0; // sizeof(void) = 8
	// printf("%i\n", (int) sizeof(range));
	// EXPECTED
	printf("-> EXPECTED: TODO\n");
	// if (atoi(para1) < atoi(para2))
	// 	{
	// 		// printf("sizeof(int): %i\n", (int) sizeof(int));
	// 		printf("%i\n", (atoi(para2)-atoi(para1)));
	// 	}
	// else
	// 	printf("0\n");

	// ACTUAL
	int actual = match(para1, para2);
	printf("-> ACTUAL:\n");
	printf("%i\n", actual);

	return (0);
}
