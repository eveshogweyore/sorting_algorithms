#include "sort.h"
/**
 * bubble_sort - sorts int array in ascend order w/ bubble sort algo.
 * @array: the array to be sorted.
 * @size: the size of the array to be sorted.
 * Return: return the sorted array in ascend order.
 */
void bubble_sort(int *array, size_t size)
{
	if (size >= 2)
	{
		size_t i, j, temp, swp;

		for (i = 0; i < size; i++)
		{
			swp = 0;

			for (j = 0; j < size - 1; j++)
			{
				if (array[j + 1] < array[j])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;

					print_array(array, size);

					swp = 1;
				}
			}

			if (swp == 0)
				break;
		}
	}
}
