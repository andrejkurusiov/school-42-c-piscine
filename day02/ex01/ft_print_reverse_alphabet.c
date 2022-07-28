/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:14:53 by akurusio          #+#    #+#             */
/*   Updated: 2022/06/30 11:15:05 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	ch;
	char	endch;

	ch = 'z';
	endch = 'a';
	while (ch >= endch)
	{
		ft_putchar(ch);
		ch--;
	}
	return ;
}
