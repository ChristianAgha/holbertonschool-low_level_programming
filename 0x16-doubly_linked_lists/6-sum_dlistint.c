#include "lists.h"
/**
 * sum_dlistint - sums all of the data (n) of a doubly linked list
 * @head: pointer to the list head
 * Return: sum, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
