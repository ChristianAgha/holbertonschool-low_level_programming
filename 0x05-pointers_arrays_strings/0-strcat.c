#include "holberton.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: string to copy to
 * @src: string to copy
 * Return: a pointer to the resulting string dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; src[i] != '\0'; i++)
		dest[j + i] = src[i];

	return (dest);
}
