#include "search_algos.h"

/**
 * jump_search - This function that searches for a value
 * thru a sorted array with jump search
 * 
 * @array: ptr to the first element of the array to search
 * @size: num of elements in array
 * @value: value to search for
 * Return: returns first index where value is located,
 * or -1 if value is not
 * present in array or if array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (j = i - jump; j <= i; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	for (j = i - jump; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
