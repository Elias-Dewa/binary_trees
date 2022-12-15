#include "binary_trees.h"

/**
 * description: If tree is NULL, do nothing
 *
 * binary_tree_delete: a function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
