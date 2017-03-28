#include "lists.h"
/**
 * listint_len -  returns the number of nodes in a linked listint_t list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
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
