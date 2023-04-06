#include "main.h"

/**
  * _sqrt_recursion -  natural square root of a number
  * @n: number
  * Return: returns the natural square root of a number.
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (_sqrt_recursion(n, 0));
}

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
        return (actual_sqrt_recursion(n, i + 1));
}
