#include "main.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	Elf32_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(1);
	}
	fp = fopen(argv[1], "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "Could not open file '%s'\n", argv[1]);
		exit(1);
	}
	
	if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1)
	{
		fprintf(stderr, "Could not read ELF header from file '%s'\n", argv[1]);
		exit(1);
	}

	printf("ELF Header:\n");
	printf("  Magic:   0x%x\n", ehdr.e_ident[EI_MAG0]);
	printf("  Class:                             %d\n", ehdr.e_ident[EI_CLASS]);
	printf("  Data:                              %d\n", ehdr.e_ident[EI_DATA]);
	printf("  Version:                           %d\n", ehdr.e_version);
	printf("  OS/ABI:                            %d\n", ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", ehdr.e_type);
	printf("  Entry point address:               0x%x\n", ehdr.e_entry);

	fclose(fp);
	return (0);
}

