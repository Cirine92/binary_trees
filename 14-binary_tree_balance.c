#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Function
 * @tree: input tree
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lefth, righth;

if (!tree || (!tree->left && !tree->right))
return (0);
lefth = binary_tree_height(tree->left);
righth = binary_tree_height(tree->right);
if (lefth >= righth)
return (lefth + 1);
else
return (righth + 1);
}

/**
 * binary_tree_balance(- Function
 * @tree: input tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int lefth, righth;

if (!tree)
return (0);
lefth = binary_tree_height(tree->left);
righth = binary_tree_height(tree->right);
return (lefth - righth);
}
