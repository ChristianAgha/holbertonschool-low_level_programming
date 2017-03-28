#include "lists.h"
/**
 * sum_listint - sums all of the data (n) of a listint_t linked list
 * @head: pointer to the list head
 * Return: sum
 */
int sum_listint(listint_t *head)
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
