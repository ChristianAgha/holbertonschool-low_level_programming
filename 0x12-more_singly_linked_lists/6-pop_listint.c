#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the list head
 * Return: the head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *firstnode;
	int n;

	if (head == NULL)
		return (0);
	firstnode = *head;
	n = firstnode->n;
	tmp = *head;
	*head = tmp->next;
	free(tmp);

	return (n);
}
