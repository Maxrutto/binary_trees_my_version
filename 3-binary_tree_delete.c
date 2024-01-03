#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Funciton that delets an entrie binary tree
 * @tree: Pointer to the root node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
