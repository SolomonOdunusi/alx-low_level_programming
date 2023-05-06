#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints characters
 * @c: character
 * Return: returns chars
*/
int _putchar(char c)
{
        return (write(1, &c, 1));
}
