/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/06/30 14:05:43 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putint(int i)
{
	write(1, &i, sizeof(i));
	return (0);
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_putchar(a+'0');
	ft_putchar(b+'0');
	ft_swap(&a, &b);
	ft_putchar(a+'0');
	ft_putchar(b+'0');
	return (0);
}
