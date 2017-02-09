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
	char c = '1';
	char d = 'a';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
