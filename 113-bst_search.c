#include "binary_trees.h"

/**
 *bst_search - Searches a binary search tree for a value
 *
 *@tree: The root node of tree being queried
 *@value: The value being searched for
 *Return: A pointer to the node containing value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *result;

	if (!tree || tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	else if (value > tree->n)
		result = bst_search(tree->right, value);
	else
		result = bst_search(tree->left, value);
	return ((bst_t *)result);
}
