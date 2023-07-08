#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints chars
 * @c: character
 * Return: returns characters
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
