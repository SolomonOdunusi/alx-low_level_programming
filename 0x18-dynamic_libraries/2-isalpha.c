#include "main.h"

/**
  * _isalpha -checks for alphabetic character
  * @c: Parameter to be run
  * Return: 1 if lower or upper or case
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

