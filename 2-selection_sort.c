#include "sort.h"

/**
 * selection_sort - the selection sort
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min;
	size_t swap;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			if (min != i)
			{
				swap = array[i];
				array[i] = array[min];
				array[min] = swap;
				print_array(array, size);
			}
		}
	}
}
