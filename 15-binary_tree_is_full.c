#include "binary_trees.h"
/**
 * binary_tree_is_full - function that says if a tree is full or not
 * a tree is full if it has tow or none children
 * @tree: tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->l && tree->r)
		{
			l = binary_tree_is_full(tree->l);
			r = binary_tree_is_full(tree->r);
			if (l == 0 || r == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->l && !tree->r)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
