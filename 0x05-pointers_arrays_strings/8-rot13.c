#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @c: input string
 * Return: modified input string
 *
 */
char *rot13(char *c)
{
	int i;
	int j;
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char l[] =    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (c[i] == l[j])
			{
				c[i] = rot13[j];
				break;
			}
	}
	return (c);
}
