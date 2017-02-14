#include "holberton.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * a: first number
 * b: second number
 * r: the multiplication result
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int counter = 0;
	int m;

	while (a < 10)
	{
		while (b < 10)
		{
			m = a * b;
			if (m > 9)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			if (counter < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (a * (b + 1) < 10)
					_putchar(' ');
			}
			counter++;
			b++;
		}
		_putchar('\n');
		b = 0;
		counter = 0;
		a++;
	}
}
