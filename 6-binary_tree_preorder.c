#include "binary_trees.h"

/**
 *binary_tree_preorder - Traverses the binary tree visiting roots first
 *
 *@tree: The pointer to the root of the binary tree
 *@func: Pointer to function to be called on each node
 *Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
