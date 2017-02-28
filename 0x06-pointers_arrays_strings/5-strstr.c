#include "holberton.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string to be searched
 * @needle: search key
 * Return: a pointer to the beginning of the located substring or NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, first;

	while (haystack[i] != '\0')
	{
		first = i;
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0' && haystack[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + first);
		i = first + 1;

	}
	return ('\0');
}
