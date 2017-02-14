#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * h: the hours
 * m: the minutes
 * Return: 1 if c is letter, 0 if not
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
