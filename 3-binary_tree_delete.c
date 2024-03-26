#include "binary_trees.h"

/**
 *binary_tree_delete - Deletes an entire binary tree.
 *@tree: Pointer to the root node of the tree to delete.
 *Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree)
		return;
	temp = tree;
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(temp);
}
