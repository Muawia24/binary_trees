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
 * _binary_tree_balance - measures the balance factor of
 * a binary tree.
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor.i
 * Return: balance factor or 0 if empty tree
 */
int _binary_tree_balance(const binary_tree_t *tree)
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if perfect or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (_binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
