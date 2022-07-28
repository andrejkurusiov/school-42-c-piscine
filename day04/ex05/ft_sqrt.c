/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 13:04:11 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/02 15:24:51 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 0;
	if (nb < 0)
		return (result);
	i = nb / 2 + 1;
	while (i >= 1)
	{
		if (i * i == nb)
			return (i);
		i--;
	}
	return (result);
}
