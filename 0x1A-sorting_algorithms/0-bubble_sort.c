#include "sort.h"

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/*
 * bubble_sort - Sorts an array of integers using the Bubble sort algorithm
 * @array: input array of integers
 * @size: array size
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	for (i = 0; i < n-1; i++)      
 
		// Last i elements are already in place   
		for (j = 0; j < n-i-1; j++) 
			if (arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
}
