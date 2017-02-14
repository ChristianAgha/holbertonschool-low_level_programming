#include "holberton.h"
/**
 * _isalpha - tells if charachter is letter or not
 * @c: the charachter
 * Return: 1 if c is letter, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c > 90 && c < 97)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
