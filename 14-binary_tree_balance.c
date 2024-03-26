#include "binary_trees.h"

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *
 *@tree: The root node of binary tree
 *Return: balance factor int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (custom_height(tree->left) - custom_height(tree->right));
}

/**
 * custom_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: Binary tree height
 */
int custom_height(const binary_tree_t *tree)
{
	int len_L, len_R;

	if (!tree)
		return (-1);
	len_L = tree->left ? 1 + custom_height(tree->left) : 0;
	len_R = tree->right ? 1 +  custom_height(tree->right) : 0;
	return (len_L > len_R ? len_L : len_R);
}
