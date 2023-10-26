#include "main.h"

void display_magic(const unsigned char *ident)
{
	int i;
        
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
printf("%02x ", ident[i]);
	}
	printf("\n");
}

void display_data(unsigned char data)
{
	printf("  Data:                              ");
	switch (data)
	{
		case 1:
			printf("2's complement, little endian\n");
			break;
		case 2:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
}

void display_class(unsigned char class)
{
	printf("  Class:                             ");
	switch (class)
	{
		case 1:
			printf("ELF32\n");
			break;
		case 2:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
}

/**
 * display_type - 
void display_type(uint16_t type)
{
	printf("  Type:                              ");
	switch (type)
	{
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
}
