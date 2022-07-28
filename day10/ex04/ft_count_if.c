/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:28:20 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 15:34:02 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (tab[i])
	{
		if (f((tab[i])) == 1)
			counter++;
		i++;
	}
	return (counter);
}
