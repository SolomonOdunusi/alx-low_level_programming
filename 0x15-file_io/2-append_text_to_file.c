#include "main.h"

/**
 * append_text_to_file - This function appends text to the existing file
 * @filename: the name of the file
 * @text_content: the text within the file
 * Return: returns the argument passed through the cli to the text
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, FILE_PERM);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	text_len = strlen(text_content);
	bytes_written = write(fd, text_content, text_len);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

