/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 16:40:16 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
char	*ft_strncpy(char *dest, char *src, unsigned int n);

// ----> MAIN <-----
int	main(void)
{

	char src[] = "abc";
	char dest[] = "12345678";
	char ft_src[] = "abc";
	char ft_dest[] = "12345678";
	int len = 6;
	printf("Input: src: %s, dest: %s, n: %i, sizezof(src): %lu\n", src, dest, len, sizeof(src));
	printf("Original: %s\n", strncpy(dest, src, len));
	printf("MY IMPLEMENTATION result: %s\n", ft_strncpy(ft_dest, ft_src, len));

	return (0);
}
