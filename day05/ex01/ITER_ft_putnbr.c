/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ITER_ft_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 09:36:04 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/04 18:09:16 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

// int_min = -2147483648, int_max = 2147483647.
// The length of max/min int is _10_ digits (plus possible '-' sign).
void	ft_putnbr(int nb)
{
	int	i;
	int	result[11];
	int	rem_num;
	int	sign;

	sign = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	i = 0;
	rem_num = nb;
	while (rem_num != 0)
	{
		result[i] = rem_num % 10 * sign;
		rem_num /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar(result[i] + '0');
	}
}
