#include <unistd.h>
#include "lists.h"

/**
 * _putchar - prints char
 * @c: character
 * Return: it returns characters
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
