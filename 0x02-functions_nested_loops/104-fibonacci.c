#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long first = 1, second = 2, f, a;

	for (a = 1; a <= 96; a++)
	{
		if (a == 1)
			printf("1, 2, ");
		f = first + second;
		printf("%lu", f);
		if (a < 96)
			printf(", ");
		first = second;
		second = f;

	}
	printf("\n");
	return (0);
}
