#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Function that finds the height of a binary tree
 * @tree: The root node of the tree
 *
 * Return: The size_t value of the height and 0 on  failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = tree->left ? binary_tree_height(tree->left) : 0;
	right_size = tree->right ? binary_tree_height(tree->right) : 0;

	return (left_size > right_size) ? (left_size + 1) : (right_size + 1);
}
