#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_btree.h"

// ----> the function to be tested
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(t_btree *node)
{
    if (node == NULL)
        return;
    /* first print data of node */
    printf("%i ", (int) node->item);
    /* then recur on left subtree */
    printPreorder(node->left);
    /* now recur on right subtree */
    printPreorder(node->right);
}

void	f(void *para)
{

	printf("%i |", (int)(*para));
}


int main(int argc, char const **argv)
{
	t_btree	*root = btree_create_node((void *)1);
	root->left = btree_create_node((void *)2);
	root->right = btree_create_node((void *)3);
	root->left->left = btree_create_node((void *)4);
	root->left->right = btree_create_node((void *)5);

	printf("\nPreorder traversal of binary tree ORIGINAL\n");
	printPreorder(root);

	printf("\nPreorder traversal of binary tree RESULT\n");
	btree_apply_prefix(root, f);
	// printPreorder(root);
	return (0);
}
