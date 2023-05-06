#include "main.h"

/**
 * set_bit - Convert the indicated bit to 1
 * @n: number
 * @index: the indicated index
 * Return: returns 1 if position is found
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}

