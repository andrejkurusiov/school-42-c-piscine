/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurusio <akurusio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:07:06 by akurusio          #+#    #+#             */
/*   Updated: 2022/07/15 10:02:13 by akurusio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

// Create a function btree_insert_data which inserts the element item into tree.
// The tree passed as argument will be sorted : for each node
// all lower elements are located on the left side and
// all higher or equal elements on the right.
// We’ll also pass a comparison function similar to strcmp as argument.
// The root parameter points to the root node of the tree.
// First time called, it should point to NULL.
// TREE REPRESENTATION
// 			root (NULL)
//      1        3
//    0   1  NULL  4
//  -1 0
void	btree_insert_data(t_btree **root, void *item, \
							int (*cmpf)(void *, void *))
{
	t_btree	*new_node;
	t_btree	*node;
	t_btree	*prev_node;

	new_node = btree_create_node(item);
	node = *root;
	prev_node = NULL;
	while (node)
	{
		prev_node = node;
		if (cmpf(item, node->item) >= 0)
			node = node->right;
		else
			node = node->left;
	}
	if (!prev_node)
		*root = new_node;
	else if (cmpf(item, prev_node->item) >= 0)
		prev_node->right = new_node;
	else
		prev_node->left = new_node;
}
