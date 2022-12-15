#include "binary_trees.h"

/**
 * description: If parent already has a left-child, the new node
 * must take its place, and the old left-child must be set as
 * the left-child of the new node
 *
 * binary_tree_insert_left: a function that inserts a node as the left-child
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or
 * NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
