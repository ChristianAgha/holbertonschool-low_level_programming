#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from n to m
 * @n: first input integer
 * @m: second input integer
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int index, flipped_bits, i;

	index = sizeof(n) * 8 - 1;
	flipped_bits = 0;
	for (i = 0; i <= index; i++)
	{
		if (((n ^ m) >> i) & 1)
			flipped_bits++;
	}
	return (flipped_bits);
}
