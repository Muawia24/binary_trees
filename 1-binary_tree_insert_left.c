#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: return a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));

	if (new_left == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_left->parent = parent;
		new_left->n = value;
		new_left->left = parent->left;
		new_left->right = NULL;
		parent->left->parent = new_left;
	}
	else
	{
		 new_left->parent = parent;
		 new_left->n = value;
		 new_left->left = NULL;
		 new_left->right = NULL;
	}
	 parent->left = new_left;

	return (new_left);
}
