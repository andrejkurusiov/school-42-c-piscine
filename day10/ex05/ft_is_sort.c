/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:29:53 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 12:43:12 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));
int	sorted_ascending(int *tab, int length, int (*f)(int, int));
int	sorted_descending(int *tab, int length, int (*f)(int, int));

int	sorted_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	sorted_descending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

// Create a function ft_is_sort which returns 1 if the array is sorted
// and 0 if it isn’t.
// The function given as argument should return a negative integer
//  if the first argument is lower than the second,
//  0 if they’re equal or a positive integer for anything else.
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (sorted_ascending(tab, length, f))
		return (1);
	if (sorted_descending(tab, length, f))
		return (1);
	return (0);
}
