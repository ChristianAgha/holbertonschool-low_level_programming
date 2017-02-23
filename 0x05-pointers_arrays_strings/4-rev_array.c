#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements in array
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	n--;
	while (i <= n)
	{
		t = a[n];
		a[n] = a[i];
		a[i] = t;
		i++;
		n--;
	}
}
