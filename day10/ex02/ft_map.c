/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:42:40 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/11 15:33:21 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

// For a given ints array, applies a function on all elements of the array
// (in order) and returns a array of all the return values.
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr2;

	arr2 = (int *) malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(arr2 + i) = f(*(tab + i));
		i++;
	}
	return (arr2);
}
