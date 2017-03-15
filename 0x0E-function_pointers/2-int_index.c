#include <stdlib.h>
/**
 * int_index - a function that searches for an integer
 * @array: input array
 * @size: size of input array
 * @cmp: function pointer
 *
 * Return: 0 if successful, 1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);

	while (!(cmp(array[i])))
	{
		i++;
		if (i == size)
			return (-1);
	}

	return (i);
}
