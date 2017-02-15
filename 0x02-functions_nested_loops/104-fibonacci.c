#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long double first = 1, second = 2, a, f;

	for (a = 1; a <= 96; a++)
	{
		if (a == 1)
			printf("1, 2, ");
		f = first + second;
		printf("%1.0Lf", f);
		if (a <= 95)
			printf(", ");
		first = second;
		second = f;
	}
	printf("\n");
	return (0);
}
