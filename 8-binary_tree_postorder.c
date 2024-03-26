#include "binary_trees.h"

/**
 *binary_tree_postorder - traverses binary tree post order style
 *
 *@tree: Pointer to root node
 *@func: Points to function to be called on each node
 *Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
