#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: input string
 * Return: Void
 *
 */
void rev_string(char *s)
{
	int j = 0, i = 0, l = 0;
	char c[1000];

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = 0; l <= i; l++)
	{
		c[l] = s[l];
	}
	while (i >= 0)
	{
		s[j] = c[i-1];
		i--;
		j++;
	}
	s[j++] = '\0';
}
