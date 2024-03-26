#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if a tree the given root
 *node is a perfect tree.
 *
 *@tree: given node
 *Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_is_perfect;
	int right_is_perfect;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	left_is_perfect = tree->left ? binary_tree_is_perfect(tree->left) : 0;
	right_is_perfect = tree->right ?
		binary_tree_is_perfect(tree->right) : 0;
	return ((left_is_perfect == right_is_perfect) &&
		(custom_height(tree->left) == custom_height(tree->right)) ? 1 : 0);
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
