#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @c: input string
 * Return: modified input string
 *
 */
char *leet(char *c)
{
	int i;
	int j;
	char leet[] = "4433007711";
	char l[] = "aAeEoOtTlL";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == l[j])
			    c[i] = leet[j];
		}
	}
       	return (c);

}
