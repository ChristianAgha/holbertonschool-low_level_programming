#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first input int
 * @b: second input int
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
