#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number or array members
 * @size: size of each array memeber
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;
	unsigned int i;

	if ((nmemb < 1) || (size < 1))
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
