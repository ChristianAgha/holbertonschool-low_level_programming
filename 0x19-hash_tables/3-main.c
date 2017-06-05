#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "holberton");
	hash_table_set(ht, "hetairas", "holberton");
	hash_table_set(ht, "hetairas", "holberton");
	hash_table_set(ht, NULL, "holberton");
	hash_table_set(ht, "mentioner", "holberton");
	hash_table_set(ht, "heliotropes", "holberton");
	hash_table_set(ht, "neurospora", "holberton");
	hash_table_set(ht, "depravement", "holberton");
	hash_table_set(ht, "serafins", "holberton");
	return (EXIT_SUCCESS);
}
