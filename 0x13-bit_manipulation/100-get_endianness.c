#include "holberton.h"
/**
 * get_endianness - checks the endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;
	if (*c)
		return (1);
	return (0);
}
