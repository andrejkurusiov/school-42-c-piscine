/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/06 12:37:03 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
char	*ft_strdup(char *src);

// ----> MAIN <-----
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Use two strings as parameters: <for original> <for my implementation>\n");
		return (1);
	}
	char *tst_orig = argv[1];
	char *tst_my = argv[2];

	// original
	printf("IN original: %s at %p\n", tst_orig, tst_orig);
	char *res_orig =  strdup(tst_orig);
	printf("RES original: %s at %p\n", res_orig, res_orig);

	// my
	printf("IN my: %s at %p\n", tst_my, tst_my);
	char *res_my = ft_strdup(tst_my);
	printf("RES my: %s at %p\n", res_my, res_my);

	return (0);
}
