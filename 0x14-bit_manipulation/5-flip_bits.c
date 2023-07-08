#include "main.h"

/**
 * flip_bits - flip the bits that is needed to be worked on
 * @n: number
 * @m: position
 * Return: returns the flipped bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

