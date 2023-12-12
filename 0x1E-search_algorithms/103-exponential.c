#include "search_algos.h"

/**
 * exponential_search - This function searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: ptr to the first element of the array to search
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return: returns first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	low = 1;
	while (low < size && array[low] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		low *= 2;
	}
	if (low >= size)
		high = size - 1;
	else
		high = low;
	low /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = (low + high) / 2;
		if (array[i] == value)
			return (i);
		else if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	return (-1);
}
