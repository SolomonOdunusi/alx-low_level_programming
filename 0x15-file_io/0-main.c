#include "main.h"

/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector that is array of strings
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("(printed chars: %li)\n", n);
	return (0);
}
