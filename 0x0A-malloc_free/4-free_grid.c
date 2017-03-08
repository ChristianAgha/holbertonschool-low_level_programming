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
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
