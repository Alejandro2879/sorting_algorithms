#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @array: Pointer to the array.
 * @size: Size of the array.
 * Return: No return.
 */

void bubble_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i_array, i_swap;

	for (i_array = 0; i_array < size; i_array++)
	{
		for (i_swap = 0; i_swap < size - i_array - 1; i_swap++)
		{
			if (array[i_swap] > array[i_swap + 1])
			{
				temp = array[i_swap];
				array[i_swap] = array[i_swap + 1];
				array[i_swap + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
