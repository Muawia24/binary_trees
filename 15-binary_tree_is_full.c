#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full tree otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	if ((tree->left == NULL && tree->right == NULL))
		return (1);
	if (tree->left && tree->right)
	{
		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);
		return (l * r);
	}
	return (0);
}
