/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:53:42 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 15:30:57 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*));

// Returns 1 if, passed to the function f, at least one element of the array
// returns 1. Else, it should return 0.
// The array will be delimited by 0.
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f((tab[i])) == 1)
			return (1);
		i++;
	}
	return (0);
}
