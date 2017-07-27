#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf in a binary tree
 * @node: node to be checked
 * Return: 1 if node if leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node->left && !node->right)
		return (1);

	return (0);
}
