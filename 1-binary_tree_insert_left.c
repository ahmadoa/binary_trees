#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to node to insert the left-child
 * @value: value of new node
 * Return: pointer to new node, or NULL if it fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (!parent)
        return (NULL);
    
    newnode = binary_tree_node(parent, value);
    if (!newnode)
        return (NULL);
    
    if (parent->left)
    {
        newnode->left = parent->left;
        parent->left->parent = newnode;
    }
    parent->left = newnode;

    return (newnode);
}