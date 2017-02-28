#include "holberton.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: charachter to look for in string s
 * Return: a pointer to the first occarance of c or NULL
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < (sizeof(s) / sizeof(char)); i++)
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
	}
	return (s + 1);
}
