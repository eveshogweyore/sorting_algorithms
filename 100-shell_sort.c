#include "sort.h"
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
 * shell_sort - sorts int array, ascend, w/ shell sort & knuth seq
 * @array: the array to be sorted.
 * @size: the size of the array to be sorted.
 * Return: the sorted array.
 */
void shell_sort(int *array, size_t size)
{
	int n, gap, i, j, k, l;

	n = (int) size;
	i = 1;

	while (i <= n)
	{
		gap = i;
		i = (3 * i) + 1;
	}

	for (j = gap; j >= 1; j = (j - 1) / 3)
	{
		for (l = j; l < n; l++)
		{
			for (k = l - j; k >= 0; k -= j)
			{
				if (array[k + j] > array[k])
					break;
				swp(&array[k + j], &array[k]);
			}
		}
		print_array(array, size);
	}
}
