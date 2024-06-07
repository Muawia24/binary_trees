#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand =  node->parent->parent;

	if (node == NULL || grand == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < grand->n)
	{
		if (!grand->right)
			return (NULL);
		return (grand->right);
	}
	else if (node->n > grand->n)
	{
		if (!grand->left)
			return (NULL);
		return (grand->left);
	}
	return (NULL);
}
