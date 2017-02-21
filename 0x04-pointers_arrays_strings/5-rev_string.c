#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: Void
 *
 */
void rev_string(char *s)
{
	unsigned int j = 0, i = 0;
	char c[1000];

	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	while (i > 0)
	{
		s[j] = c[i-1];
		i--;
		j++;
	}
}
