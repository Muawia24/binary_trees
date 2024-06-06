#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if full tree otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
		if (tree->parent)
			return (1);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	return (0);
}
