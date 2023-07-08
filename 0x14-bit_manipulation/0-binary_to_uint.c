#include "main.h"

/**
 * binary_to_uint - This function that converts binary to decimal number
 * @b: binary number
 * Return: returns the decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '0')
		{
			number = number << 1;
		}
		else if (b[i] == '1')
		{
			number = (number << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
