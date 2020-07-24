#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left- function
 * @parent: root
 * @value: int
 * Return: new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return NULL;
    new_node = binary_tree_node(parent, value);
    if (!new_node)
        return NULL;
    if (parent->right)
    {   
        new_node->right = parent->right;
        new_node->right->parent = new_node;
    }         
    parent->right = new_node;
    return new_node;
}