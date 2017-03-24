#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: the length of the string
 *
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - adds node to the beginning of a linked list
 * @head: pointer to a new list head
 * @str: string to be added to linked list
 * Return: the address of the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;
	return (*head);

}
