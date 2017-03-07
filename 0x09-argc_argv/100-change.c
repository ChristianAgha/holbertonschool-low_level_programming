#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments passed to program
 * Return: 0
 */
int main(int argc, char **argv)
{
	int quarter, dime, five, two, one, num, add;

	quarter = dime = five = two = one = add = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	quarter = num / 25;
	num = num % 25;
	dime = num / 10;
	num = num % 10;
	five = num / 5;
	num = num % 5;
	two = num / 2;
	num = num % 2;
	one = num;

	add = quarter + dime + five + two + one;

	printf("%d\n", add);
	return (0);
}
