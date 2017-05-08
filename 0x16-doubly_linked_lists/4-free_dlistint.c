#include "lists.h"
/**
 * free_dlistint - frees a list_t list
 * @head: pointer to the list head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_dlistint(head->next);
	free(head);
}
