#include "lists.h"
/**
 * print_dlistint - prints the contents of a doubly linked list
 * @h: pointer to doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num_node;

	num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
