/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/07 14:08:53 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
int	*ft_range(int min, int max);

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

	// expected
	printf("RES expected:\n");
	if (atoi(para1) < atoi(para2))
		printf("[%s .. %i]\n", para1, atoi(para2) - 1);
	else
		printf("NULL pointer\n");

	// actual
	printf("RES actual:\n");
	int *res_my = ft_range(atoi(para1), atoi(para2));
	if (res_my == NULL)
	{
		printf("NULL pointer\n");
		return (0);
	}
	int i = 0;
	while (i < atoi(para2) - atoi(para1))
	{
		printf("%i ", *res_my++);
		i++;
	}

	return (0);
}
