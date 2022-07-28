/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:38:50 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/05 12:06:18 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns the number of characters in a string (day03, ex06)
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
