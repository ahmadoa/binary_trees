#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to node to check
 * Return: 1 if node is a leaf, 0 if otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    return ((!node || node->left || node->right) ? 0 : 1);
}