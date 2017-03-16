#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that performs simple operations
 * @argc: number of arguments
 * @argv: arguments as strings
 * Return: calc num1 operator num2
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		return (100);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
