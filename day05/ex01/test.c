/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:05:37 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/04 18:15:38 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

// ----> the function to be tested
void	ft_putnbr(int nb);

// ----> MAIN <-----
int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(-0);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-567);
	printf("\n");
	ft_putnbr(123);
	printf("\n");
	return (0);
}
