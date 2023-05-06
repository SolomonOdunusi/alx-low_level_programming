#include "main.h"

/**
 * binary_to_uint - A function that converts binary to decimal number
 * @b: binary number
 * Return: returns the decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '0')
		{
			num = num << 1;
		}
		else if (b[i] == '1')
		{
			num = (num << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
