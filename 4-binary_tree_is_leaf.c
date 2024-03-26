#include "binary_trees.h"

/**
 *binary_tree_is_leaf - Check if a node in a binary tree is a leaf or not
 *
 *@node: Pointer to the node being checked
 *Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
