#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: input key
 * @value: input value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *node, *Ptr, *tmp;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL || ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node->key = (char *)key;
	node->value = (char *)value;
	node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		Ptr = tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
			{
				tmp->value = (char *)value;
				return (1);
			}
			tmp = tmp->next;
		}
		ht->array[index] = node;
		node->next = Ptr;
	}
	return (1);
}
