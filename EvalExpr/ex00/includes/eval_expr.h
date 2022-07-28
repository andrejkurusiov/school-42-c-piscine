/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:04:35 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/17 16:57:45 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_lint
{
	long long int	data;
	struct s_lint	*next;
}					t_slint;

typedef struct s_lchar
{
	char			data;
	struct s_lchar	*next;
}					t_slchar;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
t_slint		*create_node_int(int data);
void		push_int(t_slint **root, int data);
int			is_empty_int(t_slint *root);
int			peek_int(t_slint *root);
int			pop_int(t_slint **root);
t_slchar	*create_node_char(char data);
void		push_char(t_slchar **root, char data);
int			is_empty_char(t_slchar *root);
char		peek_char(t_slchar *root);
char		pop_char(t_slchar **root);
int			is_delim(char ch);
int			is_oper(char ch);
int			is_digit(char ch);
int			prio(char op);
void		oper_eval(t_slint **nums, t_slchar **ops, char curr_op);
void		do_in_brackets(t_slint **nums, t_slchar **ops);
int			do_digits(t_slint **nums, char *str, int i);
void		process(t_slint **nums, char op);
void		rest_of_stack(t_slint **nums, t_slchar **ops);

#endif
