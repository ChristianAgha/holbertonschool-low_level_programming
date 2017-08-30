#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted
 * array using the Binary search algorithm
 * @array: pointer to first element of input array of ints
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left, mid, right, i;

	if (!array)
		return (-1);

	left = 0;
	mid = (size - 1) / 2;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + ((right - left) / 2);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid;
	}
	return (-1);
}
