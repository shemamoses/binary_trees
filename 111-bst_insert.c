#include "binary_trees.h"
#include <stdio.h>

/**
 *bst_insert - inserts data into a binary search tree.
 *
 *@tree: double pointer to the rootnode of the tree
 *@value: Data to be added to the BST
 *Return: the created node, or NULL otherwise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp, *current, *parent;

	temp = binary_tree_node(NULL, value);
	if (!temp)
		return (NULL);
	if (!(*tree))
	{
		*tree = temp;
		return (temp);
	}
	current = *tree;
	parent = NULL;
	while (1)
	{
		parent = current;
		if (current->n > value)
		{
			current = current->left;
			if (current == NULL)
			{
				parent->left = temp;
				temp->parent = parent;
				return (temp);
			}
		}
		else if (current->n == value)
		{
			return (NULL);
		}
		else
		{
			current = current->right;
			if (current == NULL)
			{
				parent->right = temp;
				temp->parent = parent;
				return (temp);
			}
		}
	}
}
