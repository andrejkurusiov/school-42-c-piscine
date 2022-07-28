/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 16:19:33 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
char	*ft_strcpy(char *dest, char *src);

// ----> MAIN <-----
int	main(void)
{
	char src[5] = "12346";
	char dest[5] = "5678";
	printf("Input: src: %s, dest: %s\n", src, dest);
	printf("Original: %s\n", strcpy(dest, src));
	// printf("MY IMPLEMENTATION result: %p, %s\n", ft_strcpy(dest, src), dest);

	return (0);
}
