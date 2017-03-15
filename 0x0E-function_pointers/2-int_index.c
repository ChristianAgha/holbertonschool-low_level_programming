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
	unsigned int i;

	i = 0;

	if (size <= 0)
		return (-1);

	if (array && *cmp)
		while (!(cmp(array[i])))
		{
			i++;
			if (array[i] == '\0')
				return (-1);
		}

	return (i);
}
