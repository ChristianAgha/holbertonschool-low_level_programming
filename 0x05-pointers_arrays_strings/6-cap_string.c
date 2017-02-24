#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: input string
 * Return: modified input string
 *
 */
char *cap_string(char *c)
{
	int i = 0;
	int j;
	int k;
	char seperator[] = " \t\n,;.!?\"(){}";

	if (c[i] >= 'a' && c[i] <= 'z')
	{
		c[i] = c[i] - 'a' + 'A';
		i++;
	}
	for (j = 0; seperator[j] != '\0'; j++)
	{
		for (k = i; c[k] != '\0'; k++)
		{
			if (c[k] == seperator[j])
				if (c[k + 1] >= 'a' && c[k + 1] <= 'z')
				{
					c[k + 1] = c[k + 1] - 'a' + 'A';
				}
		}
	}
	return (c);

}
