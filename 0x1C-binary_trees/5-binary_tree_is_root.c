#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is the root of a binary tree
 * @node: node to be checked
 * Return: 1 if node if root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);

	return (0);
}
