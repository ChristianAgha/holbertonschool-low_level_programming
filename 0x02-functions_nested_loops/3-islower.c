#include "holberton.h"
/**
 * _islower - tells if charachter is lowercase
 * @c: the charachter
 * Return: 1 if c is lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
