#include "holberton.h"
/**
 * print_alphabet - prints the alphabet from a to z
 * @void: no arguments
 * Return: Void.
 *
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
