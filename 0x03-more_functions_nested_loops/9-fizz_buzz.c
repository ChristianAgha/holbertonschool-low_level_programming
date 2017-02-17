#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the numbers from 1 to 100 replacing the multiples of 3 by Fizz
 * and the multipes of 5 by Fizz
 * Return: void
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 5) == 0 && (i % 3) != 0)
			printf("Buzz ");
		else if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
