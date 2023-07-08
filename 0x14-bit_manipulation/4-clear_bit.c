#include "main.h"

/**
 * clear_bit - sets the value at indicated index to 0
 * @n: number
 * @index: the given or indicated position
 * Return: returns 1 in given position or bit
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitset = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~bitset;
	return (1);
}
