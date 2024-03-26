#include "binary_trees.h"

/**
 *binary_tree_is_complete - checks if a binary tree is complete
 *
 *@tree: root node of the tree to check
 *Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int is_right_complete, is_left_complete;

	if (!tree)
		return (0);
	is_right_complete =
		tree->right ? binary_tree_is_complete(tree->right) : 0;
	is_left_complete =
		tree->left ? binary_tree_is_complete(tree->left) : 0;
	return ((is_left_complete == is_right_complete) &&
		(custom_height(tree->left) >= custom_height(tree->right) ?
		 1 : 0));
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
