#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the two matrixs
 * @a: pointer to matrix
 * @size: size of matrix
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int a_res = 0;

	while (i < (size * size))
	{
		a_res += a[i];
		i += size + 1;
	}
	printf("%d, ", a_res);

	i = size - 1;
	a_res = a[i];
	while (i < ((size * size) - size))
	{
		i += size - 1;
		a_res += a[i];
	}
	printf("%d\n", a_res);
}
