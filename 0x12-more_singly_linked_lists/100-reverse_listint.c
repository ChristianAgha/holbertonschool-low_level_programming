#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to list head
 * Return: reverses a listint_t linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *after;

	previous = NULL;
	while (*head != NULL)
	{
		after = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = after;
	}
	*head = previous;

	return (*head);
}
