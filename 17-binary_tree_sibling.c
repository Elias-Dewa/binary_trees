#include "binary_trees.h"

/**
 * binary_tree_sibling: a function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Description: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL
 *
 * Return: a pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->left && node->parent->left != node)
		return (node->parent->left);

	if (node->parent->right && node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}
