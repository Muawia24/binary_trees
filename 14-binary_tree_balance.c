#include "binary_trees.h"
/**
 * tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the height.
 * Return: number of tree height or 0 if empty tree
 */
int tree_height(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);
	{
		if (tree->left)
			a = tree_height(tree->left) + 1;
		else
			a = 1;
		if (tree->right)
			b = tree_height(tree->right) + 1;
		else
			b = 1;

		if (a > b)
			return (a);
		return (b);
	}
}
/**
 * binary_tree_balance - measures the balance factor of
 * a binary tree.
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor.i
 * Return: balance factor or 0 if empty tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = tree_height(tree->left);
	if (tree->right)
		r = tree_height(tree->right);

	return (l - r);
}
