#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree:  Pointer to the root node of the tree to count the number of nodes..
 * Return: Number of nodes or 0 on failiure.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_L, num_R;

	if (!tree || (tree && !tree->left && !tree->right))
		return (0);
	num_L = binary_tree_nodes(tree->left);
	num_R = binary_tree_nodes(tree->right);
	return (num_L + num_R + 1);
}
