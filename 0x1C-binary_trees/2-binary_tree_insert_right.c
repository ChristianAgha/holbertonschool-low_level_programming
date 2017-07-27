#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to put in the new node
 * Return: the address of the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Right_node;

	if (parent == NULL)
		return (NULL);

	new_Right_node = malloc(sizeof(binary_tree_t));
	if (new_Right_node == NULL)
		return (NULL);
	new_Right_node->left = NULL;
	new_Right_node->right = NULL;
	new_Right_node->parent = parent;
	new_Right_node->n = value;

	if (parent->right == NULL)
		parent->right = new_Right_node;
	else
	{
		new_Right_node->right = parent->right;
		parent->right = new_Right_node;
		new_Right_node->right->parent = new_Right_node;
	}

	return (new_Right_node);
}
