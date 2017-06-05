#include "hash_tables.h"
/**
 * count_hash_table- coints the items in the hash table
 * @ht: hash table
 * Return: number of items
 */
int count_hash_table(const hash_table_t *ht)
{
	unsigned long i, items;
	hash_node_t *tmp;

	items = 0;

	for (i = 0; i < BUFSIZE; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			items++;
			while (tmp->next != NULL)
			{
				items++;
				tmp = tmp->next;
			}
		}
	}
	return (items);
}
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i, items, size;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	items = count_hash_table(ht);
	size = ht->size;

	printf("{");
	for (i = 0; i < size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (items > 1)
			{
				printf(", ");
				items--;
			}
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
				printf("'%s': '%s'", tmp->key, tmp->value);
				if (items > 1)
				{
					printf(", ");
					items--;
				}
			}
		}
	}
	printf("}\n");
}
