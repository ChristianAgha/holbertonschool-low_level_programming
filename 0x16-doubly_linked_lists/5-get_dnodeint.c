#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to doubly linked list head
 * @index: the nth node number
 * Return: the node at index or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	i = 0;
	if (head == NULL)
		return (NULL);
	node = head;
	while (i < index)
	{
		node = node->next;
		i++;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
