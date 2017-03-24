#include "lists.h"
/**
 * list_len - returns the number of nodes in a linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
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
