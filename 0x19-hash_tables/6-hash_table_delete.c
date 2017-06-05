#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *tmp, *del;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = ht->size - 1; i >= 0; i--)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			del = tmp;
			tmp = tmp->next;
			free(del->key);
			free(del->value);
			free(del);
		}
	}
	free(ht->array);
	free(ht);
}
