#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: double pointer to list head
 * @index: index of the list where the node to be deleted is located
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_2b_erased, *b4_n_2b_erased;
	unsigned int i;

	i = 0;
	b4_n_2b_erased = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	node_2b_erased = *head;
	if (index == 0)
	{
		if (node_2b_erased->next != NULL)
		{
			*head = node_2b_erased->next;
			(*head)->prev = NULL;
			free(node_2b_erased);
			return (1);
		}
		else
		{
			free(node_2b_erased);
			*head = NULL;
			return (1);
		}
	}
	while (i < index - 1)
	{
		b4_n_2b_erased = b4_n_2b_erased->next;
		if (b4_n_2b_erased == NULL)
			return (-1);
		i++;
	}
	node_2b_erased = b4_n_2b_erased->next;
	b4_n_2b_erased->next = node_2b_erased->next;
	if (node_2b_erased->next != NULL)
		node_2b_erased->next->prev = b4_n_2b_erased;
	free(node_2b_erased);
	return (1);
}
