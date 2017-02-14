#include "holberton.h"
/**
 * add - adds two integer and returns the result
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int add(int a, int b)
{
	long r;
	unsigned long u;

	if (a >= 0 && b >= 0)
	{
		u = a + b;
		return (u);
	}
	else
	{
		r = a + b;
		return (r);
	}
}
