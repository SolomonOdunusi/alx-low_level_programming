#include <unistd.h>

/**
  * _putchar - write the char c to standard output
  * @c: The char to print
  * Return: 1 if true and 0 if false
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
