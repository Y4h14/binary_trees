#include "binary_trees.h"

/**
 * counter - counts the number of nodes in a tree
 * @tree: pointer to the root of a tree
 * Return: number of nodes in a tree
 */
int counter(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + counter(tree->left) + counter(tree->right));
}
/**
 * _pow - calculate the power of a number
 * @base: the base number
 * @power: the power to raise the number to
 * Return: the resulting number
 */
int _pow(int base, int power)
{
	int temp;

	if (power == 0)
		return (1);
	temp = _pow(base, power / 2);
	if ((power % 2) == 0)
		return (temp * temp);
	else
		return (base * temp * temp);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0, nodes = 0;

	if (tree == NULL)
		return (0);
	h = (int)binary_tree_height(tree);
	nodes = counter(tree);
	if (nodes == (_pow(2, h + 1)) - 1)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the height of the tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, max;

	if (tree == NULL)
		return (-1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		max = left_height;
	else
		max = right_height;
	return (1 + max);
}
