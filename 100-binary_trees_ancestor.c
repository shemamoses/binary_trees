#include "binary_trees.h"

size_t depth(const binary_tree_t *tree);

/**
 *depth - measures the depth of a node in a binary tree
 *@tree: Pointer to the first node in the tree
 *Return: An integer representing the depth
 */
size_t depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);
	return (1 + depth(tree->parent));
}

/**
 * binary_trees_ancestor - Finds the sibling of a node.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t  *senior, *junior, *h;
	size_t f, s;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	f = depth(first);
	s = depth(second);
	if ((f == s) && first->parent == second->parent)
	{
		return (first->parent);
	}

	senior = (f <= s) ? (binary_tree_t  *)first : (binary_tree_t  *)second;
	junior = (f <= s) ? (binary_tree_t  *)second : (binary_tree_t  *)first;
	h = junior;
	while (senior)
	{
		while (junior)
		{
			if (junior == senior)
				return (junior);
			junior = junior->parent;
		}
		junior = h;
		senior = senior->parent;
	}
	return (NULL);
}
