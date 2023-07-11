#include "main.h"

/**
 * create_file - This function creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: the text that is written to the file
 * Return: returns 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, FILE_PERM);

	if (fd == -1)
	{
		return (-1);
	}

	ftruncate(fd, 0);
	for (i = 0; text_content[i]; i++)
	{
		write(fd, &text_content[i], 1);
	}

	close(fd);
	return (1);
}
