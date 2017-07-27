#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: node who's depth we find
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	int depth = 0;

	if (!node || !node->parent)
		return (0);

	while (node->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
