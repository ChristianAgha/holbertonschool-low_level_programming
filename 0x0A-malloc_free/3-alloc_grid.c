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
	int **array2d, i, j;

	if ((width < 1) || (height < 1))
		return (NULL);

	array2d = (int **) malloc(sizeof(array2d) * height);
	if (array2d == NULL)
	{
		free(array2d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array2d[i] = (int *) malloc(sizeof(int) * width);
		if (array2d[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array2d[j]);
			free(array2d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array2d[i][j] = 0;
		}
	}

	return (array2d);
}
