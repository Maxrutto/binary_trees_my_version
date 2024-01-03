#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left child
 * @parent: Pointer to the parent to the node to insert
 * @value: The value to store in the node
 *
 * Return: Pointer to the inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		tempNode = binary_tree_node(parent, value);
		if (tempNode == NULL)
			return (NULL);

		tempNode->left = parent->left;
		parent->left->parent = tempNode;
		parent->left = tempNode;
	}
	else
	{
		tempNode = binary_tree_node(parent, value);
		if (tempNode == NULL)
			return (NULL);

		parent->left = tempNode;
	}

	return (tempNode);
}
