#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ansestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the ansestor found or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *temp1 = NULL, *temp2 = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent != NULL && second->parent != NULL)
	{
		temp1 = first->parent;
		temp2 = second->parent;
	}
	else
		return (NULL);

	while (temp1 != NULL && temp2 != NULL)
	{
		if (temp1 == temp2)
			return (temp1);

		temp1 = temp1->parent;
		temp2 = temp2->parent;
	}
	return (NULL);
}
