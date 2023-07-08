#include "main.h"

/**
 * print_binary - convert num to binary
 * @n: unsigned integer num
 * Return: returns printing binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int bitset = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int primary_zeroes = 1;

	while (bitset)
	{
		if (n & bitset)
		{
			_putchar('1');
			primary_zeroes = 0;
		}
		else
		{
			if (!primary_zeroes)
			{
				_putchar('0');
			}
		}
		bitset >>= 1;
	}
	if (primary_zeroes)
	{
		_putchar('0');
	}
}
