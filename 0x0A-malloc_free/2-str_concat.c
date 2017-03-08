#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to new string made up of s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *s3;

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';

	return (s3);
}
