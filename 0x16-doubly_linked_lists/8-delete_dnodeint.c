#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: double pointer to list head
 * @index: index of the list where the node to be deleted is located
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_2b_erased, *position;
	unsigned int i;

	i = 0;
	position = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		node_2b_erased = *head;
		*head = node_2b_erased->next;
		free(node_2b_erased);
		return (1);
	}
	while (i < index - 1)
	{
		position = position->next;
		if (position == NULL)
			return (-1);
		i++;
	}
	node_2b_erased = position->next;
	position->next = node_2b_erased->next;
	(node_2b_erased->next)->prev = position;
	free(node_2b_erased);
	return (1);
}
