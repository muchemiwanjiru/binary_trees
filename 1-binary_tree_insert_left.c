#include "binary_trees.h"

/**
 * binary_tree_insert_left - it inserts a node as the left-child of another node
 * @parent: pointer of the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node else NULL on failure
 * or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
	return (NULL);

	if (!(parent->left))
	parent->left = new;
	else
	{
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
	}
	return (new);
}
