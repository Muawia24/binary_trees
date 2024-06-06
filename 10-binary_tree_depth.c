#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth of tree or 0 if empty.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp;
	size_t i = 0;

	if (tree == NULL)
		return (0);
	temp = tree;
	while (temp->parent)
	{
		i++;
		temp = temp->parent;
	}
	return (i);
}
