/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 17:25:09 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ----> the function to be tested
int	ft_strcmp(char *s1, char *s2);

// ----> MAIN <-----
int	main(void)
{
	char s1[] = "abc";
	char s2[] = "123456789";
	s1[0] = '\200';
	s2[0] = '\0';
	// printf("Input: src: %s, dest: %s\n", s1, s2);
	printf("Original: %i\n", strcmp(s1, s2));
	printf("MY IMPLEMENTATION result: %i\n", ft_strcmp(s1, s2));

	return (0);
}
