#include "binary_trees.h"

/**
 *binary_tree_uncle - finds a nodes uncle if exists
 *
 *@node: The nephew/neice node
 *Return: The pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_parent, *grand_parent, *uncle;

	if (!node)
		return (NULL);
	node_parent = node->parent ? node->parent : NULL;
	if (!node_parent)
		return (NULL);
	grand_parent = node_parent->parent ? node_parent->parent : NULL;
	if (!grand_parent)
		return (NULL);
	if (grand_parent->right == node_parent)
	{
		/* if left is NULL, NULL is returned either way */
		uncle = grand_parent->left;
	}
	else
	{
		/* if right is NULL, NULL is returned either way */
		uncle = grand_parent->right;
	}
	return (uncle);
}
