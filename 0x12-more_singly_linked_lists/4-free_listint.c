#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the list head
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_listint(head->next);
	free(head);
}
