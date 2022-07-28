/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:50:14 by ak                #+#    #+#             */
/*   Updated: 2022/07/17 15:50:18 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

// Create new stack element node and return it
t_slchar	*create_node_char(char data)
{
	t_slchar	*node;

	node = malloc(sizeof(t_slchar));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

// Check if the stack is empty or not
int	is_empty_char(t_slchar *root)
{
	return (!root);
}

// Adds a new node at the beginning of the list.
void	push_char(t_slchar **root, char data)
{
	t_slchar	*node;

	node = *root;
	if (!node)
		*root = create_node_char(data);
	else
	{
		node = create_node_char(data);
		node->next = *root;
		*root = node;
	}
}

// Return top stack element value
char	peek_char(t_slchar *root)
{
	if (!is_empty_char(root))
		return (root->data);
	else
		return ('\0');
}

// Pop a top element from the stack
char	pop_char(t_slchar **root)
{
	t_slchar	*node;
	char		x;

	if (!(*root))
		return ('\0');
	x = peek_char(*root);
	node = *root;
	*root = (*root)->next;
	free(node);
	return (x);
}
