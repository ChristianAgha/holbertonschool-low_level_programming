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
	size_t list_length;

	i = 0;
	list_length = dlistint_len(*h);
	b4_new_node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = new_node->prev = NULL;
	if (list_length < idx)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}
	while (i < idx - 1)
	{
		b4_new_node = b4_new_node->next;
		i++;
	}
	new_node->next = b4_new_node->next;
	new_node->prev = b4_new_node;
	b4_new_node->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
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
