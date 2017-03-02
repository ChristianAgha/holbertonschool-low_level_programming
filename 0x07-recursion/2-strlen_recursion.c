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
	if (s[0] == '\0')
	{
		return (0);
	}
	s++;
       	return (_strlen_recursion(s) + 1);
}
