#include "main.h"

void print_osabi(unsigned char *buf)
{
	printf("  OS/ABI:                            ");
	switch (buf[7])
	{
		case 0x00:
		printf("UNIX - System V\n");
		break;
		case 0x01:
		printf("UNIX - HP-UX\n");
		break;
		case 0x02:
		printf("UNIX - NetBSD\n");
		break;
		case 0x03:
		printf("UNIX - Linux\n");
		break;
		case 0x04:
		printf("UNIX - GNU Hurd\n");
		break;
		case 0x06:
		printf("UNIX - Solaris\n");
		break;
		case 0x07:
		printf("UNIX - AIX\n");
		break;
		case 0x08:
		printf("UNIX - IRIX\n");
		break;
		case 0x09:
		printf("UNIX - FreeBSD\n");
		break;
		case 0x0A:
		printf("UNIX - Tru64\n");
		break;
		case 0x0B:
		printf("Novell - Modesto\n");
		break;
		case 0x0C:
		printf("UNIX - OpenBSD\n");
		break;
		case 0x0D:
		printf("UNIX - OpenVMS\n");
		break;
		case 0x0E:
		printf("HP - Non-Stop Kernel\n");
		break;
		case 0x0F:
		printf("Amiga - Exec\n");
		break;
		case 0x10:
		printf("ARC - Compatible\n");
		break;
		case 0x11:
		printf("UNIX - Interix\n");
		break;
		case 0x12:
		printf("UNIX - AROS\n");
		break;
		case 0x53:
		printf("Linux - Kernel Version 2.6.0 or Later\n");
		break;
		default:
		printf("Unknown\n");
	}
}

void print_abiversion(unsigned char *buf)
{
 	printf("  ABI Version:                       %d\n", buf[8]);
}

void print_type(unsigned char *buf) {
	printf("  Type:                              ");
	switch (buf[16])
	{
		case 0x01:
		printf("Relocatable file\n");
		break;
		case 0x02:
		printf("Executable file\n");
		break;
		case 0x03:
		printf("Shared object file\n");
		break;
		case 0x04:
		printf("Core dump file\n");
		break;
		default:
		printf("Unknown\n");
	}
}

void print_entry(unsigned char *buf)
{
	int entry;
	if (buf[4] == 0x01)
	{
		entry = *(int*)(buf + 24);
	}
	else
	{
		entry = *(int*)(buf + 32);
	}
	printf("  Entry point address:               0x%x\n", entry);
}
