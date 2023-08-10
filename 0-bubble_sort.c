#include"sort.h"
/**
 * bubble_sort - sorts an array in ascending order using the Bubble sort algo
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0, swap = 1;
	size_t i;

	if (!array || size < 2)
		return;

	while (swap)
	{
		swap = 0;
		for (i = 0 ; i < size - 1 ; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = 1;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
