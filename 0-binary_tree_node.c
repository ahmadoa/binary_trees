#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to parent node
 * @values: value to put in the node
 * Return: a pointer to new node or NULL if it fails
 */

 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
 {
    binary_tree_t *newnode;

    newnode = malloc(sizeof(binary_tree_t));
    if (!newnode)
        return (NULL);
    
    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = NULL;

    return (newnode);
 }