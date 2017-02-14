#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: last digit in a number
 */
int print_last_digit(int n)
{
	if (n >= 0)
	_putchar('0' + n % 10);
	else
	{
		n = n * -1;
		_putchar('0' + n % 10);
	}
	return (n % 10);
}
