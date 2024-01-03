#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Funciton that creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Return: Returns a pointer to the node created or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode = (binary_tree_t*)malloc(sizeof(binary_tree_t));

	if (!tempNode)
		return (NULL);
	tempNode->n = value;
	tempNode->parent = parent;
	tempNode->left = NULL;
	tempNode->right = NULL;

	return (tempNode);
}
