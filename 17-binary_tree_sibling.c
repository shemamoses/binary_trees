#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node:  Pointer to the node to find the sibling.
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (0);
	sibling = (node->parent->right && node->parent->right != node) ?
		node->parent->right :
		((node->parent->left && node->parent->left != node) ?
		node->parent->left : 0);
	return (sibling);
}
