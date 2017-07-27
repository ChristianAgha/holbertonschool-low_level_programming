#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "9-binary_tree_height.c"
/**
 * power - gets power result
 * @base: base number
 * @exponent: exponent
 * Return: result
 */
unsigned int power(int base, int exponent)
{
	unsigned int result = 1;

	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}

	return (result);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree root node
 * Return: 1 if perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int height;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);

	if (binary_tree_size(tree) == power(2, height + 1) - 1)
		return (1);

	return (0);
}
