#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of diagonal lines
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int a = 1, b = 1;

	if (n > 0)
	{
		for (b = 1; b <= n; b++)
		{
			for (a = 1; a <= b; a++)
			{
				if (a > 1)
					_putchar(' ');
				if (a == b)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
