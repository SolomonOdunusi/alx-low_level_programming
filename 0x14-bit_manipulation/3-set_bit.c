#include "main.h"

/**
 * set_bit - This func converts the indicated bit to 1
 * @n:  UL number
 * @index: the indicated index
 * Return: returns 1 when found
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bitset = 1UL << index;
	*n |= bitset;
	return (1);
}
