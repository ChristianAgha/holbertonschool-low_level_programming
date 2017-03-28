#include "lists.h"
/**
 * print_listint - prints the contents of a linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
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
