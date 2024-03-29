#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: pointer to the node to insert right child in
 * @value: the value stored in the new node
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
	}
	else
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = temp;
		temp->parent = new_node;
	}
	new_node->n = value;
	new_node->left = NULL;
	return (new_node);

}
