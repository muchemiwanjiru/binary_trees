#include "binary_trees.h"

/**
 * binary_tree_node - used to create a binary tree node
 * @parent: pointer to the parent node of the node to be used
 * @value: value to be put in the node
 *
 * Return: pointer to the new node else NULL the on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
	return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
