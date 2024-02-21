#include "sort.h"
/**
 * swp - swaps two integers."
 * @a: 1st integer.
 * @b: 2nd int.
 * Return: nothing.
 */
void swp(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * quick_sort - quicksorts an array of ints with lomuto partition.
 * @array: array to sort.
 * @size: length of array.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	int high, low, pivot;

	high = size - 1;
	low = 0;

	if (size <= 1)
	{
		/*print_array(array, size);*/
		return;
	}

	/*print_array(array, size);*/
	pivot = part(array, low, high);

	quick_sort(array, pivot);
	quick_sort(array + pivot + 1, size - pivot - 1);
}

/**
 * part - partitions array recursively.
 * @array: array to be partitioned.
 * @low: the low bound of array.
 * @high: the high bound of array.
 * Return: the pivot in the middle.
 */
int part(int *array, int low, int high)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swp(&array[i], &array[j]);
			/*print_array(array, high + 1);*/
		}
		
	}
	swp(&array[i + 1], &array[high]);
	print_array(array, high + 1);

	return (i + 1);
}
