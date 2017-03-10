#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to be reallocated
 * @old_size: size  of ptr in bytes
 * @new_size:  new size, in bytes of the new memory block
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		newptr[i] = ((char *)ptr)[i];

	free(ptr);
	return (newptr);
}
