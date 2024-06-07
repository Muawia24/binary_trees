#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return:  a pointer to the sibling node or null in failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)
	{
		if (!node->parent->right)
			return (NULL);
		return (node->parent->right);
	}
	else if (node->n > node->parent->n)
	{
		if (!node->parent->left)
			return (NULL);
		return (node->parent->left);
	}
	return (NULL);
}
