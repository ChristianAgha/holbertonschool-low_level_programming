#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_square - a function that prints a square make of #s
 * @size: dimentions of the square
 * Return: void
 *
 */
void print_square(int size)
{
	int hight, width;

	if (size > 0)
	{
		for (width = 1; width <= size; width++)
		{
			for (hight = 1; hight <= size; hight++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
