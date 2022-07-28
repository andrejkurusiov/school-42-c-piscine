/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:53:36 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/12 15:18:44 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns 1 if a c is a "space character"; otherwise 0.
int	is_space(char c)
{
	int	result;

	result = 0;
	if (c == '\t' || c == '\n' || c == '\v')
		result = 1;
	if (c == '\f' || c == '\r' || c == ' ')
		result = 1;
	return (result);
}

// Reproduce the behavior of the function atoi (man atoi).
// int atoi(const char *str); -- convert ASCII string to integer
// Allowed functions: None.
// If no valid conversion could be performed, it returns zero.
int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result *= sign;
	return (result);
}
