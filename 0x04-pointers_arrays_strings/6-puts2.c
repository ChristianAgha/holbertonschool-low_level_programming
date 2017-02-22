#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: input string
 * Return: Void
 *
 */
void puts2(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
