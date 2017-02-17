#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: void
 *
 */
void print_triangle(int size)
{
	int a = size;
	int b = 1;
	int c = 1;

	if (size > 0)
	{
		while (size > 0)
		{
			while (a > 1)
			{
				_putchar(' ');
				a--;
			}
			b = c;
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
			c++;
			size--;
			a = size;
		}
	}
	else
		_putchar('\n');
}
