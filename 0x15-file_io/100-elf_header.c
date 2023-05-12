#include "main.h"


int main(int argc, char *argv[])
{
	int fd;
	unsigned char buf[BUF_SIZE];
	ssize_t n;
	struct stat st;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return 98;
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: cannot open file '%s'\n", argv[1]);
		return 98;
	}
	if (fstat(fd, &st) == -1)
	{
		fprintf(stderr, "Error: cannot get file status of '%s'\n", argv[1]);
		close(fd);
		return 98;
	}
	if (!S_ISREG(st.st_mode))
	{
		fprintf(stderr, "Error: '%s' is not a regular file\n", argv[1]);
		close(fd);
		return 98;
	}
	n = read(fd, buf, BUF_SIZE);
	if (n < BUF_SIZE)
	{
		fprintf(stderr, "Error: '%s' is not a valid ELF file\n", argv[1]);
		close(fd);
		return 98;
	}
	printf("ELF Header:\n");
	print_magic(buf);
	print_class(buf);
	print_data(buf);
	print_version(buf);
	print_osabi(buf);
	print_abiversion(buf);
	print_type(buf);
	print_entry(buf);

	close(fd);
	return 0;
}

