#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to list head
 * @idx: index of the list where the new node should be added
 * @n: number to be added to new node
 * Return: the address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *position;
	unsigned int i;

	i = 0;
	position = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (*h);
	}
	while (i < idx - 1)
	{
		position = position->next;
		if (position == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = position->next;
	new_node->prev = position;
	position->next = new_node;

	return (new_node);
}
