#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 49;

	while (a < 57)
	{
		while (b < 58)
		{
			if ((a != b) && (a < b))
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = 49;
		a++;
	}
	putchar('\n');

	return (0);
}
