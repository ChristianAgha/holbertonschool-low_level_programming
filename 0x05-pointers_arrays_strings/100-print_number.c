#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 * Return: void
 *
 */
void print_number(int n)
{
	int num, ldgt, rdgt, exp;

	rdgt = n % 10;
	n /= 10;
	num = n;
	exp = 1;


	if (rdgt < 0)
	{
		_putchar('-');
		rdgt *= -1;
		num *= -1;
		n *= -1;
	}
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			ldgt = num / exp;
			_putchar(ldgt + '0');
			num -= ldgt * exp;
			exp /= 10;
		}
	}
	_putchar(rdgt + '0');

}
