/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:50:14 by ak                #+#    #+#             */
/*   Updated: 2022/07/17 16:12:44 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

// return 1 if it's a delimeter, otherwise 0.
int	is_delim(char ch)
{
	return (ch == ' ');
}

// return 1 if it's an operator, otherwise 0.
int	is_oper(char ch)
{
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%');
}

// return 1 if it's a digit, otherwise 0.
int	is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}

// return priority number of an operator (bigger is greater priority).
int	prio(char op)
{
	if (op == '+' || op == '-')
		return (1);
	if (op == '*' || op == '/' || op == '%')
		return (2);
	return (-1);
}
