#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 *  array of integers
 * @width: width  of array
 * @height: height of array
 * Return: pointer to a 2 dimensional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if ((width < 1) || (height < 1))
		return (NULL);

	array = malloc(sizeof(int) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
