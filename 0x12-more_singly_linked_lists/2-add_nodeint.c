#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of a linked list
 * @head: pointer to a new list head
 * @n: number to be added to new node
 * Return: the address of the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
