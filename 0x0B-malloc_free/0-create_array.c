#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: size of bytes
  * @c: character
  * Return: returns an array of chars
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
