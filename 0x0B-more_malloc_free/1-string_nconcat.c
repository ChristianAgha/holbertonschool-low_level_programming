#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: a pointer to new string made up of s1 + s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s3;

	len1 = 0;
	len2 = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	s3 =  malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
