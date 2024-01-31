#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncles of a node
 * @node: pointer to node to find the uncle for
 * Return: uncle node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	temp = node->parent->parent;
	if (temp == NULL)
		return (NULL);
	if (temp->left != NULL && temp->left == node->parent)
		return (temp->right);
	else if (temp->right != NULL && temp->right == node->parent)
		return (temp->left);
	else
		return (NULL);
}
