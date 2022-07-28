/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 09:03:07 by akurusio         ###   ########.fr       */
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
	char dest[] = "123456789";
	int len = 10;
	printf("Input: src: %s, dest: %s, n: %i, sizezof(src): %lu\n", src, dest, len, sizeof(src));
	//printf("Original: %s\n", strncpy(dest, src, len));
	printf("MY IMPLEMENTATION result: %p, dest: %s, sizeof(dest): %lu\n", ft_strncpy(dest, src, len), dest, sizeof(dest));

	return (0);
}
