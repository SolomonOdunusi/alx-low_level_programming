#include "main.h"

/**
 * get_endianness - it checks endianess
 * Return: returns checks
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
