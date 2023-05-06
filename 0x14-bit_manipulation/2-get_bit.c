#include "main.h"

/**
  * get_bit - prints indicated value
  * @n: number
  * @index: the values position
  * Return: returns the value in indicated index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitset = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & bitset) ? 1 : 0);
}
