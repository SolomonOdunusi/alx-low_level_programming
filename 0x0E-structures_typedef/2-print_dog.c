#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the properties of the dog
 * @d: dog
 * Return: returns 0 or NULL
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", PRINT_OR_NIL(d->name));
	printf("Name: %.1f\n", d->age);
	printf("Name: %s\n", PRINT_OR_NIL(d->owner));
}
