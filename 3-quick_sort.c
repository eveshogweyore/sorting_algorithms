#include "sort.h"
/**
 * swp - swaps two integers."
 * @a: 1st integer.
 * @b: 2nd int.
 * Return: nothing.
 */
void swp(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
/**
 * quick_sort - quicksorts an array of ints with lomuto partition.
 * @array: array to sort.
 * @size: length of array.
 * Return: nothing.
 */
void quick_sort(int *array, size_t size)
{
	int high, low;

	high = size - 1;
	low = 0;

	part(array, low, high);
}

/**
 * part - partitions array recursively.
 * @array: array to be partitioned.
 * @low: the low bound of array.
 * @high: the high bound of array.
 * Return: 0 for success.
 */
int part(int *array, int low, int high)
{
	int pivot;
	size_t i;

	if (low >= high)
		return (0);

	pivot = array[high];

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] <= pivot)
		{
			swp(array[i], low);
			low++;
		}
	}
	swp(low, pivot);
	part(array[:pivot - 1], sizeof(array[:pivot - 1]));
	part(array[pivot - 1:], sizeof(array[pivot - 1:]));
}
