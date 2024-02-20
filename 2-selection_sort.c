#include "sort.h"

/**
 * selection_sort - sorts as array of integers in
 * ascending order using the selection sort.
 * @array: Array containing integers to be sorted.
 * @size: Length of array.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx, min, temp;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			min = array[i];

			for (j = i + 1; j < size; j++)
			{
				if (min > array[j])
				{
					min_idx = j;
					min = array[j];
				}
			}

			if (array[i] > min)
			{
				temp = array[i];
				array[i] = array[min_idx];
				array[min_idx] = temp;

				print_array(array, size);
			}
		}
	}
}
