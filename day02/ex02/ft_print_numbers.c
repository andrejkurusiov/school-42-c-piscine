/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                            :+:      :+:    :+:        */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:35:33 by akurusio          #+#    #+#             */
/*   Updated: 2022/06/30 11:35:51 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char	ch;
	char	endch;

	ch = '0';
	endch = '9';
	while (ch <= endch)
	{
		ft_putchar(ch);
		ch++;
	}
	ft_putchar('\n');
	return ;
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
