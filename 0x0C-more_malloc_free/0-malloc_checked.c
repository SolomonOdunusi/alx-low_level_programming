#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - checks malloc
  * @b: unsigned integer
  * Return: returns a pointer to allo mem or 98 value
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
