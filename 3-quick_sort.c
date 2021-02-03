#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - Function to sort an array.
 * @array: Array to sort.
 * @size: Size of the array.
 * Return: No return.
 */

void quick_sort(int *array, size_t size)
{
	quick(array, size, 0, size - 1);
}

/**
 * quick - Pend information.
 * @array: Array.
 * @size: Size of the array.
 * @left: Left "pointer".
 * @right: Right pointer.
 * Return: No return.
 */

void quick(int *array, size_t size, int left, int right)
{
	int pos;

	if (left < right)
	{
		pos = partition(array, size, left, right);
		quick(array, size,  left, pos - 1);
		quick(array, size, pos + 1, right);
	}
}

/**
 * partition - Divide the array in two sections.
 * @array: Array.
 * @size: Size of the array.
 * @left: Left "pointer".
 * @right: Right "pointer".
 * Return: Left element.
 */

int partition(int *array, size_t size, int left, int right)
{
	int piv = array[right], i = left, j = 0;

	for (j = left; j < right; j++)
	{

		if (array[j] < piv)
		{
			swap(array, size, i, j);
			i++;
		}
	}
	swap(array, size, i, j);

	return (i);
}

/**
 * swap - Swap  the elemnts in the array
 * @array: Array.
 * @size: Size of the aray.
 * @a: Number to swap.
 * @b: number to swap.
 * Return: No return.
 */

void swap(int *array, size_t size, int a, int b)
{
	int tmp;

	if (array[a] != array[b])
	{
		tmp = array[a];
		array[a] = array[b];
		array[b] = tmp;
		print_array(array, size);
	}
}
