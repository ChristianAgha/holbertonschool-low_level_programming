#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a node in a binary tree
 * @tree: tree who's size we find
 * Return: size of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	unsigned int left_size, right_size;

	if (!tree)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + 1 + right_size);
}
