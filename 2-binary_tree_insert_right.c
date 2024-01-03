#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert to the right
 * @parent: Pointer to the right child
 * @value: Integer value to set at the node
 *
 * Return: Pointer to the node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		tempNode = binary_tree_node(parent, value);
		if (tempNode == NULL)
			return (NULL);
		tempNode->right = parent->right;
		parent->right->parent = tempNode;
		parent->right = tempNode;
	}
	else
	{
		tempNode = binary_tree_node(parent, value);
		if (tempNode == NULL)
			return (NULL);
		parent->right = tempNode;
	}

	return (tempNode);
}
