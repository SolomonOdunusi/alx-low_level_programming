#include "search_algos.h"

/**
 * advanced_binary - This function searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: ptr to the first element of the array to search
 * @size: num of elements in array
 * @value: value to search for
 *
 * Return: returns first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i, middle, left, right;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			if (array[middle - 1] == value)
				right = middle;
			else
				return (middle);
		}
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
