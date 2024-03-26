#include "binary_trees.h"

/**
 *binary_tree_rotate_right - rotates a binary tree to the right
 *
 *@tree: The root node of tree to rotate
 *Return: Pointer to new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (!tree)
		return (NULL);
	root = tree->left;
	if (root)
	{
		root->parent = tree->parent;
		tree->parent = root;
		tree->left = root->right;
		if (root->right)
			root->right->parent = tree;
		root->right = tree;
	}
	return (root);
}
