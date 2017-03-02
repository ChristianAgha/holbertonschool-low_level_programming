#include <stdio.h>
#include "holberton.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: pointer to string
 * Return: length of s
 *
 */
int _strlen_recursion(char *s)
{
	s++;
	if (s[-1] != '\0')
	{
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
