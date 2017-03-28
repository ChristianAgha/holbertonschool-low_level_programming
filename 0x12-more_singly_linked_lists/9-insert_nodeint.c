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
	listint_t *new_node, *position;
	unsigned int i;

	i = 0;
	position = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || *head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	while (i < idx - 1)
	{
		position = position->next;
		if (position == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->next = position->next;
	position->next = new_node;

	return (new_node);
}
