#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: the address of the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Left_node;

	if (parent == NULL)
		return (NULL);

	new_Left_node = malloc(sizeof(*new_Left_node));
	if (new_Left_node == NULL)
		return (NULL);
	new_Left_node->left = NULL;
	new_Left_node->right = NULL;
	new_Left_node->parent = parent;
	new_Left_node->n = value;

	if (parent->left == NULL)
		parent->left = new_Left_node;
	else
	{
		new_Left_node->left = parent->left;
		parent->left = new_Left_node;
		new_Left_node->left->parent = new_Left_node;
	}

	return (new_Left_node);
}
