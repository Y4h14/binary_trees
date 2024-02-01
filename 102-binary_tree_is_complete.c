#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of the tree
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (1);
        if (tree->left && tree->right)
                return (binary_tree_is_full(tree->left) &&
                                binary_tree_is_full(tree->right));
        return (0);

}
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a elaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
                return (0);
        if (node->left == NULL && node->right == NULL)
                return (1);
        else
                return (0);
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is complete or 0 therwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (binary_tree_is_leaf(tree))
			return (1);
		else
			return (0);
	}
	if (binary_tree_is_full(tree))
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	return (binary_tree_is_complete(tree->left) &&
			binary_tree_is_complete(tree->right));
}
