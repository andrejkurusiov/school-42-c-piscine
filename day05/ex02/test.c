/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 15:18:27 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include <stdlib.h>

// ----> the function to be tested
int	ft_atoi(char *str);
int	is_space(char c);

// ----> MAIN <-----
int	main(void)
{
	// printf("is_space(): %i\n", is_space('\t'));
	// printf("is_space(): %i\n", is_space('\n'));
	// printf("is_space(): %i\n", is_space('\v'));
	// printf("is_space(): %i\n", is_space('\f'));
	// printf("is_space(): %i\n", is_space('\r'));
	// printf("is_space(): %i\n", is_space(' '));
	// printf("is_space(): %i\n", is_space('0'));1
	printf("Starting tests.\n\n");
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("42"), ft_atoi("42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("975246"), ft_atoi("975246"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("		8"), ft_atoi("8"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("	 6"), ft_atoi("		 6"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi(""), ft_atoi(""));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-"), ft_atoi("-"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("--"), ft_atoi("--"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("+"), ft_atoi("+"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("++"), ft_atoi("++"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("+-77"), ft_atoi("+-77"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-+78"), ft_atoi("+-78"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("  -005"), ft_atoi("  -005"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("0067"), ft_atoi("0067"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("\n  5"), ft_atoi("\n  5"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("42lmao"), ft_atoi("42lmao"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("us-42"), ft_atoi("us-42"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("2147483647"), ft_atoi("2147483647"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("2147483648"), ft_atoi("2147483648"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-2147483648"), ft_atoi("-2147483648"));
	printf("%d : expected\n%d : ft_atoi\n\n", atoi("-2147483649"), ft_atoi("-2147483649"));
	printf("Testing complete.\n");
	return (0);
}
