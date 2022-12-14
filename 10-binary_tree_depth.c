#include "binary_trees.h"

/**
 * description: If tree is NULL, return 0
 *
 * binary_tree_depth: a function that measures the depth of
 * a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		depth = binary_tree_depth(tree->parent) + 1;
		return (depth);
	}
	return (0);
}
