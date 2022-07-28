/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 12:48:28 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 12:59:49 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

// Returns the n-th element of the Fibonacci sequence, the first element being
// at the 0 index. We’ll consider that the Fibonacci sequence starts like this:
// 0, 1, 1, 2.
// If the index is less than 0, the function should return -1.
int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (result);
}
