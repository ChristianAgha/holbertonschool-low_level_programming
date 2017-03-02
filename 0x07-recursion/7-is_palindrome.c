#include "holberton.h"
#include <stdio.h>
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
/**
 * checkpal - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * @l: string length
 * @count: a counter
 * Return: 1 if a string is a palindrome and 0 if not
 */
int checkpal(char *s, int l, int count)
{
	if (count == l || count == (l - 1))
	{
		if (s[l] == s[count])
			return (1);
		else
			return (0);
	}
	if (s[l] != s[count])
		return (0);

	return (checkpal(s, l - 1, count + 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);
	int counter = 0;

	if (i == 0)
		return (1);

	return (checkpal(s, i - 1, counter));
}
