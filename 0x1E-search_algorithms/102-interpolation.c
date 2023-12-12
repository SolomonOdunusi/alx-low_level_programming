#include "search_algos.h"

/**
 * interpolation_search - This function searches for a
 * value in a sorted array
 * of integers using the Interpolation search algorithm
 *
 * @array: ptr to the first element of the array to search
 * @size: num of elements in array
 * @value: value to search for
 * Return: returns first index where value is located,
 * or -1 if value is not
 * present in array or if array is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		i = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (i > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", i);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
