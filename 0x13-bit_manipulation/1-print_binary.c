#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be converted to a binary string
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	bool zero;

	zero = false;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			zero = true;
		}
		else if (zero)
			_putchar('0');
	}
}
