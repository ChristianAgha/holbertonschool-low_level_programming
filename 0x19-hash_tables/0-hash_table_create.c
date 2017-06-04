#include "hash_tables.h"
/**
 * hash_table_create -  creates a hash table
 * @size: size of hash table to be created
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *Hashsicle;

	if (size <= 0)
		return (NULL);

	Hashsicle = malloc(sizeof(hash_table_t));
	if (Hashsicle == NULL)
		return (NULL);

	Hashsicle->size = size;

	Hashsicle->array = calloc(size, sizeof(hash_node_t*));
	if (Hashsicle->array == NULL)
	{
		free(Hashsicle);
		return (NULL);
	}

	return (Hashsicle);
}
