#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Binary tree lenght or 0 on failiure.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t len_L, len_R;

	if (!tree)
		return (0);
	len_L = tree->left ? 0 + binary_tree_size(tree->left) : 0;
	len_R = tree->right ? 0 +  binary_tree_size(tree->right) : 0;
	return (len_L + len_R + 1);
}
