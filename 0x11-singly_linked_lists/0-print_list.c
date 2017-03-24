#include "lists.h"
/**
 * print_list - prints the contents of a linked list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_node;

	num_node = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
