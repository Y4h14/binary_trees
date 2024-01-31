#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: a pointer to the node to insert the left child in
 * @value: the value to store the new node
 * Return: the new inserted node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
	}
	else
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = temp;
		temp->parent = new_node;
	}
	new_node->n = value;
	new_node->right = NULL;
	return (new_node);
}
