#include "lists.h"
/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num_node;

	num_node = 0;

	while (h != NULL)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
