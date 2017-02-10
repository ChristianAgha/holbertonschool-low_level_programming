#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one = 0;
	int two = 1;

	while (one <= 99)
	{
		while (two <= 99)
		{
			putchar(one / 10 + '0');
			putchar(one % 10 + '0');
			putchar(' ');
			putchar(two / 10 + '0');
			putchar(two % 10 + '0');
			if (one < 98)
			{
				putchar(',');
				putchar(' ');
			}
			two++;
		}
		one++;
		two = one + 1;
	}
	putchar('\n');
	return (0);
}
