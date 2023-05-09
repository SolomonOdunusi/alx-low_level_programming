#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX standard output
 * @filename: the name of the file
 * @letters: letters to count
 * Return: returns the text in file plus number of chars
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char *buffer = (char *) malloc(sizeof(char) * letters);
	ssize_t num_read = fread(buffer, sizeof(char), letters, fp);
	ssize_t num_written = write(STDOUT_FILENO, buffer, num_read);

	if (filename == NULL)
	{
		return (0);
	}

	if (fp == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	if (num_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	if (num_written == -1 || num_written != num_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (num_written);
}

