#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *numarray;
	int i, armem;

	if (min > max)
		return (NULL);

	armem = (max - min) + 1;
	numarray = malloc(sizeof(*numarray) * armem);
	if (numarray == NULL)
		return (NULL);

	numarray[0] = min;

	for (i = 1; i < armem ; i++)
	{
		numarray[i] = ++min;
	}

	return (numarray);
}
