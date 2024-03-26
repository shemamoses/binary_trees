#include "binary_trees.h"

/**
 *binary_tree_rotate_right - Performs a left-rotation on a binary tree.
 *@tree: Pointer to the root node of the tree to rotate.
 *Return: Pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *l, *h;

	if (!tree)
		return (NULL);
	h = tree;
	if (tree->left)
	{
		l = tree->left;
		temp = tree->parent;
		tree->parent = l;
		l->parent = temp;
		tree->left = l->right;
		l->right = tree;
		h = l;
	}
	return (h);
}
