#include <unistd.h>
#include "list.h"

/**
 * _putchar - prints char
 * @c: character
 * Return: returns char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
