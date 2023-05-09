#include "main.h"

void print_error_and_exit(const char *error_message,
		const char *file_name, int exit_code);

/**
 * main - Main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to\n", "", 97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
		print_error_and_exit("Error: Can't write to %s\n", argv[2], 99);
		if (write_bytes != read_bytes)
		print_error_and_exit("Error: Incomplete write to %s\n", argv[2], 99);
	}

	if (read_bytes == -1)
		print_error_and_exit("Error: Can't read from file %s\n", argv[1], 98);
	if (close(file_from) == -1)
		print_error_and_exit("Error: Can't close fd %d\n", argv[1], 100);
	if (close(file_to) == -1)
		print_error_and_exit("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}

/**
 * print_error_and_exit - print error and the exit
 * @error_message: the error message
 * @file_name: the name of the file
 * @exit_code: the exit code
 * Return: returns error
*/
void print_error_and_exit(const char *error_message,
		const char *file_name, int exit_code)
{
	fprintf(stderr, error_message, file_name);
	exit(exit_code);
}
