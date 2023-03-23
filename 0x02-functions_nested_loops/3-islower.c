#include "main.h"

/**
  * _islower - Prints a lowercase if c
  * @c: Parameter to be printed
  * Return: 1 if it is lowercase else 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
