#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!", my_dog->name, my_dog->age);
	printf("\n");
	free_dog(my_dog);
	return (0);
}
