#include "sort.h"
/**
 * swap - swap 2 values
 * @num1: first number to be swapped
 * @num2: second number to be swapped
 * Return: Void
 */
void swap(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm
 * @array: input array of integers
 * @size: array size
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < (size - i - 1); j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}
