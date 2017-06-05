#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: input key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
