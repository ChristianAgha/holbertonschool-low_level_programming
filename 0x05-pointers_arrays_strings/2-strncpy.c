#include "holberton.h"
/**
 * _strncpy - a function that copies a string
 * @dest: string to copy to
 * @src: string to copy
 * @n: bytes from src to be copied
 * Return: a pointer to the resulting string dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
