#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the height.
 * Return: number of tree height or 0 if empty tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
		return (0);
	{
		if (tree->left)
			a = binary_tree_height(tree->left) + 1;
		else
			a = 0;
		if (tree->right)
			b = binary_tree_height(tree->right) + 1;
		else
			b = 0;

		if (a > b)
			return (a + 1);
		return (b + 1);
	}
}
