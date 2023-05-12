#include "main.h"

void print_magic(unsigned char *buf) {
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%02x ", buf[i]);
	}
	printf("\n");
}

void print_class(unsigned char *buf)
{
	printf("  Class:                             ");
	switch (buf[4])
	{
		case 0x01:
		printf("ELF32\n");
		break;
		case 0x02:
		printf("ELF64\n");
		break;
		default:
		printf("Invalid class\n");
	}
}

void print_data(unsigned char *buf)
{
	printf("  Data:                              ");
	switch (buf[5])
	{
		case 0x01:
		printf("2's complement, little endian\n");
		break;
		case 0x02:
		printf("2's complement, big endian\n");
		break;
		default:
		printf("Invalid data encoding\n");
	}
}

void print_version(unsigned char *buf)
{
	printf("  Version:                           ");
	switch (buf[6])
	{
		case 0x01:
		printf("1 (current)\n");
		break;
		default:
		printf("Invalid version\n");
	}
}
