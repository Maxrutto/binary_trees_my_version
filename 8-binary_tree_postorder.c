#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that does pos-order traversal
 * @tree: Pointer to the root node
 * @func: Pointer to the function that calls each node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
