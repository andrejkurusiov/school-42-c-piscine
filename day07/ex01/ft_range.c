/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:23:31 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/07 14:39:00 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

// Create a function ft_range which returns an array of ints.
// This int array should contain all values between min and max.
// min included - max excluded.
// If min’s value is greater or equal to max’s value,
//  a null pointer should be returned.
// int_min = -2147483648, int_max = 2147483647.
int	*ft_range(int min, int max)
{
	int	*result;
	int	*j;

	if (min >= max)
		result = (void *)0;
	else
	{
		result = (int *) malloc(sizeof(*result) * (max - min));
		j = result;
		while (min < max)
		{
			*j = min;
			j++;
			min++;
		}
	}
	return (result);
}
