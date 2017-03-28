#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to list head
 * @idx: index of the list where the new node should be added
 * @n: number to be added to new node
 * Return: the address of the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *before, *after;
	unsigned int i;

	i = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	before = *head;
	after = before->next;
	while (i < idx - 1)
	{
		before = after;
		after = after->next;
		i++;
		if (after == NULL && i > idx)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = after;
	before->next = new_node;

	return (new_node);
}
