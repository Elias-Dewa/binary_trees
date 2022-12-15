#include "binary_trees.h"

/**
 * binary_tree_uncle: a function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent->parent))
		return (NULL);

	if (node->parent->parent->left && node->parent->parent->left != node)
		return (node->parent->parent->left);

	if (node->parent->parent->right && node->parent->parent->right != node)
		return (node->parent->parent->right);

	return (NULL);
}
