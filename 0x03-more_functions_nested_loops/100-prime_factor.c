#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: void
 *
 */
int main(void)
{
	long int i;
	long int n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
			n /= i;
	}
	printf("%li\n", n);
	return (0);
}
