#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_btree.h"

// ----> the function to be tested
void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *));

/* Given a binary tree, print its nodes in preorder*/
void printInfix(t_btree *node)
{
	if (node == NULL)
		return;
	printInfix(node->left);
	printf("%s ", node->item);
	printInfix(node->right);
}

int	strcmp2(void *a, void *b)
{
	return (strcmp((void *)a, (void *)b));
}

int main(int argc, char const **argv)
{
	t_btree *root = NULL;

	// printf("%i\n", strcmp2(argv[1], argv[2]));
	int i = 0;
	while (++i < argc)
		btree_insert_data(&root, (void *)argv[i], strcmp2);

	printInfix(root);

	return (0);
}
