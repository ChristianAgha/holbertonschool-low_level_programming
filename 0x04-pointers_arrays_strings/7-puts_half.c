#include "holberton.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input string
 * Return: Void
 *
 */
void puts_half(char *str)
{
	unsigned int j, i = 0;

	while (str[i] != '\0')
		i++;
	if ((i + 1) % 2 == 0)
		j = (i + 1) / 2;
	else
		j = i / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
