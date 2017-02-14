#include "holberton.h"
/**
 * _abs - returns absolute value of input
 * @n: the input
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
