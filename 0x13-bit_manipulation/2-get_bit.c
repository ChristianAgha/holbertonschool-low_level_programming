#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be converted to a binary string
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
