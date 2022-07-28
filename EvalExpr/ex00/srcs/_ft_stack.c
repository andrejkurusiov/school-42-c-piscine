/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ak <ak@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:40:04 by ak                #+#    #+#             */
/*   Updated: 2022/07/16 20:33:52 by ak               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include <limits.h>

// return 0 if stack is empty, otherwise 1
int	is_empty(t_stack *root)
{
	return (!root);
}

// create new stack element node and return it
t_stack *create_node(void *data)
{
	t_stack *node;
	
	node = (t_stack *) malloc(sizeof(t_stack));
	if (node)
	{
		node->data = data;
		node->next = NULL;
	}
	return (node);
}

// return the data of top stack element
void	*top(t_stack *root)
{
	if (is_empty(root))
		return (NULL);
	return (root->data);
}

// add new stack element (on top)
void	push(t_stack **root, void *data)
{
	t_stack	*node;
	
	node = create_node(data);
	if (node)
	{
		node->next = *root;
		*root = node;
	}
}

// remove top stack element and return its data
void	*pop(t_stack **root)
{
	void	*data;
	t_stack	*node;

	if (is_empty(*root))
		return (NULL);
	node = *root;
	data = node->data;
	*root = (*root)->next;
	free(node);
	return (data);
}
