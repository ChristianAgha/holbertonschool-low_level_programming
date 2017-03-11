#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int i, j, m, k, b, c, l, lenofstrs;
	int *res, *p;

	if (!(checkinput(argc, argv)))
	{
		num1 = argv[1];
		num2 = argv[2];
		lenofstrs = _strlen(num1) + _strlen(num2) + 1;
		res = (int *)_calloc(lenofstrs, sizeof(int));
		for (i = (_strlen(num2) - 1); i >= 0; --i)
		{
			p = (int *)_calloc(lenofstrs, sizeof(int));
			for (j = (_strlen(num1) - 1), k = 0; j >= 0; j--, k++)
			{
				b = (num1[j] - 48) * (num2[i] - 48);
				b = *(p + k) + b;
				*(p + k) = b % 10;
				*(p + k + 1) = b / 10;
			}
			while (*(p + k) == 0)
				--k;
			for (m = (_strlen(num2) - 1) - i, l = 0; l <= k; l++, m++)
			{
				c = *(res + m) + *(p + l);
				*(res + m) = c % 10;
				*(res + m + 1) = *(res + m + 1) + (c / 10);
			}
			while (*(res + m) == 0)
				--m;
			free(p);
		}
		if (*(res + m) == 0)
			--m;
		for (i = m; i >= 0; i--)
			printf("%d", *(res + i));
		printf("\n");
	}
	return (0);
}
/**
 * checkinput - check the input format
 * @argc: number of arguments
 * @argv: arguments as strings
 * Return: 0 if successful, 1 if it fails
 */
int checkinput(int argc, char **argv)
{
	int i, j, arglen;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		arglen = _strlen(argv[i]);

		for (j = 0; j < arglen; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	return (0);
}
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number or array members
 * @size: size of each array memeber
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;
	unsigned int i;

	if ((nmemb < 1) || (size < 1))
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: the length of the string
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
