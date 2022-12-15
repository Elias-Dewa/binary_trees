#include "binary_trees.h"

/**
 * description: If node is NULL, return NULL
 *
 * binary_tree_uncle: a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->left
		!= node->parent)
		return (node->parent->parent->left);

	if (node->parent->parent->right && node->parent->parent->right
		!= node->parent)
		return (node->parent->parent->right);

	return (NULL);
}
