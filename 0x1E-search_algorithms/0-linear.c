#include "search_algos.h"

/**
 * linear_search - This function searches for a value
 * in an array of integer
 * @array: ptr to the first element of the array to search
 * @size: num of elements in array
 * @value: value to search for
 * Return: returns first index where value is located,
 * or -1 if value is not present
 * in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
