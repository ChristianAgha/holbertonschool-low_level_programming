#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree root node
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_balance(tree) == 0)
		if (binary_tree_is_full(tree) == 1)
			if ((binary_tree_size(tree) % 2) != 0)
				return (1);

	return (0);
}
