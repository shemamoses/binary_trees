#include "binary_trees.h"

binary_tree_t *recursive_avl_insert(binary_tree_t *tree, int value);
/**
 *avl_insert - inserts a value in an AVL tree
 *
 *@tree: Double pointer to the AVL tree
 *@value: The data stored in node
 *Return: pointer to the created node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	binary_tree_t *new_node;

	new_node = recursive_avl_insert(&(**tree), value);
	if (!(*tree))
		*tree = new_node;
	return (new_node);
}



binary_tree_t *recursive_avl_insert(binary_tree_t *tree, int value)
{
	if (!tree)
		return (binary_tree_node(tree, value));
	if (value > tree->n)
	{
		if (tree->right)
			tree->right = recursive_avl_insert(tree->right, value);
		else
		{
			tree->right = binary_tree_node(tree, value);
			return (tree->right);
		}
	}
        else if  (value < tree->n)
	{
		if (tree->left)
			tree->left = recursive_avl_insert(tree->left, value);
		else
		{
			tree->left = binary_tree_node(tree, value);
			return (tree->left);
		}
	}
	return (tree);
}
