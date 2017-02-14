#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet from a to z 10 times
 * @void: no arguments
 * Return: Void.
 *
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int a;

	for (a = 1; a <= 10; a++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
