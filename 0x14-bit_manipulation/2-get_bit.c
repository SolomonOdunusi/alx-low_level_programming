#include "main.h"

/**
 * get_bit - gets a bit from an index
 * @n: UL int
 * @index: index value
 * Return: returns value f the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitset = 1UL << index;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit_value = ((n & bitset) ? 1 : 0);
	return (bit_value);
}
