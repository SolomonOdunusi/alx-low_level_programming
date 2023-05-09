#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: letters to count
 * Return: returns the text in file plus number of chars
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t num_read;
	ssize_t num_written;
	
	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buffer = (char*) malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	num_read = fread(buffer, sizeof(char), letters, fp);
	if (num_read == -1)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
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

