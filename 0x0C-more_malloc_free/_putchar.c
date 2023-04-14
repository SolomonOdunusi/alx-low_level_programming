#include <unistd.h>

/**
  * _putchar - prints chararcters
  * @c: characters
  * Return: returns 0 or 1
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
