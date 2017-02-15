#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: last digit in a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	_putchar('0' + n);
	else
	{
		n = n * -1;
		_putchar('0' + n);
	}
	return (n);
}
