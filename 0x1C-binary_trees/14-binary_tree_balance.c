#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree root node
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the balance factor of the tree or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	unsigned int left_height, right_height;

	if (!tree)
		return (0);
	if (tree->left == NULL)
		left_height = 0;
	else
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right == NULL)
		right_height = 0;
	else
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
