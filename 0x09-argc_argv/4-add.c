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
	int i, j, arglen, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			arglen = strlen(argv[i]);

			for (j = 0; j < arglen; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
