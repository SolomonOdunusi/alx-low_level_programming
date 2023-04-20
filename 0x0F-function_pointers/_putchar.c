#include <unistd.h>

/**
 * _putchar - prints into the std output
 * @c: character
 * Return: returns the stdout
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
