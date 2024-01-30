#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node of the node to create
 * @value: int value of the node
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
		new_node->parent = NULL;
	else
	{
		if (parent->left == NULL)
		{
			parent->left = new_node;
			new_node->parent = parent;
		}
		else if (parent->right == NULL)
		{
			parent->right = new_node;
			new_node->parent = parent;
		}
		else
			return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
