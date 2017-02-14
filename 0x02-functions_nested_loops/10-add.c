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
	unsigned long int first;
	unsigned long int second;
	unsigned long int  u;

	if (a >= 0 && b >= 0)
	{
		first = (unsigned long int) a;
		second = (unsigned long int) b;
		u = first + second;
		return (u);
	}
	else
	{
		r = a + b;
		return (r);
	}
}
