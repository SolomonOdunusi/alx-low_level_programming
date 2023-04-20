#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - iterates through the array
 * @array: array of pointer
 * @size: size of array
 * @action: a ptr to function
 * Return: returns a parameter on each element of an array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
