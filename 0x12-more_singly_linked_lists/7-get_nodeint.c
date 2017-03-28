#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to linked list head
 * @index: the nth node number
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

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
