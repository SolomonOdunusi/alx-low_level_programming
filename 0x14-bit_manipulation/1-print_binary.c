#include "main.h"

/**
 * print_binary - convert numbers to binary
 * @n: unsigned integer
 * Return: returns printed binary number
*/
void print_binary(unsigned long int n)
{
	unsigned long int bitset = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeroes = 1;

	while (bitset)
	{
		if (n & bitset)
		{
			_putchar('1');
			leading_zeroes = 0;
		}
		else
		{
			if (!leading_zeroes)
			{
				_putchar('0');
			}
		}
		bitset >>= 1;
	}

	if (leading_zeroes)
	{
		_putchar('0');
	}

}
