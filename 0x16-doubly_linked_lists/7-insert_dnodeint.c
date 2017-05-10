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
	dlistint_t *new_node, *b4_new_node;
	unsigned int i;

	i = 0;
	b4_new_node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	while (i < idx - 1)
	{
		b4_new_node = b4_new_node->next;
		if (b4_new_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = b4_new_node->next;
	new_node->prev = b4_new_node;
	b4_new_node->next = new_node;
	new_node->next->prev = new_node;

	return (new_node);
}
