#include "binary_trees.h"

/**
 * binary_tree_is_perfect: a function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_size;
    int right_size;
    int left_height;
    int right_height;

    if (!tree)
        return (0);

    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);
    if (left_size == right_size && left_height == right_height)
        return (1);
    return (0);
}

/**
 * binary_tree_size: a function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 *
 * Return: size of a binary tree
 * If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size;
    size_t right_size;

    if (!tree)
        return (0);

    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);
    return (left_size + right_size);
}

/**
 * binary_tree_height: a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of a binary tree
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height;
    size_t right_height;

    if (!tree || (!(tree->left) && !(tree->right)))
        return (0);
    else
    {
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height > right_height)
            return (left_height + 1);
        return (right_height + 1);
    }
}