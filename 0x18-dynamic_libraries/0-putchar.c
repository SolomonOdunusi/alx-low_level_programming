#include "main.h"

/**
 * _putchar - print chars
 * @c: character
 * Return: returns char
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
