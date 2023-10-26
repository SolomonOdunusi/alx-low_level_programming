#include "main.h"

/**
 * display_version - displays the elf version
 * @version: the version num
 * Return: returns the elf version
 */
void display_version(unsigned char version)
{
	printf("  Version:                           %u (current)\n", version);
}

/**
 * open_elf_file - opens the elf file
 * @filename: the name of the file
 * @header: the elf header
 * Return: returns the opened file
 */
int open_elf_file(const char* filename, Elf64_Ehdr *header)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", filename);
		exit(98);
	}

	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		exit(98);
	}
	return fd;
}

/**
 * display_entry - displays the entry point
 * @entry: the entry address
 * Return: returns the output of the entry point
 */
void display_entry(uint64_t entry)
{
	printf("  Entry point address:               0x%lx\n", entry);
}

/**
 * display_elf_header - It displays the elf header
 * @header: The elf header
 * Return: returns all the display header
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	display_magic(header->e_ident);
	display_class(header->e_ident[4]);
	display_data(header->e_ident[5]);
	display_version(header->e_ident[6]);
	printf("  OS/ABI:                            %u\n", header->e_ident[7]);
	printf("  ABI Version:                       %u\n", header->e_ident[8]);
	display_type(header->e_type);
	display_entry(header->e_entry);
}
