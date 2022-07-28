/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_evaluators.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:54:07 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/17 16:57:48 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

// evaluate in case on an operator
void	oper_eval(t_slint **nums, t_slchar **ops, char curr_op)
{
	while (!is_empty_char(*ops) && \
			(prio(peek_char(*ops)) >= prio(curr_op)))
		process(nums, pop_char(ops));
	push_char(ops, curr_op);
}

// process inside the brackets
void	do_in_brackets(t_slint **nums, t_slchar **ops)
{
	while (peek_char(*ops) != '(')
		process(nums, pop_char(ops));
	pop_char(ops);
}

// forming and processing the digits
// returns current i back to the cycle
int	do_digits(t_slint **nums, char *str, int i)
{
	long long int	num;

	num = 0;
	while (str[i] != '\0' && is_digit(str[i]))
		num = num * 10 + (str[i++] - '0');
	--i;
	push_int(nums, num);
	return (i);
}

// apply an operator op on two numbers from nums
void	process(t_slint **nums, char op)
{
	long long int	n1;
	long long int	n2;

	n2 = peek_int(*nums);
	pop_int(nums);
	n1 = peek_int(*nums);
	pop_int(nums);
	if (op == '+')
		push_int(nums, n1 + n2);
	else if (op == '-')
		push_int(nums, n1 - n2);
	else if (op == '*')
		push_int(nums, n1 * n2);
	else if (op == '/')
		push_int(nums, n1 / n2);
	else if (op == '%')
		push_int(nums, n1 % n2);
}

// process the rest of stack
void	rest_of_stack(t_slint **nums, t_slchar **ops)
{
	while (!is_empty_char(*ops))
		process(nums, pop_char(ops));
}
