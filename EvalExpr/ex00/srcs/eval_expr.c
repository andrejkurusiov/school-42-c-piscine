/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:36:12 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/17 16:57:54 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

/*
Task:
The expression must be calculated and its result must be returned.
• The string passed as argument will be valid (no bugs, no bogus addresses,
  no letters or syntax errors, no division by zero, etc.).
• The following five operators must be supported :
◦ + for addition
◦ - for subtraction
◦ / for division
◦ * for multiplication
◦ % for modulo
• The function must also support any amount of brackets.
---
AK:
1) All given operators are binary (i.e. take two arguments), and
all are left-associative (if the priorities are equal, they are
executed from left to right).
2) Solving algorithm
Use two stacks: 1) numbers (nums), 2) operators and parentheses (ops).
Initially both stacks are empty.
In second stack all operators are ordered by descending priority.
If there are parenthesis in 2nd stack, then each block of operators
(for the pair of parenthesis) is ordered,
and the entire stack is not necessarily ordered.
Iterate over the input string from left to right.
If current character is a '(', put it to (ops) stack.
If it's a ')', execute all operators in the stack until we reach the opening
bracket (i.e. run all operations inside the parenthesis).
If current character is a digit, put its value to (nums) stack.
If it's an operator:
- if (ops) is empty, put it to (ops);
- if (ops) is not empty & operator’s precedence is > than the precedence of
  the operator on top of (ops), then put the operator to the (ops);
- if (ops) is not empty & operator’s precedence is <= than the precedence of
  the operator on top of (ops), then pop an operator from (ops) and 2 numbers
  from (nums), apply the operator to numbers and put result to (nums). Then push
  current operator to (ops).
After iterating all input string, repeat until there's a single value in
the (nums): pop one operator from the (ops) and 2 numbers from the (nums) and
apply the operator to the numbers, store the result in the (nums).
The last value in (nums) will be the result.
*/
int	eval_expr(char *str)
{
	t_slint			*nums;
	t_slchar		*ops;
	int				i;

	nums = NULL;
	ops = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			push_char(&ops, '(');
		else if (str[i] == ')')
			do_in_brackets(&nums, &ops);
		else if (is_oper(str[i]))
			oper_eval(&nums, &ops, str[i]);
		else if (is_digit(str[i]))
			i = do_digits(&nums, str, i);
		i++;
	}
	rest_of_stack(&nums, &ops);
	return (peek_int(nums));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
