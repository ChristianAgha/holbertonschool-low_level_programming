#include "holberton.h"
/**
 * _puts_recursion -  a function that prints a string, followed by a new line
 * @s: pointer to string
 * Return: void
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
	}
	if (*s != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
