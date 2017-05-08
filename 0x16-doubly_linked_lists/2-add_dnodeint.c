#include "lists.h"
/**
 * add_dnodeint - adds node to the beginning of a doubly linked list
 * @head: pointer to a new list head
 * @n: number to be added to new node
 * Return: the address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;
	return (*head);

}
