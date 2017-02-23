#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @c: input string
 * Return: input string in uppercase
 *
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 'a' + 'A';
	}
	return (c);
}
