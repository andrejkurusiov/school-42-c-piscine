/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:50:14 by ak                #+#    #+#             */
/*   Updated: 2022/07/17 15:52:00 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include <limits.h>

// Create new stack element node and return it
t_slint	*create_node_int(int data)
{
	t_slint	*node;

	node = malloc(sizeof(t_slint));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

// Adds a new node at the beginning of the list.
void	push_int(t_slint **root, int data)
{
	t_slint	*node;

	node = *root;
	if (!node)
		*root = create_node_int(data);
	else
	{
		node = create_node_int(data);
		node->next = *root;
		*root = node;
	}
}

// Check if the stack is empty or not
int	is_empty_int(t_slint *root)
{
	return (!root);
}

// Return top stack element value
int	peek_int(t_slint *root)
{
	if (!is_empty_int(root))
		return (root->data);
	else
		return (INT_MIN);
}

// Pop a top element from the stack
int	pop_int(t_slint **root)
{
	t_slint	*node;
	int		x;

	if (!(*root))
		return (INT_MIN);
	x = peek_int(*root);
	node = *root;
	*root = (*root)->next;
	free(node);
	return (x);
}
