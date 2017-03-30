#include "holberton.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to binary string to be converted to unsigned int
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;

	converted = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		converted *= 2;
		if (*b == '1')
			converted += 1;
		else if (*b != '0')
			return (0);
		b++;
	}
	return (converted);
}
