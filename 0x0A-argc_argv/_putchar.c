#include <unistd.h>

/**
  * _putchar - writes char to std output
  * @c: char
  * Return: 1 if true, 0 if false
  * 0n error, -1 return
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
