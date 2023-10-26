#include "main.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: returns the elf statement
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open_elf_file(argv[1], &header);
	display_elf_header(&header);

	close(fd);
	return 0;
}
