#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: input string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *string;

	len = 0;
	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	string = (char *) malloc(sizeof(char) * len);
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		string[i] = str[i];
	}
	string[i] = '\0';
	return (string);
}
