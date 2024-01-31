#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling for
 * Return: apointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent;

	if (temp->left == NULL || temp->right == NULL)
		return (NULL);

	if (node == temp->left)
		return (temp->right);
	else if (node == temp->right)
		return (temp->left);
	else
		return (NULL);
}
