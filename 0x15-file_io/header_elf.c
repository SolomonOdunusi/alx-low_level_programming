#include "main.h"

/**
 * display_elf_header - display the elf header as a list
 * @filename: the name of the file
 * Return: returns the elf header to the cli
*/
void display_elf_header(char *filename)
{
	int fd = open(filename, O_RDONLY);
	
	if (fd == -1) {
		fprintf(stderr, "Error: Couldn't open file %s\n", filename);
		exit(98);
	}
	
	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
		fprintf(stderr, "Error: Couldn't read ELF header from file %s\n", filename);
		exit(98);
	}
	
	if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E'
	|| elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F')
	{
		fprintf(stderr, "Error: File %s is not an ELF file\n", filename);
		exit(98);
	}
	
	printf("Magic: ");
	for (int i = 0; i < 16; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");
	printf("Class: %u-bit\n", elf_header.e_ident[4] == 1 ? 32 : 64);
	printf("Data: %s\n", elf_header.e_ident[5] == 1 ? "little-endian"
			: "big-endian");
	printf("Version: %u\n", elf_header.e_ident[6]);
	printf("OS/ABI: %u\n", elf_header.e_ident[7]);
	printf("ABI Version: %u\n", elf_header.e_ident[8]);
	printf("Type: %u\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);
	printf("Format: ELF%u\n", elf_header.e_ident[4]);
	
	close(fd);
}
