#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts new node at right child of a node
 * @parent: pointer to parent node
 * @value: node's value
 * Return: pointer to new node, NULL if it fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (parent->right)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}