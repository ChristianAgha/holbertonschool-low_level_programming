#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_line -  a function that draws a straight line in the terminal
 * @n: number of dashs
 * Return: void
 *
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
