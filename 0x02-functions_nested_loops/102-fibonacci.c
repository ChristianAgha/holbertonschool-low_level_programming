#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * first: initial number
 * second: next number
 * f: Fibonacci number
 * Return: void
 */
int main(void)
{
	unsigned long first = 1, second = 2, f, a;

	printf("1, 2, ");
	for (a = 1; a <= 49; a++)
	{
		f = first + second;
		printf("%lu", f);
		if (a < 49)
			printf(", ");
		first = second;
		second = f;

	}
	printf("\n");
	return (0);
}
