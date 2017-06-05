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
	if (!node || !ht || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node->key = strdup(key);
	node->value = strdup(value);
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
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		ht->array[index] = node;
		node->next = Ptr;
	}
	return (1);
}
