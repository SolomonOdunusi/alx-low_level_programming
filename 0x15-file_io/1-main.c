#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @ac: arg count
 * @av: arg vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		fprintf(stderr, "Usage: %s filename text\n", av[0]);
		return (1);
	}

	res = create_file(av[1], av[2]);
	if (res == -1)
	{
		fprintf(stderr, "Error creating file\n");
		return (1);
	}

	printf("-> %i\n", res);
	return (0);
}
