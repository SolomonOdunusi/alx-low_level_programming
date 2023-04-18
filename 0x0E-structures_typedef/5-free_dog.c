#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees up the memory allocated to dog
 * @d: dog
 * Return: returns freed memory
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
