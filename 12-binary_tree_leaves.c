#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *
 *@tree: Pointer to the root node of tree
 *Return: the number of leafs
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_leaves;
	size_t left_leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
